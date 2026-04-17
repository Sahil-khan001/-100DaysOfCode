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

// void twodarray(int arr[][3] , int row , int col){   // note : IN FUNCTION REMEMBER WHEN INITIALISE ARRAY IN COLUMN WE HAVE TO GIVE COLUMN VALUE 
//     cout<<"print the 2d array values : "<<endl;
//     for(int i = 0 ; i<row ; i++){
//         for(int j = 0 ; j<col ; j++){
//             cout<<arr[i][j]<<" ";
//         }
//     }
// }

// int getlength(char ch[]){
//     int count = 0;
//     int index = 0 ;
//     while(ch[index] != '\0'){
//         count++;
//         index ++;
//     }
//     return count;
// }


void reversestring(string str){
    reverse(str.begin() , str.end());
    cout<<"the reverse of the given string is : "<<str;
}

void pallindrome(string str){

  string temp = str;
  reverse(temp.begin() , temp.end());

  if(temp == str){
    cout<<"it is pallindrome";
  }else{
    cout<<"not";
  }

}

// void update(int a){  //PASS BY VALUE  IT MAKE A DIFFERENT COPY AND DO EDIT IN IT
//    a++;
//    cout<<a<<endl;
// }

// void update(int &a){  //PASS BY REFERNCE -- IT MEANS A have second name -- IT EDIT IN SAME COPY
//    a++;
//    cout<<a<<endl;
// }

void solve(int arr[]){  //but here it print 4 because it acts a pointer not an array like u can also write int *arr
    cout<<sizeof(arr);
}

int main(){


    //NOTE: A PROGRAM HAVE SHORT STACK SPACE COMPARED TO HEAP MEMORY 
    //IF U WANT MEMORY FROM HEAP the like in int it allocates u 4byte for int 
    //for this block of memory it gave u address
//so to store this address we used pointer like
//this pointer *ptr is lies in the stack and pointing the address for memory allocate in the heap

// //BASICALLY  DYNAMICALLY MEMORY ALLOCATE USING NEW KEYWORD;
//  int *ptr = new int ;
//  cout<<*ptr<<endl;

//  //Now u dont have need for this memory then use DELETE keyword
// delete ptr;
 
//Array creation using dynamic memory -- 
// int *ptr = new int[5];
// ptr[0] = 10;
// ptr[1] = 20;
// ptr[2] = 30;
// *(ptr + 3) = 40;
// *(ptr + 4) = 50;

// for(int i = 0 ; i<5 ; i++){
//     cout<<ptr[i]<<" ";
// }

// //to delete this  dynamic array memory location -- 
// delete []ptr;


//NOTE : --
//int arr[n] -- this is a bad way to initialize an array because it takes stack memory because each program takes limited stack memory and long heap memory and its a bad way to create an array
//but u can initialize array like this it takes heap memory -- 

    // int arr[] ={1,2,3,4}; //here it print 16 bytes
    // cout<<"the address is : " <<sizeof(arr)<<endl;
    // solve(arr);
    


    //POINTERS -- 

    //& -- it represent the address 
    //* -- dereference operator -- value present at given address

    // int num = 10;
    // int *ptr = &num;

    // cout<<num<<endl;
    // cout<<&num<<endl;
    // cout<<ptr<<endl;
    // cout<<&ptr<<endl;
    // cout<<*ptr<<endl;

    // *ptr ++;
    // cout<<num;
    //note: basically we can indirectly access a number using pointer. but REFERNCES are safer than pointer.
    //COUNT EVEN NUMBER IN AN ARRAY -- 

    // vector<int> arr = {1,2,3,4,6,8};
    // int count = 0 ;
    
    // for(int i = 0 ; i<arr.size() ; i++){
    //     if(arr[i] %2 == 0){
    //         count ++;
    //     }
    // }
    // cout<<"the total no. of even present in this array are :"<<count;

    // int a = 22;
    // update(a);
    // cout<<"the value of a is : "<<a<<endl;

    //REFERENCE VARIABLE
    // int a = 5;
    // int &temp = a;

    // // cout<<temp;
    // temp+= 5;
    // cout<<temp;
    
    // string str = "mama";
    // pallindrome(str);

    // string str = "sahil";
    // reversestring(str);

    // char ch[] = "sahil khan";
    // // cout<<getlength(ch);
    // // cout<<"lenght of character is : "<<strlen(ch);

    // char ch2[] = "hitesh";
    // strcpy(ch2 , ch);
    // // cout<<ch2;

    // if(strcmp(ch2 , ch) == 1){
    //   cout<<"both are same";
    // }else{
    //     cout<<"both are not same";
    // }
    
     
// int arr[2][3];
// int row = 2;
// int col = 3;



// for(int i = 0 ; i<row ; i++){
//     for(int j = 0 ; j<col ; j++){
//         cout<<"Input of 2d values ";
//         cin>>arr[i][j];
//     }
// }

// twodarray(arr , row , col);
   
    

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

    //xor  1^1 -- 0 , 1^0 -- 1  , 0^0 -- 0, 0^1 -- 1;

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

//CHARACTER ARRAYS IN C++ 
//NOTE : in this we have to take the responsibility of termination character 

//upper to lowercase , lowercase to uppercase
//ch - 'a' + 'A'  -- lower to upper 
//ch -'A' + 'a' -- upper to lower

// char ch[6] = "sahil";
// cout<<ch[2];

// int arr[4] = {1,2,3,4};
// cout<<arr<<endl;

// char brr[5] = "sahi";
// cout<<brr<<endl;  -- 

// for(int i = 0 ; i<6 ; i++){
//     cout<<ch[i]<<" ";
// }

// string name ;
// name.push_back('s');
// name.push_back('a');
// name.push_back('h');
// name.push_back('i');
// name.push_back('l');
// cout<<name<<endl; 


// char ch[100];
// ch[0]= 's';
// ch[1] = 'o';
// ch[2] = 'n';
// ch[3] = 'u';
// cout<<ch;


//functions in string -- 

// string str = "sahi";
// // cout<<"length of str is : "<<str.length()<<endl;

// string temp = "khan";
// str.append(temp);

// // cout<<str;

// cout<<str.substr(2,4)<<endl;


// string a = "monu";
// string b = "monu";

// if(a.compare(b) == 0){ //0 means they are same and 1 means they are different 
//     cout<<"both strings are same";
// }
// else{
//     cout<<"both are different strings";
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