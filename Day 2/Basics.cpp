#include<bits/stdc++.h>
using namespace std;

int dectobin(int n){

    int binary = 0;
    int i = 0;
    while(n > 0){
        int bit = n%2;
        // cout<<bit<<endl;
        binary = bit * (int)pow(10 , i) + binary;
        n = n/2;
        i++;
    }
    return binary;
}

int main(){
   
    // int age ; 
    // cout<<"enter ur age" <<endl;
    // cin>>age ;

    // if(age > 18) cout<<"u can drive";
    // else
    // cout<<"u can't drive and get ur licence";


    // int marks = 45;
    // if(marks > 90){
    //     cout<<"A grade";

    // }
    // else if(marks > 60){
    //     cout<<"B grade";
    // }
    // else{
    //     cout<<"fail";
    // }

    // int weight = 72;
    // int height = 6;
    // if(weight > 80){
    //     if(height > 8){
    //         cout<<"u are tall";
    //     }
    //     else{
    //         cout<<"u are short";
    //     }
    // } else{
    //     cout<<"u have to try again";
    // }

    // int marks;
    // cout<<"enter ur marks" <<endl;
    // cin>>marks;

    // switch(marks){
    //     case 80 : cout<<"u got grade a";
    //     break;
    //     case 60 : cout<<"u got grade b";
    //     break;
    //     case 40 : cout<<"u got grade c";
    //     break;
    //     default : cout<<"u failed";
    // }

    // int x = 24;
    // int y = 2;

    // int result = (x > y) ? x : y;

    // cout<<"the largest number is : "<<result;


    // for(int i = 0 ; i<=5; i++){
    //     cout<<"namaste duniya using loop"<<endl;
    // }

    // for(int i = 0 ; i<=10 ; i++){
    //     // if(i == 5){
    //     //     continue;
    //     // }
    //     if(i == 5){
    //         break;
    //     }
    //     cout<<i<<endl;
    // }

    // int i = 1;
    // while(i <= 10){
    //     cout<<i*2<<endl;
    //     i++;
    // }

    // for(char ch = 'a' ; ch <= 'z' ; ch++){
    //     cout<<ch<<endl;
    // }

    // int i = 1;
    // do{
    //     cout<<i*3<<endl;
    //     i++;
    // } while(i <= 10);


    //NESTED LOOP
    // for(int i = 1 ; i<=3 ; i++){
    //     for(int j = 1 ; j<=3 ; j++){
    //         cout<<i <<j <<" ";
    //     }
    //     cout<<endl;
    // }

    // OPERATOR -- 
    //UNARY OPERATOR -- 

    // int x = 5;
    //pre and post increment 
    // cout<<(x++)<<endl;
    // cout<<(++x)<<endl;

    //pre and post decrement 
    // cout<<(x--)<<endl;
    // cout<<(--x)<<endl;
    // cout<<x;

    // int a = 3;
    // a+= 8;
    // cout<<a;

    // int a = 3 ;
    // int b = 9;

    // if(a >b && b>a){
    //     cout<<"the large is : "<<b;
    // }
    // else cout<<"nope";

    // if(a >b || b>a){
    //     cout<<"the large is : "<<b;
    // }
    // else cout<<"nope";

    // cout<<(~1); //it print -2

    // cout<<(4 << 2)<<endl;  // 4 * 2^2
    // cout<<(4 >> 2);        // 4 / 2^2

    //xor  1^1 -- 0 , 1^0 -- 1  , 0^0 -- 1 , 0^1 -- 1;

    // cout<<(1^1)<<endl;
    // cout<<(0^1)<<endl;
    // cout<<(1^0)<<endl;
    // cout<<(0^0)<<endl;

    // cout<<(3%2)<<endl;
    // cout<<(6%2)<<endl;
    // cout<<(7%2)<<endl;

    //typecasting in c++

    int n ;
    cout<<"enter n"<<endl; 
    cin>>n ;
    
    cout<<dectobin(n);


}
