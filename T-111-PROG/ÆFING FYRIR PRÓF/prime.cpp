#include <iostream>
using namespace std;

int main()
{
    int a1;
    int a2;

    cout << "Input first number: " << endl;
    cin >> a1;
    cout << "Input second number: " << endl;
    cin >> a2;


    while(a1 >= a2)
    {
        if(a1%1 == 0)
        {
            cout << a1 << endl;
            a1++;
            a1++;
        }
    }

}

