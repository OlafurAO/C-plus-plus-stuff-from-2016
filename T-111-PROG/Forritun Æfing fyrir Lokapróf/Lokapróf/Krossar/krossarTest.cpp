#include <iostream>
#include <vector>
using namespace std;

int main()
{
    double number1 = 1;
    double number2 = 5;

    if(number1 != 5 || number2 < 5)
        cout << "A";
    else
        cout << "B";


    if(!(number1 != 5 | number2 <= 5))
        cout << "C";
    else
        cout << "D";

    if(!(number1 < 0) && number2 != 50)
        cout << "E";
    else
        cout << "F";


}
