#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double sum = 0.000;
    double avg;
    double Pcounter = 0.000;

    for(int i = 0; i < 10.000; i++)
    {
        int number;
        cin >> number;

        if(number > 0)
        {
            sum = sum + number;
            Pcounter++;
        }

    }

    avg = sum/Pcounter;
    std::cout << std::fixed;
    std::cout << std::setprecision(3) << avg << endl;
}
