#include <iostream>
using namespace std;

int main()
{
    int a;

    cout << "Input number: " << endl;
    cin >> a;

    while(a > 0)
    {
        cout << a << endl;
        a--;
    }
    cout << "BOOM!" << endl;
}
