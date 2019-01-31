#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;

    cout << "Input first number: " << endl;
    cin >> a;

    cout << "Input second number: " << endl;
    cin >> b;

    if(a<b)
    {
        cout << "Smaller" << endl;
    }
    else if(a>b)
    {
        cout << "Larger" << endl;
    }
    else
    {
        cout << "Equal" << endl;


    }
}
