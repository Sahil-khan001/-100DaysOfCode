#include<iostream>
using namespace std;

//LETS TALK ABOUT INHERITANCE

class person{
    public:
    string name;
    int age;

    person(string name , int age){
        this->name = name;
        this->age = age;
    }

    // person(){
    // cout<<"i am parent contstructor"<<endl;
    // }

    // ~person(){
    //     cout<<"Parent Destructor is here"<<endl;
    // }

};

class student : private person{  //if u write private here then u can acess these value in main functions

    public:
    int rollno;

    // student(){
    //     cout<<"i am child constructor" <<endl;
    // }

    student(string name , int age , int rollno): person(name ,  age){   //HERE we call the constructor so we dont have to write datatypes also 
    this->rollno = rollno;
    }

    void getInfo(){
        cout<<"name is : "<<name<<endl;
        cout<<"Age is : "<<age<<endl;
        cout<<"Rollno is : "<<rollno<<endl;
    }

    // ~student(){
    //     cout<<"Child Destructor is here"<<endl;
    // }
};


int main(){
   

    //PRINTING VALUES USING NORMAL CONSTRUCTOR
    
    // student s1;
    // s1.name = "sahil";
    // s1.age = 23;
    // s1.rollno = 234;
    // s1.getInfo();
    
    //PRINTING VALUES USING PARAMETERIZED CONSTRUCTOR
    student s1("sahil" , 23 , 532);
    // s1.getInfo();

    //private inheritance not allowed
    // cout<<s1.age;





    
}