#include <iostream>
using namespace std;

int main()
{
    char grade;
    cout << "Enter your letter grade: " << endl;
    cin >> grade;

    if (grade == 'A')
    {
        cout << "Grade " << grade << " corresponds to number 4" << endl;
    }

    else if (grade == 'B')
    {
        cout << "Grade " << grade << " corresponds to number 3" << endl;
    }

    else if (grade == 'C')
    {
        cout << "Grade " << grade << " corresponds to number 2" << endl;
    }

    else if (grade == 'D')
    {
        cout << "Grade " << grade << " corresponds to number 1" << endl;
    }

    else if (grade == 'F')
    {
       cout << "Grade " << grade << " corresponds to number 0" << endl;
    }

    else
    {
        cout << "Invalid grade " << grade << endl;
    }

}
