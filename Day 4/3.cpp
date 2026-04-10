#include <iostream>
using namespace std;

// Hierarchial inheritance
// when 2 child class inherit from 1 parent class 

//last we have hybrid inheritance  
//mix of all inheritance eg from Person -- student and teacher inherit 
//then gradstudent from student inherit then ta from gradstudent and teacher etc... 

class person
{
public:
    string name;
    int age;
};

class student : public person
{
public:
    int rollno;
};

class teacher : public person
{
public:
    string subjects;
};

int main()
{

    student s1;
    s1.name = "sahil";
    s1.age = 23;
    s1.rollno = 543;

    cout<<"name is "<<s1.name<<endl;
    cout<<"age is "<<s1.age<<endl;
    cout<<"rollno is "<<s1.rollno<<endl;
    
    
    teacher t1;
    t1.name = "hitesh";
    t1.age = 34;
    t1.subjects = "dbms";
    
        cout<<"name is "<<t1.name<<endl;
        cout<<"age is "<<t1.age<<endl;
        cout<<"subjects is "<<t1.subjects<<endl;


    return 0;
}