#include<iostream>
using namespace std;

class print{
    public:
    void show(int x ){
cout<<"the int value of x is "<<x<<endl;
    }

     void show(char ch){
        cout<<"the char of ch is :"<<ch<<endl;
     }

};

int main(){

    print p1;
    p1.show(100);  //it evaluate the value at time of compile time 
    p1.show('c'); // it means depending upon the context the function it take diff forms 

    return 0;
}