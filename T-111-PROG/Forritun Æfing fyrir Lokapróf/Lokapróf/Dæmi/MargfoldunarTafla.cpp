#include <iostream>
using namespace std;

int main()
{
    int tableSize;


    cout << "Input table size: " << endl;
    cin >> tableSize;

    cout << "       ";

    for(int i = 1; i < tableSize + 1; i++)
    {
        cout << i << "    ";

    }
    cout << endl;
    cout << "       ";

    for (int i = 1; i < tableSize; i++)
    {
        cout << "------";
    }

    cout << endl;
    for(int i = 0; i < tableSize; i++)
    {
        cout << i + 1 << " |";
        for(int j = 0; j < tableSize; j++)
        {
            int multi = (i+1) * (j+1);
            if(multi <= 9)
            {
                cout << "    " << multi;
            }
            else
            {
                cout << "   " << multi;
            }


        }
        cout << endl;
    }
}
