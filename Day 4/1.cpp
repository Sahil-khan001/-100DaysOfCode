#include<iostream>
using namespace std;


//THIS IS MULTILEVEL INHERITANCE AND ITS EXAMPLE --
//when one class 3 is inherited from class 2 and class 1 is inherited from class2

class person{
    public:
    string name;
    int age;
};

class student : public person{  //if u write private here then u can acess these value in main functions

    public:
    int rollno;

};

class GradStudent : public student{
public:
string ResearchArea;

void getinfo(){
    cout<<"name is "<<name<<endl;
    cout<<"age is "<<age<<endl;
    cout<<"Rollno is "<<rollno<<endl;
    cout<<"ResearchArea  is "<<ResearchArea<<endl;
}

};


int main(){

    GradStudent g1;
    g1.name = "sahil";
    g1.age = 23;
    g1.rollno = 543;
    g1.ResearchArea = "Machine Learning";

    g1.getinfo();


    return 0;
}