#include <iostream>
using namespace std;

int main()
{
    int n;
    int kkk;
    kkk = 1;

    cout << "Input n: " << endl;
    cin >> n;

    while (kkk <= n)
    {
        if(kkk%3 == 0)
        {
            cout << "Fizz" << endl;

        }
        else if(kkk%5 == 0)
        {
            cout << "Buzz" << endl;

        }
        else if(kkk%5 || kkk%3 == 0)
        {
            cout << "FizzBuzz" << endl;

        }
        cout << kkk << endl;

        kkk++;



    }
}

