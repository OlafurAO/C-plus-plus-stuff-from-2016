#include <iostream>
using namespace std;

void swapFrontBack(int num[], const int ARRAY_SIZE)
{
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        cin >> num[i];
    }
    cout << endl;

    for(int i = ARRAY_SIZE -1; i > -1; i--)
    {
        cout << num[i] << " ";
    }
}
int main()
{
    const int ARRAY_SIZE = 5;
    int num[ARRAY_SIZE];

    swapFrontBack(num, ARRAY_SIZE);

}
