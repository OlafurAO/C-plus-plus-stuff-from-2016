#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;

    cout << "Input number a:" << endl;
    cin >> a;
    cout << "Input number b:" << endl;
    cin >> b;

    for(int i = a; i < b; i++)
    {
        for(int j = a; j*j <= i; j++)
        {
            if(i%j == 0)
            {
                break;
            }
            else if()
        }

    }
}
