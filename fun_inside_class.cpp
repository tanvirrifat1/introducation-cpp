#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    Student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }
};

int main()
{

    Student Rifat("Rifat", 10);
    cout << Rifat.name << " ";
    cout << Rifat.roll;

    return 0;
}