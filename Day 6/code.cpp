#include<bits/stdc++.h>
using namespace std;

class shape{   //whenever if in any class we have pure virtual functions so it is meant to be abstract class
   virtual void draw() = 0;  //it is pure virtual functions -- pure virtual function -- this is abstract class
};  //it means in every child/derived class this function has to be there and we can't make object in this class but we make other class as child class then it will work 

class circle : public shape{

    public:
    void draw(){
        cout<<"drawing a circle using the abstract class"<<endl;
    }
};

int main(){
  circle c1;
  c1.draw();  // in this way it work 

    return 0;
}