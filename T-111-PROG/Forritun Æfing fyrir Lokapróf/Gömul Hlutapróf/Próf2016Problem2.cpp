#include <iostream>
using namespace std;

int main()
{
    char letter;
    int num;

    cout << "Enter letter: " << endl;
    cin >> letter;
    cout << "Enter how many: " << endl;
    cin >> num;

    for(int i = 1; i <= num; i++)
    {
        for(int j = i; j <= num; j++)
        {
            cout << letter << endl;
        }
        cout << endl;
    }
}
