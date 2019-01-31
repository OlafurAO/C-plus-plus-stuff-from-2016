#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student
{
    string name;
    double grade;
};

int main()
{
    vector<Student> students;
    int numberOfStudents;

    Student st;

    double total = 0;
    double avg = 0;

    cout << "Number of students: " << endl;
    cin >> numberOfStudents;

    cout << "--- Reading students ---" << endl;

    for(int i = 0; i < numberOfStudents; i++)
    {
        cout << "Name: ";
        cin >> st.name;


        cout << "Grade: ";
        cin >> st.grade;
        students.push_back(st);

        total = total + st.grade;

        cout << endl;

    }

    avg = total/numberOfStudents;

    for(int i = 0; i < numberOfStudents; i++)
    {
        cout << students[i].name << endl;
        cout << students[i].grade << endl;

        if(students[i].grade > students[i - 1].grade)
        {
            int highest = st;
        }
    }

    cout << "Average grade: " << avg << endl;




}
