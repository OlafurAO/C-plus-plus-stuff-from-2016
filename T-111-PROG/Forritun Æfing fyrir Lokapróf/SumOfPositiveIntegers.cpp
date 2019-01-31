#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int positivCounter = 0;
    int negativCounter = 0;

    for(int i = 0; i < 10; i++)
    {
        int number;
        cout << "Input number: " << endl;
        cin >> number;

        if(number > 0)
        {
            sum = sum + number;
            positivCounter++;
        }
        else
        {
            negativCounter++;
        }
    }
    cout << "The sum is " << sum << endl;
    cout << "The amount of positive integers is " << positivCounter << endl;
    cout << "The amount of negative integers is " << negativCounter << endl;

}
