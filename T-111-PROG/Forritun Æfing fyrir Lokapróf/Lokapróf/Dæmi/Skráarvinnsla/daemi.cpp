#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream theFile("Hello.txt", ios::app);

    theFile << "Hello world" << endl;

    theFile.();
    theFile.close();
}
