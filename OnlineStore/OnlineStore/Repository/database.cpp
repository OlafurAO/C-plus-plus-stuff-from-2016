#include "database.h"

Database::Database()
{

}

void Database::initialize()
{
    ifstream file;
    file.open("ProductList.txt", ios::app);

    for(int i = 0; i < 10; i++)
    {
        file >> p.name >> p.price >> p.quantity;

        product.push_back(p);
    }

    file.close();
}

void Database::addItem(string command)
{
    for(int i = 0; i < product.size(); i++)
    {
        if(product[i].name == command)
        {
            p.name = product[i].name;
            p.price = product[i].price;

            product[i].quantity--;

            basket.push_back(p);
        }
    }
}

void Database::deleteBasket()
{
    for(int i = 1; i <= basket.size(); i++)
    {
        basket.pop_back();
    }




}
