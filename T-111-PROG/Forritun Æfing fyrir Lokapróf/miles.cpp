#include <iostream>
using namespace std;

double km_to_miles(double km, int whichMile)
{
    double miles;
    double nautical;
    double scand;

    double total;

    miles = 1.609;
    nautical = 1.852;
    scand = 1000;

    if(whichMile == 1)
    {
         total = miles * km;
         return total;
    }

    else if(whichMile == 2)
    {
        total = nautical * km;
        return total;
    }
    else if(whichMile == 3)
    {
        total = scand * km;
        return total;
    }




}

int main()
{
    double km;
    int whichMile;

    cout << "Input distance in kilometres: " << endl;
    cin >> km;
    cout << "You have input " << km << " kilometres." << endl;
    cout << "What type of mile do you want to convert to?" << endl;
    cout << "1. International" << endl;
    cout << "2. Nautical" << endl;
    cout << "3. Scandinavian" << endl;
    cin >> whichMile;

    double total = km_to_miles(km, whichMile);

    if(whichMile == 1)
    {
        cout << km << " kilometres coverts to " << total << " international miles." << endl;
    }

    else if(whichMile == 2)
    {
        cout << km << " kilometres coverts to " << total << " nautical miles." << endl;
    }

    else if(whichMile == 3)
    {
        cout << km << " kilometres coverts to " << total << " scandinavian miles." << endl;
    }






}
