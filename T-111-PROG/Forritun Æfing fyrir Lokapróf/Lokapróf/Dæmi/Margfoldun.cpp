#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Input size of table: " << endl;
    cin >> number;

    for(int i = 1; i < number + 1; i++)
    {
        cout << "\t" << i;
    }
    cout << endl;
    cout << "\t";

    for(int i = 0; i < number*8; i++)
    {
        cout << "-";
    }

    cout << endl;

    for(int i = 1; i < number + 1; i++)
    {
        cout << i << " |";
        for(int j = 1; j < number + 1; j++)
        {
            cout << "\t" << i*j;
        }
        cout << endl;
    }


}
