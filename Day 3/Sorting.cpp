// IN THIS WE SOLVE DIFFERENT TYPES OF SORTING TECHNIQUES
#include<iostream>
#include<vector>
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

void mergeit(int arr[], int start , int end , int mid){
   vector<int>temp;
   int i = start ;
   int j = mid+1;

   while(i <= mid && j<= end){
   if(arr[i]<arr[j]){
    temp.push_back(arr[i]);
    i++;
   } else{
    temp.push_back(arr[j]);
    j++;
   }

}
   while(i<= mid){
    temp.push_back(arr[i]);
    i++;
   }

   while(j<= end){
    temp.push_back(arr[j]);
    j++;
   }
    int k = 0;
   for(int p = start ; p<=end;  p++){
    arr[p] = temp[k];
    k++;
   }
}
void merge_sort(int arr[] , int start , int end){

//base condition 
if(start >= end) return ;

int mid = (start + end)/2;

merge_sort(arr , start , mid);
merge_sort(arr , mid+1 , end);
mergeit(arr, start , end , mid);

}
int main(){
int arr[] ={1,5,2,4,9,2};
int n = 6;

bubble(arr , n);
selection(arr , n);

    return 0;
}