#include <iostream>
using namespace std;

// TODO: implement the too_heavy function here

// DO NOT EDIT BELOW THIS LINE
// ---------- snip -----------

int main()
{
    int weight, height;
    while (cin >> weight >> height)
    {
        cout << "too_heavy(" << weight << ", " << height << ") = ";

        if (too_heavy(weight, height))
        {
            cout << "true" << endl;
        }
        else
        {
            cout << "false" << endl;
        }
    }

    return 0;
}
