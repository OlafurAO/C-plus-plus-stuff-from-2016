#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

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
    Student high;

    int num;
    double total = 0;
    double avg = 0;

    cout << "Number of students: " << endl;
    cin >> num;

    cout << "--- Reading Students ---" << endl;
    for(int i = 0; i < num; i++)
    {
        cout << "Name: ";
        cin >> st.name;
        cout << "Grade: ";
        cin >> st.grade;
        cout << endl;

        students.push_back(st);

        total = total + st.grade;

        if(students[i].grade > students[i -1].grade)
        {
            high = students[i];

        }
    }

    for(int i = 0; i < num; i++)
    {
        cout << "Name: " << students[i].name << endl;
        cout << "Grade: " << students[i].grade << endl;
        cout << endl;
    }

    cout << "Highest student: " << endl;
    cout << "Name: " << high.name << endl;
    cout << "Grade: " << high.grade << endl;
    cout << endl;

    avg = total/num;

    std::cout << fixed;

    cout << "Average grade: ";
    std::cout << setprecision(5) << avg;
}
