#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int mod;
    char YorN;


    cout << "Input number a: " << endl;
    cin >> a;

    cout << "Input number b: " << endl;
    cin >> b;

    mod = a/b;
    int remainder;
    remainder = a - (mod * b);

    cout << b << " gengur " << mod << " sinnum upp i " << a << endl;
    cout << "Afgangur er " << remainder << endl;

    cout << "Do you want to find the lowest common denominator" << endl;
    cout << "using the Euclidian algortihm?" << endl;
    cout << "Press Y or N" << endl;
    cin >> YorN;



    if(YorN == 'y')
    {
        int remainder2;
        do
        {

            int mod2;
            mod2 = b/remainder;
            remainder2 = b - (mod2 * remainder);

            cout << remainder  << "*" << mod2 << " + " << remainder2 << endl;
        }while(remainder2 > 0);
    }
    if(YorN == 'n')
    {
        cout << "Well, fuck you too!" << endl;
    }
    else
    {
        return 0;
    }



}
