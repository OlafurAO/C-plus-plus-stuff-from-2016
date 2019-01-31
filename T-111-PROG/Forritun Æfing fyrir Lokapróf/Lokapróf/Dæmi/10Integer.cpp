#include <iostream>
using namespace std;

int main()
{
    int num[9];
    int total = 0;
    double total2 = 0;
    double avg = 0;
    int counter = 0;

    for(int i = 0; i < 10; i++)
    {
        cin >> num[i];

        if(num[i] < 101 && num[i] >  -101)
        {
            total = total + num[i];
        }

        else
        {
            total2 = total2 + num[i];
            counter++;
        }

    }
    avg = total2/counter;

    cout << total << endl;
    cout << avg << endl;

}
