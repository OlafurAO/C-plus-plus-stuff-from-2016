#include <iostream>
using namespace std;

double fahr(int counter)
{
    double temp = (counter * 1.8) + 32;

    return temp;
}


int main()
{
    int N;
    int counter = 0;


    cout << "Input maximum celsius: " << endl;
    cin >> N;

    while(counter < N + 1)
    {
        double temp = fahr(counter);
        cout << counter << " " << temp << endl;
        counter++;
    }



}
