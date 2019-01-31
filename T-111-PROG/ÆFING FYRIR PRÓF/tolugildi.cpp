#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Input a number: " << endl;
    cin >> a;

    if (a<0)
    {
        cout << "The number is " << a*-1 << endl;
    }
    else
    {
        cout << "The number is " << a << endl;
    }
}
