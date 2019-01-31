#include <iostream>
using namespace std;

void countdown(int counter)
{
    do
    {
        cout << counter << endl;
        counter--;
    }while(counter > 0);
}

int main()
{
    int counter;

    cout << "Input a number: " << endl;
    cin >> counter;

    countdown(counter);

    cout << "BOOM!!" << endl;

}
