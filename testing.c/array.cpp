// Given an array of size n, write a program to check if the given array is sorted in (ascending 

#include <iostream>
using namespace std;

int main(){
    int n=5;
    int arr[n]={3,4,5,1,2};
    int count=0;
    for(int i=0;i<4;i++){
        if(arr[i]>arr[i+1]){
            count++;
        }
    }
    if (count>1){
        cout<<"NOT SORTED ARRAY";
    }
    else{
        cout<<"Sorted array";
    }
}  
