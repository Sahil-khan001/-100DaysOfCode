#include<iostream>
using namespace std;

class parent{
public:

void getInfo(){
    cout<<"Parent class"<<endl;
 }                                     //this is eg for the function override

 virtual void hello(){
    cout<<"this is virtual functions from parent"<<endl;
 }

};

class child : public parent{
    public:

void getInfo(){
    cout<<"Parent class"<<endl;
}

void hello(){
    cout<<"this is virtual functions from child class"<<endl;
 }
};

 int main(){
    // child c1;
    // c1.getInfo(); //so in this example we see how child class override parent class so this
    // is an example of function overriding during runtime polymorhism

    child c2;
    c2.hello(); //this is virtual functions that is child one and it overridden the parent one 
    return 0;
 }