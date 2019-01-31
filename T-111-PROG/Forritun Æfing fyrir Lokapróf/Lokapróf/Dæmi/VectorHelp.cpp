#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Student
{
    string name;
    double grade;
};

int main()
{
    vector<Student> students;
    Student st;
    Student highest;

    int num;
    double total = 0;
    double avg = 0;

    cout << "Number of students: " << endl;
    cin >> num;
    cout << "--- Reading students ---" << endl;

    for(int i = 0; i < num; i++)
    {
        cout << "Name: ";
        cin >> st.name;
        cout << "Grade: ";
        cin >> st.grade;
        cout << endl;

        students.push_back(st);

        total = total + st.grade;

        if(students[i].grade > students[i-1].grade)
        {
           highest = students[i];
        }
    }

    for(int i = 0; i < num; i++)
    {
        cout << "Name: " << students[i].name << endl;
        cout << "Grade: " << students[i].grade << endl;
        cout << endl;
    }

    cout << "Highest grade: " << endl;
    cout << "Name: " << highest.name << endl;
    cout << "Grade: " << highest.grade << endl;
    cout << endl;

    avg = total/num;

    cout << "Average grade: " << endl;
    cout << avg;


}
