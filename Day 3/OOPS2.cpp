#include <iostream>
using namespace std;

class student
{

public:
    string name;
    double *cgpaPtr;    //in this we dont directly submit value instead of we make a pointer and the value at this address at heap memory that is dynamic allocation

    student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
        
    }

    student(student &obj)
    {
        this->name = obj.name;
        cgpaPtr = new double;  //we create a copy in heap memory also but value is same in both the object but address are different so that we can change in anyone one of object easily 
        *cgpaPtr = *obj.cgpaPtr;
    }

    void getInfo()
    {
        cout << "name is : " << name << endl;
        cout << "cgpa is : " << *cgpaPtr << endl;
    }
};

int main()
{

    student s1("sahil", 7.9);

    student s2(s1);
    // s2.getInfo();

    s1.getInfo(); 
    *(s2.cgpaPtr) = 9.2;
    s1.getInfo();

    s2.name = "neha";
    s2.getInfo();  //now deep copy is working 
    return 0;
}