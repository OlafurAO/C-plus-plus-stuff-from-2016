#include <iostream>
using namespace std;

int main()
{
    int accidents[20][140];

    int weeks;
    int currentWeek = 0;

    cout << "Enter amount of weeks: " << endl;
    cin >> weeks;

   for(int i = 0; i < weeks; i++)
    {
        for(int j = 0; j < 7; j++)
        {
            cin >> accidents[currentWeek][j];
        }
       currentWeek++;
       weeks++;
    }



}
