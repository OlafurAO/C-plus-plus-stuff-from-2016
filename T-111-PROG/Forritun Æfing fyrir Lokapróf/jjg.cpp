#include <iostream>
using namespace std;

int main()
{
    int number = 1.9;
    if(number > 1)
    {
        cout << 2;
        cout << 3;
    }
    else if(number == 1)
    {
        cout << 5;
    }
    else
        cout << 7;
        cout << 11;


    int num[5];

    for(int i = 0; i < 5; i++)
    {
        cin >> num[i];
    }

    for(int i = 0; i < 5; i++)
    {
       cout << num[i] << endl;
    }

    int a;

    cout << "Input integer: " << endl;
    cin >> a;

    for(int i = 1; i <= a; i++)
    {
        for(int j = i; j <= a; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

}
