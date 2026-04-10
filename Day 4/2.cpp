#include <iostream>
using namespace std;

// MULTIPLE INHERITANCE
// when a child class is inherited from 2 Parent class

class student
{
public:
    string name;
    int rollno;
};

class teacher
{

public:
    string subjects;
    double salary;
};

class teachingAssistant : public student, public teacher
{
public:
};

int main(){

    teachingAssistant ta1;

    ta1.name = "sahil";
    ta1.rollno = 23; 
    ta1.subjects = "cs";
    ta1.salary = 80000;
    cout<<"name is "<<ta1.name<<endl;
    cout<<"Rollno is "<<ta1.rollno<<endl;
    cout<<"Subject is "<<ta1.subjects<<endl;
    return 0;
}