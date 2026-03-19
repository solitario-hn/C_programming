// // Find the Majority Element that occurs more than N/2 times
// #include <iostream>
// #include <map>
// using namespace std;

// int main(){
//     int n=9;
//     map<int,int> count;
//     int arr[n]={7, 0, 0, 1, 7, 7, 2, 7, 7};
//     for(int i=0;i<n;i++){
//             count[arr[i]]++;
//         }
//     int max=n/2;
//     int highest=0;
//     for (auto it : count) {  
//         cout << it.first << " " << it.second
//         << endl;     
//         if(it.second>max){
//             max=it.second;
//             highest=it.first;

//         }  
//     }

//     cout<<"Majority element that occurs:\t"<<highest <<" with occurence:"<<max<<"\n";
// }

//Stock Buy And Sell

// You are given an array of prices where prices[i] 
//is the price of a given stock on an ith day. You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

// #include <iostream>
// #include <limits.h>
// using namespace std;

// int main(){
//     int n=5;
//     int arr[n]={7,6,8,3,1};
//     int min = INT_MAX; //taking max value int possibel to easily replace it.
//     int max=0;

//     for(int i=0;i<n;i++){
//         if(arr[i]<min){
//             min=arr[i];
//         }
//         else{
//             if(max<arr[i]-min){
//                 max=arr[i]-min;
//             }
//         }
//     }   

//     cout<<"MAX PROFIT POSSIBLE "<<max<<endl;
// }


//Rearrange Array Elements by Sign

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> nums={1,2,3,-1,-2,-3};
//     vector<int> positive;
//     vector<int> negative;
//     int array[(nums.size()-1)];


//     for(int it:nums){   //iterator access the value one by one.
//         if(it>0){
//             positive.push_back(it);
//         }
//         else{
//             negative.push_back(it);
//         }
//     }
//     int j,k=0;
//     for(int i=0;i<(nums.size())/2;i++){
//         array[2*i]=positive[i];
//         array[2*i+1]=negative[i];

//     }

//     for(int it:array){
//         cout<<it<<endl;
//     }
// }


//OPTIMAL APPROACH

//There’s an array ‘A’ of size ‘N’ with an equal number of positive and negative elements. Without altering the relative order of positive and negative elements, 
//you must return an array of alternately positive and negative values.

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums={1,2,-3,-1,-2,3};
    vector<int> result(nums.size(),0);   //we need to first initialize the result array with said size of nums in order to change its values later.
    
    int posindex=0;   //since positive elemnts start from 0th index and neg from 1th.
    int negindex=1;

    for(int i=0;i<nums.size();i++){
        if(nums[i]>0){
            result[posindex]=nums[i];      //storing the positive elemnet found first at0th index.
            posindex+=2;      //increasing posindex.
        }
        else{
            result[negindex]=nums[i];
            negindex+=2;
        }
    }

    for(auto it:result){
        cout<<it<<endl;
    }
}