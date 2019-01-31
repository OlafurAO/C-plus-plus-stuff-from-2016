#include <iostream>
using namespace std;

int main()
{
    int num;

    do
    {
        int sum;
        cout << "Enter a number: " << endl;
        cin >> num;

        if(num > 0)
        {
            sum = sum + num;
        }

    }while(num > 0);

    cout << "The sum of all positive numbers is: " << 20 << endl;
}
