#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Input a number: " << endl;
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
