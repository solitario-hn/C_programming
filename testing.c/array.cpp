// // Given an array of size n, write a program to check if the given array is sorted in (ascending 

// #include <iostream>
// using namespace std;

// int main(){
//     int n=5;
//     int arr[n]={3,4,5,1,2};
//     int count=0;
//     for(int i=0;i<4;i++){
//         if(arr[i]>arr[i+1]){
//             count++;
//         }
//     }
//     if (count>1){
//         cout<<"NOT SORTED ARRAY";
//     }
//     else{
//         cout<<"Sorted array";
//     }
// }  



//Remove Duplicates in-place from Sorted Array
//Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.



// #include <iostream>
// using namespace std;

// int main(){
//     int n=11;
//     int arr[n]={1,1,1,2,2,3,3,3,3,4,4};
//     int temp[n]={};
//     int k=0;
//     for(int i=1;i<(n-1);i++){  
//         if(arr[k]==arr[i]){
//             continue;
//         }
//         else{
//             arr[k+1]=arr[i];
//             k++;
//         }
//     }
//     k++; //one number was already taken into account.
//     //printing out the temporary array.
//     for(int i=0;i<(n-1);i++){
//         cout<<arr[i]<<",";
//     }
//     cout<<"\nNo. of distinct elements : "<<k<<"\n";
// }




//Move all Zeros to the end of the array


// given an array of integers, your task is to move all the zeros in the array to the end of the array 
// and move non-negative integers to the front by maintaining their order.


// #include <iostream>
// using namespace std;

// int main(){
//     int n=8;
//     int arr[n]={ 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};
    
//     for(int i=0;i<n;i++){ 
//         if(arr[i]==0){
//             for(int j=(i+1);j<n;j++){
//                 if(arr[j]!=0){
//                 arr[i]=arr[j];
//                 arr[j]=0;
//                 break;
//                 }
//             }
//         }}

//     //prinitng out the moved 0 elemnted array
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<',';
//     }
// }




//Linear Search in C
//Given an array, and an element num the task is to find if num is present in the given array or not. If present print the index of the element or print -1.


// #include <iostream>
// using namespace std;

// int main(){
//     int num;
//     cout<<"Enter the number to search it the array:";
//     cin>>num;
//     int n=5;
//     int arr[]={1,2,3,4,5};
//     for(int i=0;i<n;i++){
//         if(arr[i]==num){
//             cout<<"FOUND AT INDEX: "<<i;
//             break;
//         }
//         return -1;
//    }
// }

//Union of Two Sorted Arrays

/// Given two sorted arrays, arr1, and arr2 of size n and m. Find the union of two sorted arrays.

#include <iostream>
#include <map>
using namespace std;

int main(){
    int n = 5,m = 5;
    int arr1[n] = {1,2,3,4,5};
    int arr2[m] = {2,3,4,4,5};
    map<int,int>temp;

    //looping through arr1
    for(int i=0;i<n;i++){
        auto test=temp.find(arr1[i]);
        if(test->second==0){
            temp.insert({arr1[i],1});

        }
    }

    //looping through arr2
    for(int j=0;j<m;j++){
        auto test=temp.find(arr2[j]);
        if(test->second==0){
            temp.insert({arr2[j],1});
        }
    }

    //printing out the union
    for(auto it : temp){
        cout<<it.first<<',';
    }
}