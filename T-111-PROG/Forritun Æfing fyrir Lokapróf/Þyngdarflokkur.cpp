#include <iostream>
using namespace std;

int main()
{
    string name;
    int instances;
    double weight;

    cout << "Input number of contestants: " << endl;
    cin >> instances;

    for(int i = 0; i < instances; i++)
    {
       cout << "Enter the name of contestant number " << i + 1 << endl;
       cin >> name;
       cout << "Enter the weight of " << name << " in kg" << endl;
       cin >> weight;

       if(weight < 60)
       {
           cout << name << " competes in lightweight!" << endl;
       }

       else if(weight >= 60 && weight <= 90)
       {
           cout << name << " competes in middleweight!" << endl;
       }
       else
       {
           cout << name << " competes in heavyweight!" << endl;
       }
    }
}
