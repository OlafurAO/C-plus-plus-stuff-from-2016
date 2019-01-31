#include <iostream>
using namespace std;

int main()
{
    double Cel;
    double highCel;
    double Fahr;

    cout << "Input lowest degrees in celcius: " << endl;
    cin >> Cel;
    cout << "Input highest degrees in celcius: " << endl;
    cin >> highCel;



    cout << "Cels  Fahr" << endl;

    while(Cel < highCel + 1)
    {
        Fahr = Cel * 1.8 + 32;

        cout << Cel << "    " << Fahr << endl;

        for(int i = 0; i < 5; i++)
        {
            Cel++;
        }
    }


}
