#include<bits/stdc++.h>
using namespace std;

class person {
    public:

    string name ;
    int rollno;

    // person(){
    //     cout<<"i am parent constructor"<<endl;
    // }

    ~person(){
        cout<<"i am parent destructor"<<endl;
    }
};

class student : public person{
    public:
    int age ;
    
    // student(){
    //     cout<<"i am child constructor"<<endl;
    // }
    ~student(){
        cout<<"i am child destructor"<<endl;
    }
};

class Gradstu : public student{

    public:
string researchArea ;

};




int main(){



    Gradstu d1;
    d1.name = "sahil";
    d1.rollno = 34;
    d1.age = 23;
    d1.researchArea = "cs";

    cout<<d1.researchArea<<endl;


   
 

    return 0 ;
}