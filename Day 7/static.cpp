#include<iostream>
using namespace std;

void fun(){    //in callstack what happened we call function it give value to variable then delete then another function call and everytime value of x is 0 but if we use static then in callstack only function is there but the x is on other side means it gonna update also +1 , +1 , +1 
   static int x = 0;   //means this initialisation of x run only one time and other code run again and again  
    cout<<"x is : "<<x<<endl;
    x++;
}

int main(){

    fun();
    fun();
    fun();
    fun();
    fun();

    //what happend in this 

    /*
    static keyword -- Variable declares as static in a function are created and initialised for once for the lifetime of the program -- in functions

    static variale in a class are created and initialised as once. they are shared by all the objects of the class -- in class  


    if in a function we have x variable and in main we make we objects so for every objects we have differnt x but if we use static keyword then there is only one x and all the objects pointing towards that x value -- okk

    and if we make any object static for the lifetime it exists 
    */

    return 0;
}