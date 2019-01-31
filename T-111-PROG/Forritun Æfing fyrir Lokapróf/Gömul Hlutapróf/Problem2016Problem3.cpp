#include <iostream>
using namespace std;

double milesToMetres(double mile, int type)
{
    double meters;

    if(type == 1)
    {
        meters = mile * 1609;
        return meters;
    }
    else if(type == 2)
    {
        meters = mile * 1852;
        return meters;
    }
    else if(type == 3)
    {
        meters = mile * 10000;
        return meters;
    }

}

int main()
{
    double mile;
    int type;

    cout << "Enter distance in miles: " << endl;
    cin >> mile;
    cout << "Enter type of mile: " << endl;
    cin>> type;

    double meters = milesToMetres(mile, type);

    if(type == 1)
    {
        cout << mile << " English mile(s) equals " << meters << " meters" << endl;
    }
    else if(type == 2)
    {
        cout << mile << " Nautical mile(s) equals " << meters << " meters " << endl;
    }
    else if(type == 3)
    {
        cout << mile << " Scandinavian mile(s) equals " << meters << " meters " << endl;
    }
    else
    {
        cout << "Invalid mile type selected!" << endl;
    }
}
