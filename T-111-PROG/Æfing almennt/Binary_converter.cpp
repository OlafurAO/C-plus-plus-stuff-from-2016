#include <iostream>
using namespace std;

int main()
{
    int n;

    int i = 8;
    int bin[i] = {1, 2, 4, 8, 16, 32, 64, 128};

    cout << "Enter a number between 0 and 255" << endl;
    cin >> n;

    do
    {
        int sum;

        if (sum < 0)
        {
            sum = n - bin[i];
            cout << "0";

        }

        else
        {
            sum = n - bin[i];
            cout << "1";

        }
        n = sum;
        i--;

    }while (n - bin[i] > 0);
}
