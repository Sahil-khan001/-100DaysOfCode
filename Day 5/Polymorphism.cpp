#include<iostream>
using namespace std;

//POLYMORPHISM -- 

class student{

    public:
    string name ;

    student(){
        cout<<"i am non parameterized constructor"<<endl;
    }

    student(string name){
        this->name = name ;
        cout<<"i am parameterized constructor"<<endl;
    }

};


int main(){
//    student s1; //if we dont write anything it called non parameterized constructor 
   student s1("sahil"); // now it called Parameterized constructor 
   //IT MEANS it depends on the context our object change it forms and decide which form it gonna take 



   //we have two types of polymorhism -- 

    //compile time polymorphism means eg -- 
   // one example is constructor overloading-- 
   //other example is function Overloading -- lets talk about this -- 

   /* in constructor we see -- both constructor have same name but different parameter 
   and in functions we also have same name but if we change parameter either change their types or change no. of parameters then because
   of this function overloading happen same like constructor 
   compile time means statically polymorhism 
   function overloading -- when we have two or more functions in the same class but may differ their parameter due to which functions overloading create

[Compile time error means error comes before running the program.
Runtime error means program compiles successfully but gives error while running.]

also we have OPERATOR OVERLOADING example -- like
int x = 20;
int y = x;

so y = 20 ; .. so this equals to act as a overloading by creating a copy into y variable so this is operator overloading...
this is example of compile time polymorhism 

Compile Time Polymorphism -- 1. Constructor overlaoding 
                             2. Function overloading
                             3. Operator Overloading 

next we have -- RUN TIME POLYMORHISM 
example of this is -- function overriding -- whenever it is here it means when parents and child both contain the same functions but have different implementation 
the parent class function said to be overridden

like we have parent class and child class -- 
whenever we call any object of any class it function gonna call

but we have high priority to the child class  because it override the parent class

one example is function  overriding 
other example is virtual functions -- 

virtual functions are -- it is a member function that u expect to be redefined in the derived classes 

-- whenever u write virtual in front of normal function it became virtual functions
it is similar like functions override in which child class virtual functions have more preference then the parent class 

some properties of virtual functions are -- 

-- virtual functions are dynamic in nature 
-- defined by the keyword 'virtual' in the base class and it is declared in the base class and overridden in the child class
-- it is called during runtime 

runtime polymorphism -- function overridden 
                       virtual functions with overriden
   */


}