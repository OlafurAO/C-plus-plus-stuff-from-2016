#include <iostream>
using namespace std;

int main()
{
    int amount;
    string name;
    double weight;

    cout << "Enter the amount of contestants: " << endl;
    cin >> amount;

    while(amount > 0)
    {
        cout << "Enter the contestant's name: " << endl;
        cin >> name;

        cout << "Enter the contestant's weight: " << endl;
        cin >> weight;

        if(weight < 60)
        {
            cout << name << " is lightweight." << endl;
        }
        else if(weight >= 60 || weight <= 90)
        {
            cout << name << " is middleweight." << endl;
        }
        else if(weight > 90)
        {
            cout << name << " is heavyweight." << endl;
        }


        amount--;
    }

}
