#include <iostream>
using namespace std;

int main()
{
    int N;
    int b;

    cout << "Input N: " << endl;
    cin >> N;

    while(N > 0)
    {
        if (N%2 == 0)
        {
            cout << N << " is even" << endl;
        }

        else if (N%2 > 0)
        {
            cout << N << " is odd" << endl;
        }
        N--;
    }
}
