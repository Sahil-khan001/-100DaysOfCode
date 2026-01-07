#include<iostream>
using namespace std;

//BUBBLE SORT
void bubble(int arr[], int n){
for(int i = 0 ; i<n-1 ; i++){
    int count = 0;
for(int j = 0 ; j<n-i-1; j++){
    if(arr[j] > arr[j+1]){
        swap(arr[j], arr[j+1]);
        count ++;
    }
}
if(count == 0) break;
}
}
void selection(int arr[] , int n){
    for(int i = 0 ; i<n-1 ; i++){
     int min = i;
     for(int j = i+1 ; j<n ; j++){
     if(arr[j] < arr[min]){
        min = j;
     }
    }
    swap(arr[min] , arr[i]);
}
}

int main(){
int arr[] ={1,5,2,4,9,2};
int n = 6;

bubble(arr , n);
selection(arr , n);
    return 0;
}