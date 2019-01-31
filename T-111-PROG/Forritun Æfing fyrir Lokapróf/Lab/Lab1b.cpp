#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int exer;
    double score;
    double pointsPos;
    double total1;
    double total2;
    int counter = 1;

    cout << "How many exercises to input: " << endl;
    cin >> exer;

    if(exer > 0)
    {
        do
        {
            cout << "Score recieved for exercise " << counter << ". " << endl;
            cin >> score;
            cout << "Total points possible for exercise " << counter << ". " << endl;
            cin >> pointsPos;
            counter++;

            total1 = total1 + score;
            total2 = total2 + pointsPos;

        }while(counter < exer + 1);
    }

    else
    {
        cout << "Input at least one exercise!" << endl;
        return 0;
    }

    double percentage = (total1/total2) * 100;

    cout << "Your total is " << total1 << " out of " << total2 << ", or " << std::flush;
    std::cout << fixed;
    std::cout << setprecision(2) << percentage << "%." << endl;

}
