#include <iostream>
using namespace std;

int main()
{
    int lotto;
    cout << "Please pick a number between 0 and 100: " << endl;
    cin >> lotto;

    if(lotto >= 56 && lotto <= 78)
    {
        cout << "Congtatulations! You won!" << endl;

    }
    else
    {
        cout << "LOL you lose!" << endl;
    }
}
