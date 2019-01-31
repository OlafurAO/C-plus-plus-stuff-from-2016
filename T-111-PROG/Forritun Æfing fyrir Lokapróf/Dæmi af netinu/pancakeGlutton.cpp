#include <iostream>

using namespace std;

int main()
{
    const int ARRAY_SIZE = 10;
    int person [ARRAY_SIZE];
    int pancakes[ARRAY_SIZE];

    cout << "Input how many pancakes each person ate: " << endl;

    for(int i = 1; i < ARRAY_SIZE +1; i++)
    {
        cout << "Person " << i << endl;
        cin >> pancakes[i];

    }
}
