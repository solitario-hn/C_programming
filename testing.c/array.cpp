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

// #include <iostream>
// #include <map>
// using namespace std;

// int main(){
//     int n = 5,m = 5;
//     int arr1[n] = {1,2,3,4,5};
//     int arr2[m] = {2,3,4,4,5};
//     map<int,int>temp;

//     //looping through arr1
//     for(int i=0;i<n;i++){
//         auto test=temp.find(arr1[i]);
//         if(test->second==0){
//             temp.insert({arr1[i],1});

//         }
//     }
//     //looping through arr2
//     for(int j=0;j<m;j++){
//         auto test=temp.find(arr2[j]);
//         if(test->second==0){
//             temp.insert({arr2[j],1});
//         }
//     }

//     //printing out the union
//     for(auto it : temp){
//         cout<<it.first<<',';
//     }
// }


//Longest Subarray with given Sum K(Positives)

// #include <iostream>
// using namespace std;

// int main(){
//     int n=6,k=15,len=0,sum=0,max_len=0;
//     int arr[n] = {10, 5, 2, 7, 1, 9};

//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             sum+=arr[j];
//             if(sum==k){
//                 len=j-i+1;
//                 if(len>max_len){
//                     max_len=len;
//                 }   
//                 sum=0;          
//                 break;
//             }       
//         }
//     }

//     cout<<max_len<<"\n";
// }

// Two Sum : Check if a pair with given sum exists in Array
// Given an array of integers arr[] and an integer target.

// Return YES if there exist two numbers such that their sum is equal to the target. Otherwise, return NO.

// #include <iostream>
// using namespace std;

// int main(){
//     int sum=0,n=5,k=14;

//     int arr[n] = {2,6,5,8,11};

//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==k){
//                 cout<<"THE SUM OF TWO NUMBERS\n";
//                 cout<<arr[i]<<','<<arr[j]<<"\n";
//                 break;
//             }
//         }
//     }
// }


// #include <iostream>
// #include <map>
// using namespace std;

// int main(){
//     int n=5,k=19;
//     int arr[n] = {2,6,5,8,11};

//     map<int,int>num;
//     //looping through array
//     for(int i=0;i<n;i++){
//         int diff=k-arr[i];
//         auto test=num.find(diff);  //DONE BY ME
//         if(test->first==0){
//             num.insert({arr[i],i});
//         }
//         else{
//             cout<<"\n"<<arr[i]<<','<<diff;
//             cout<<"\n";
//             break;
//         }   
// }}


// ///        for(int j=)
//         if(arr[i]<arr[i+1]){
//             int temp=arr[i+1];
//             arr[i+1]=arr[i];
//             arr[i]=temp;
//         }////

//Sort an array of 0s, 1s and 2s

#include <iostream>
using namespace std;

int main(){
    int n=5,count_zero=0,count_one=0,count_two=0;

    int arr[n]={1, 0, 2, 1, 0};

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count_zero++;
        }
        else if(arr[i]==1){
            count_one++;
        }
        else{
            count_two++;
        }        
    }

    int i=0;
    while(i<n){
        if(count_zero!=0){
            arr[i]=0;
            i++;
            count_zero--;
        }
        else if(count_one!=0){
            arr[i]=1;
            i++;
            count_one--;          
        }
        else{
            arr[i]=2;
            i++;
            count_two--;          
        }
    }


    for(int i=0;i<n;i++){
        cout<<arr[i]<<',';
    }

    cout<<"\n";
}