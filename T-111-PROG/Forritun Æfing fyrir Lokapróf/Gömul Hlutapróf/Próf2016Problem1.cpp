#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;

    cout << "Enter the first number: " << endl;
    cin >> a;
    cout << "Enter the second number: " << endl;
    cin >> b;

    if (b > a)
    {
        do
        {
            cout << a << endl;
            a++;
            a++;
            a++;


        }while(a < b);

        cout << b << endl;

    }

    else if (b < a)
    {
        do
        {
            cout << b << endl;
            b++;
            b++;
            b++;


        }while(a > b);

        cout << a << endl;
    }


}
