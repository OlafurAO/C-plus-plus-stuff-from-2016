#include <iostream>
#include <iomanip>
using namespace std;

double interest_rate(double price)
{
    double interest;

    if(price <= 1000)
    {
        interest = 0.015;
        return interest;
    }
    else
    {
        interest = 0.020;
        return interest;
    }

}

int main()
{
    int month;
    int counter = 1;

    double price;
    double remaining;
    double totalInterest;

    cout << "Input the cost of the item in $: " << endl;
    cin >> price;

    double interestRate = interest_rate(price);

    while(price > 0)
    {
        double interestPaid = interestRate * price;
        double payments = 50 - interestPaid;

        price = price - payments;

        std::cout << fixed;

        cout << "Month: " << std::flush;
        std::cout << setprecision(2) << counter << ", Interest paid: " << interestPaid << std::flush;
        std::cout << setprecision(2) << ", Remaining debt: " << price << endl;

        totalInterest = totalInterest + interestPaid;

        counter++;


    }
    cout << "number of months: " << counter - 1 << endl;
    cout << "Total interest paid: " << totalInterest << endl;




}
