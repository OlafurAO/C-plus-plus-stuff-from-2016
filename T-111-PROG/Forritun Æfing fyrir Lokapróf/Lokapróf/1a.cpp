#include <iostream>
using namespace std;

int main()
{
    int sum = 0;

    for(int i = 0; i < 10; i++)
    {
        int number;
        cin >> number;

        if(number > 0)
        {
            sum = sum + number;
        }

    }
    cout << sum << endl;
}
