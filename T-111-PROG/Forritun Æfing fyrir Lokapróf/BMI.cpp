#include <iostream>
using namespace std;

int main()
{
    double h;
    double w;

    cout << "Input your height in metres: " << endl;
    cin >> h;

    cout << "Input your weight in kg: " << endl;
    cin >> w;

    double bmi;

    bmi = w/(h*h);

    cout << "Your BMI is " << bmi << endl;
}
