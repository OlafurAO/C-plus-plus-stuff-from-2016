#include <iostream>

using namespace std;

int main()
{
    double kg;
    double metres;
    double bmi;

    cout << "Input your weight in kilos: " << endl;
    cin >> kg;

    cout << "Input your height in meters: " << endl;
    cin >> metres;

    bmi = kg/(metres*metres);

    cout << "Your BMI is: " << bmi << endl;




}
