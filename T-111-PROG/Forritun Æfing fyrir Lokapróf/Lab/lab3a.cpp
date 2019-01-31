#include <iostream>
using namespace std;

int main()
{
    int N;

    cout << "Input integer: " << endl;
    cin >> N;

    for(int i = 1; i <= N; i++)
    {
        for(int j = i; j <= N; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
