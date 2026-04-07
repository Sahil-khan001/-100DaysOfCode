#include<bits/stdc++.h>
using namespace std;

// int dectobin(int n){

//     int ans = 0;
//     int i = 0;
//     while(n > 0){
//         // int bit = n%2;  //modulus method 
//         int bit = n & 1;  //bitwise method
//         // cout<<bit<<endl;
//         ans = bit * (int)pow(10 , i) + ans;
        //    n = n/2;
//         n = n >> 1;
//         i++;
//     }
//     return ans;
// }

// int bintodec(int n){
//     int decimal = 0;
//     int i = 0;
//     while (n){
//         int bit = n%10;
//         decimal = decimal + bit * pow(2 , i);
//         n = n/10;
//         i++;
//     }  

//     return decimal;
// }

// int sum(int a , int b){
//     return a+b;
// }

// void printMyname(){   //void dont return anything 
//     cout<<"sahil";
// }

// void printMyage();    //function is declare and define after the main function 

// int get_multipli(int x , int y , int z){
//     return x*y*z;
// }

// void printMultiples(int n){
//     for(int i = 0 ; i<=10 ; i++){
//         cout<<(n*i)<<endl;
//     }
// }

// int  voting_criteria(int age);

// void printArray(int arr[] , int size){
//     for(int i = 0 ; i<=size-1 ; i++ ){
//         cout<<arr[i]<<endl;
//     }
// }

// void reversearray(int arr[] , int size){
//     int start = 0 ; int end = size -1;

//     while(start < end){
//         swap(arr[start] , arr[end]);
//         start ++;
//         end --;
//     }
// }

// void flipp(int arr[] , int size){
//     for(int i = 0 ; i<size ; i++){
//         if(arr[i] == 0){
//             arr[i] = 1;
//         }
//         else if(arr[i] == 1){
//             arr[i] = 0;
//         }
//     }
// }

void twodarray(int arr[][3] , int row , int col){
    cout<<"print the 2d array values : "<<endl;
    for(int i = 0 ; i<row ; i++){
        for(int j = 0 ; j<col ; j++){
            cout<<arr[i][j]<<" ";
        }
    }
}



int main(){

    
int arr[2][3];
int row = 2;
int col = 3;



for(int i = 0 ; i<row ; i++){
    for(int j = 0 ; j<col ; j++){
        cout<<"Input of 2d values ";
        cin>>arr[i][j];
    }
}

twodarray(arr , row , col);
   
    

    // int arr[] ={10 , 20 , 30 , 40 , 50};
    // // int arr[] ={1 ,0,1,1,0};
    // int size = 5;
    // // flipp(arr , size);
    // reversearray(arr , size);
    // for(int i = 0; i < size; i++) {
    //     cout << arr[i] << " ";
    // }

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

    //dectobin
    // int n ;
    // cout<<"enter n"<<endl; 
    // cin>>n ;
    
    // cout<<dectobin(n);

    //bintodec
    // int binary;
    // cout<<"enter the binary number ";
    // cin>>binary;
    // cout<<bintodec(binary)<<endl;

    //implicit typecasting -- self by compiler give preference to larger datatype 
    // char ch = 'a';
    // int b = ch + 2;
    // cout<<b<<endl;

    //explicit typecasting -- we have to do by manually by putting the datatype in front of given value
    // char ch = 'a';
    // int b = ch + 2;
    // cout<<(char)b;

    // FUNCTIONS IN C++ 
// return type -- void , non-void(int , char , float , double)

// int ans = sum(4,5);
// cout<<"the sum of given number is : "<<ans;

// printMyname(); 

//IN FUNCTION REMEMBER ONE THING -- 
//make sure before calling the main function u should declare it not define because u can define it later also after the main function 
//eg. in below -- 

// printMyage();      //call the function in the main function 

// cout<<get_multipli(3,3,3);

// printMultiples(7);
 
// int age ;
// cout<<"enter ur age";
// cin >> age ;
// cout<< voting_criteria(age);

//ARRAYS IN C++ -- 

// int arr[5] ={10,20,30,40,50};
// cout<<arr[1];

// vector<int> arr ={10,20,30,40,50};
// for(int i = 0 ; i<5; i++){
//     cout<<arr[i]<<" ";
// }
// for(int i = 0 ; i<arr.size(); i++){  //this is for the vectory of array 
//     cout<<arr[i]<<" ";
// }

// int arr[7];

// for(int i = 0 ; i<7 ; i++){
//     cout<<"enter the value of array : " <<endl;
//     cin >> arr[i];
// }

// for(int i = 0 ; i <7 ; i++){
//     cout<<arr[i]<<endl;
// }


// int arr[5] ={10,20,30,40,50};

// int sum = 0 ;
// for(int i = 0 ; i<5; i++){
//      sum = sum + arr[i];
// }

// ARRAY WITH FUNCTIONS --  
// int arr[] = {10,20,30,40};
// int size = 4;
// printArray(arr , size);


//2D ARRAYS IN C++ == 


// int arr[2][3] = {{1,2,3},
//               {8,7,6}
// };

// int row = 2;
// int col = 3;
// // cout<<arr[0][2];

// for(int i = 0 ; i<row ; i++){    
//     for(int j = 0 ; j<col ; j++){
//         cout<<arr[i][j]<<"  ";
//     }
// }

// int arr[2][3];
// int row = 2;
// int col = 3;

// for(int i = 0 ; i<row ; i++){
//      for(int j = 0 ; j<col ; j++){
//         cout<<"enter the values in 2d arrays ";
//         cin>>arr[i][j];
//      }
// }


// for(int i = 0 ; i<row ; i++){
//      for(int j = 0 ; j<col ; j++){
//         cout<<arr[i][j]<<" ";
//      }
// }





}






// void printMyage(){                //function define not declare after the main function 
//     cout<<"my age is 22";
// }


// int voting_criteria(int age){
// if(age > 18){
//     cout<<"you can vote";
// }
// else{
//     cout<<"you can't vote";
// }
// }