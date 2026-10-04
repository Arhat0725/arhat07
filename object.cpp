#include <iostream>
using namespace std;

class Student
{
    int rollno;
    int marks;

public:
    void accept()
    {
        cout << "Enter Roll Number and Marks: ";
        cin >> rollno >> marks;
    }

    void display()
    {
        cout << "Roll No: " << rollno << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s[3];

    cout << "Enter details of 3 students:\n";

    for (int i = 0; i < 3; i++)
    {
        s[i].accept();
    }

    cout << "\nStudent Details:\n";

    for (int i = 0; i < 3; i++)
    {
        s[i].display();
    }

    return 0;
}