#include "servicelayer.h"

ServiceLayer::ServiceLayer()
{
    database.initialize();
    basketAmount = 0;
    total = 0;
}

void ServiceLayer::mainMenu()
{
    cout << "Welcome to the Online Store\n\n" << endl;
    cout << "     List of Products\t\t\t Basket: " << basketAmount << " item/s" << endl;

    for(int i = 0; i < 25; i++)
    {
        cout << "=";
    }

    cout << "                ";

    for(int i = 0; i < 16; i++)
    {
        cout << "=";
    }

    cout << endl;

    cout << "Item    Price   Stock";
    cout << endl;

   /* if(database.basket.size() == NULL)
    {
        cout << endl;
    }

    else
    {
        cout << "\t\t\t " << database.basket[0].name << "\t " << database.basket[0].price << endl;
    }*/

    for(int i = 0; i < 10; i++)
    {
        cout << database.product[i].name << "\t";
        cout << database.product[i].price << "\t";
        cout << database.product[i].quantity << "\t\t\t ";

        /*if(database.basket.size() == NULL)
        {
            cout << endl;
        }*/

        if(database.basket.size() > i)
        {
            cout << database.basket[i].name << "\t" << database.basket[i].price << endl;

            total += database.basket[i].price;
        }

        else
        {
            cout << endl;
        }
     }

    for(int i = 0; i < 25; i++)
    {
        cout << "=";
    }

    cout << "\t\t";

    for(int i = 0; i < 16; i++)
    {
        cout << "=";
    }

    cout << endl;

    cout << "\t\t\t\t\tTotal: " << "$" << total << endl;

    cout << "Enter Products to buy ('checkout' to Check Out): ";
}

void ServiceLayer::enterCommand()
{
    cin >> command;

    bool valid = commandValid(command);

    if(!valid)
    {
        system("cls");
        cout << "Enter Valid Command!" << endl;
        throw ServiceLayer();
    }

    commandCheck(command);
}

void ServiceLayer::commandCheck(string item)
{
    if(item != "checkout" && item != "Checkout")
    {
        database.addItem(item);

        basketAmount++;

        system("cls");
        throw ServiceLayer();
    }

    else if(item == "checkout" || item == "Checkout")
    {
        system("cls");
        proceedToCheckout();
    }

}

void ServiceLayer::proceedToCheckout()
{
    string command;

    cout << "           Order" << endl;

    for(int i = 0; i < 26; i++)
    {
        cout << "=";
    }

    cout << endl;

    for(int i = 0; i < database.basket.size(); i++)
    {
        cout << database.product[i].name << "\t" << database.product[i].price << endl;
    }

    for(int i = 0; i < 26; i++)
    {
        cout << "=";
    }

    cout << endl;

    cout << "Total: $" << total << endl;
    cout << endl;

    cout << "Confirm Order (Y/N)?: ";
    cin >> command;

    bool confirm = checkoutConfirm(command);

    if(!confirm)
    {
        system("cls");
        cout << "Enter Valid Command!" << endl;
        return proceedToCheckout();
    }

    string command2;

    system("cls");

    cout << "Thank You for Your Business!" << endl;
    cout << "Print Receipt (Y/N)?: ";
    cin >> command2;

    bool confirm2 = checkoutConfirm(command2);

    if(confirm2)
    {
        printReceipt();
        throw Database();
    }

    else
    {
        throw Database();
    }


}

bool ServiceLayer::checkoutConfirm(string command)
{
    if(command == "Y" || command == "y")
    {
        return true;
    }

    else if(command == "N" || command == "n")
    {
        system("cls");
        basketAmount = 0;
        database.deleteBasket();
        throw ServiceLayer();
    }

    else
    {
        return false;
    }
}

bool ServiceLayer::commandValid(string item)
{
    if(item == "eggs" || item == "Eggs")
    {
        return true;
    }

    else if(item == "meat" || item == "Meat")
    {
        return true;
    }

    else if(item == "milk" || item == "Milk")
    {
        return true;
    }

    else if(item == "bread" || item == "Bread")
    {
        return true;
    }

    else if(item == "cereal" || item == "Cereal")
    {
        return true;
    }

    else if(item == "gum" || item == "Gum")
    {
        return true;
    }

    else if(item == "book" || item == "Book")
    {
        return true;
    }

    else if(item == "toy" || item == "Toy")
    {
        return true;
    }

    else if(item == "dvd" || item == "Dvd" || item == "DVD")
    {
        return true;
    }

    else if(item == "cd" || item == "CD" || item == "Cd")
    {
        return true;
    }

    else if(item == "checkout" || item == "Checkout")
    {
        return true;
    }

    else
    {
        return false;
    }
}

void ServiceLayer::printReceipt()
{
    ofstream file;

    file.open("Receipt.txt", ios::app);

    for(int i = 0; i < 16; i++)
    {
        file << "=";
    }

    file << endl;

    for(int i = 0; i < database.product.size(); i++)
    {
        file << database.basket[i].name << "    " << database.product[i].price << endl;
    }

    for(int i = 0; i < 16; i++)
    {
        file << "=";
    }

    file << endl;

    file << "Total: $" << total << endl;

    file.close();
}
