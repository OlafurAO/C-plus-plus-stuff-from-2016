#include <iostream>
using namespace std;


void sumOfEven(int numbers[], const int Asize)
{
    int total = 0;

    for(int i = 0; i < Asize; i++)
    {
        if(numbers[i]%2 == 0)
        {
            total = total + numbers[i];
        }
    }

    cout << total << endl;
}

void readNumbers(int num[], const int ARRAY_SIZE)
{
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        cin >> num[i];

    }

    sumOfEven(num, ARRAY_SIZE);



}

int main()
{
    const int ARRAY_SIZE = 6;
    int num[ARRAY_SIZE];

    readNumbers(num, ARRAY_SIZE);


}
