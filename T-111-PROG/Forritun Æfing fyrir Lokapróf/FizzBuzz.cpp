#include <iostream>
using namespace std;

int main()
{
    int number;
    int i = 1;

    cout << "Input number: " << endl;
    cin >> number;

    do
    {
        if(i%3 == 0)
        {
            cout << "Fizz" << endl;
            i++;
        }
        else if(i%5 == 0)
        {
            cout << "Buzz" << endl;
            i++;
        }
        else
        {
            cout << i << endl;
            i++;
        }

    }while(i < number);
}
