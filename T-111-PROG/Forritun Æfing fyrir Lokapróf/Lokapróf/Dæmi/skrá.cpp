#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n = 7;
    ifstream theFile("Hello.txt");

    theFile >> n;
    cout << n;

}
