#include <iostream>
using namespace std;

int milesTometres(int dis, int type)
{
    int total;

    if(type == 1)
    {
        total = dis * 1609;

        return total;

    }
    else if(type == 2)
    {
        total = dis * 1847;

        return total;
    }
    else if(type == 3)
    {
        total = dis * 10000;

        return total;
    }

}

int main()
{
    int dis;
    int type;

    cout << "Enter amount of miles: " << endl;
    cin >> dis;
    cout << "Emter type of mile: " << endl;
    cin >> type;

    double total = milesTometres(dis, type);


    if(type == 1)
    {
        cout << dis << " english mile(s) equals " << total << endl;
    }
    else if(type == 2)
    {
        cout << dis << " nautical mile(s) equals " << total << endl;
    }
    else if(type == 3)
    {
        cout << dis << " scandinavian mile(s) equals " << total << endl;
    }
    else
    {
        cout << "Invalid mile type!" << endl;
    }


}
