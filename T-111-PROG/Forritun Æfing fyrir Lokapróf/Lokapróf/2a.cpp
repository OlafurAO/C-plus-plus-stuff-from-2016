#include <iostream>
#include <iomanip>
using namespace std;

void hitastig(int highest, int lowest)
{
    do
    {
        double fahr;
        double kelv;

        int celcius;
        celcius = lowest;


        fahr = (1.8 * celcius) + 32;
        kelv = celcius + 273.15;


        std::cout << std::fixed;
        std::cout << setprecision(2) << celcius << " "  << fahr << " " << kelv << endl;
        celcius++;
        celcius++;
        lowest++;
        lowest++;
    }while(lowest < highest + 1);

}

int main()
{
    int highest;
    int lowest;


    cin >> lowest;
    cin >> highest;

    cout << "Cels Fahrenheit Kelvin" << endl;

    hitastig(highest, lowest);


}
