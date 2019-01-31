#include <iostream>
#include <stdlib.h>

using namespace std;

void mainMenu();
int firstNum();
int secondNum();
int calculate(int x, int y);
void displayGcd(int x, int x2, int y2);

int main()
{
    mainMenu();

    cout << "Choose x: " << endl;
    cout << "gcd(x, y) ";

    int num1 = firstNum();

    system("cls");
    mainMenu();

    cout << "Choose y: " << endl;
    cout << "gcd(" << num1 << ", y) ";

    int num2 = secondNum();

    system("cls");
    mainMenu();

    calculate(num1, num2);
}

int firstNum()
{
    int num;
    cin >> num;
    return num;
}

int secondNum()
{
    int num;
    cin >> num;
    return num;
}

int calculate(int x, int y)
{
    int x2 = x;
    int y2 = y;
    int remainder;
    int mult;

    for(int i = remainder; i > 0; i += 0)
    {
        remainder = x%y;
        mult = x/y;

        cout << "gcd(" << x << ", " << y << ") = " << y << " * ";
        cout << mult << " + " << remainder << endl;

        x = y;
        y = remainder;

        if(y == 0)
        {
            displayGcd(x, x2, y2);
            return 0;
        }
    }
}

void mainMenu()
{
    cout << "The Euclidean algorithm calculator" << endl;

    for(int i = 0; i <= 34; i++)
    {
        cout << "=";
    }
    cout << endl;
}

void displayGcd(int x, int x2, int y2)
{
    cout << "\nGreatest common denominator found! " << endl;

    for(int i = 0; i <= 34; i++)
    {
        cout << "=";
    }

    cout << endl;

    cout << "gcd(" << x2 << ", " << y2 << ") = " << x << endl;
}
