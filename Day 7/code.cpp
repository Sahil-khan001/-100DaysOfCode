#include<iostream>
using namespace std;

class ABC{
    public:

    ABC(){
        cout<<"constructor"<<endl;
    }

    ~ABC(){
        cout<<"deconstructor"<<endl;
    }
};

int main(){
    if(true){
        ABC obj;  ///when we make object in this way first constructor then deconstructor then end of function call 
        //but if we use static keyword then the object is going to run the lifetime until our main program is end so when we use this first constructor then end of main function then deconstructor is called 
    }
    cout<<"end of the main function"<<endl;
    return 0;
}