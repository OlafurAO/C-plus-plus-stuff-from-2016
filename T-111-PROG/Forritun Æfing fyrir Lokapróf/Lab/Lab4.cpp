#include <iostream>
using namespace std;


double numberOfShares(int shares)
{
    cout << "Enter number of shares: " << endl;
    cin >> shares;

    return shares;
}
double priceOfShares(double dollars)
{
    double numerator;
    double denominator;
    cout << "Enter price (dollars, numeratos, denominator): " << endl;
    cin >> dollars;
    cin >> numerator;
    cin >> denominator;

    return (dollars && numerator && denominator);
}

char cont(char continu)
{
    cin >> continu;
    return continu;
}

int main()
{
    char continu;
    int shares;
    int dollars;

    do
    {
        double numShares = numberOfShares(shares);
        double priceShares = priceOfShares(dollars);
        char continueOrNot = cont(continu);

        cout << numShares << " shares with market price " << dollars << numerator << std::flush;
        cout << "/" << denominator << " have value " << endl;

    }




}
