#include<iostream>
using namespace std;

class teacher {

   private:
   double salary ;

   public:

     string name;
     string dept;
     string subject;

//    //non - parametrised constructor 
//    teacher(){
//     cout<<"hey i am default constructor and i don't have any return type";
//     dept = "cs";
//    }

   //parameterized constructor 
//    teacher(string n , string d , string s, double sal){
//     name = n;
//     dept = d;
//     subject = s;
//     salary = sal;
//    }j


   //parameterized constructor using this keyword
   teacher(string name , string dept, string subject, double salary){
    this->name = name;
    this->dept = dept;
    this->subject = subject;
    this->salary = salary;
   }

 //we use this keyword in this to make sure this->name = name means left name is representing to object properties and right one is constructor parameter 


 //copy constructor -- 
teacher(teacher &orgObj){  //pass by reference it means this is original object changes it refers to addres of that particular object so whatever the changes we made in this it reflect in the original object
    
    cout<<"i am copy constructor"<<endl; 
    this->name = orgObj.name;
    this->dept = orgObj.dept;
    this->subject = orgObj.subject;
    this->salary = orgObj.salary;
}

     //functions

   void changeDept(string newDept){
    dept = newDept;
   }

   void setSalary(double s){
    salary = s;
   }

   double getSalary(){
    return salary ;
   }

   void getInfo(){
    cout<<"name is : "<<name<<endl;
    cout<<"subject is : "<<subject<<endl;

   }

};

int main(){


    //when we make non parameterized constructor then we created object like this ... 
    // teacher t1;
    // // t1.name = "Rahul";
    // // t1.sub = "physics";
    // // t1.setSalary(50000);

    // cout<<t1.dept<<endl;  //we print the value of department without giving value in the object but because of non parameterized constructor 

    // cout<<t1.name<<" "<<t1.sub<<endl;
    // cout<<t1.getSalary()<<endl; 


    // when we make parameterized constructor then we created object like this we put values directly into this 
    teacher t1("sahil" , "computer science"  , "cs", 50000);

    // // cout<<t1.dept<<" " <<endl;

    // // t1.getInfo();

    // teacher t2(t1); //this is default copy constructor it copy the properties of object t1 without write copy parameterized constructor
    // t2.getInfo();

    teacher t2(t1); //this is custom copy constructor it copy the properties of object t1 without write parameterized constructor
    t2.getInfo();


   return 0;

}
   