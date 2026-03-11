#include <iostream>
using namespace std;


// int main(){
//     int n;
//     cout<<"Enter the number of digits in array:";
//     cin>>n;
//     int i=0;
//     while(i<n){
//         cout<<"Enter the digit:";
//         cin>>n
//         arr[i]
//     }

//FINDING LARGEST ELEMENT IN ARRAY.
// int main(){

//     int arr[5]={5,4,3,2,1};

//     int max=arr[0];

//     for(int i=1;i<5;i++){
//         if(max<arr[i])
//         max=arr[i];
//     }

//     cout<<"Largest number in the array "<<max<<"\n";


// }
    


//Find Second Smallest and Second Largest Element in an array
// #include <climits>
// int main(){

//     int smallest = INT_MAX, secondSmallest = INT_MAX;
//     int largest = INT_MIN, secondLargest = INT_MIN;


//     int arr[5]={8,9,7,6,6};

//     for(int i=0;i<5;i++){
//         if(largest<arr[i])
//         largest=arr[i];
//         if(smallest>arr[i])
//         smallest=arr[i];
//     }
//     int second_max=smallest;int second_low=largest;

//     for(int j=0;j<5;j++){
//         if(second_max<arr[j]&&arr[j]!=largest){
//             second_max=arr[j];
//         }
//         if(second_low>arr[j]&&arr[j]!=smallest){
//             second_low=arr[j];
//         }  
//     }
//     cout<<"second largest "<<second_max<<"\n";
//     cout<<"second lowest "<<second_low<<"\n";
// }



//Left Rotate the Array by One

// int main(){
//     int arr[5]={5,4,3,2,1};  //4/3/2/1/5
//     int temp[5]={};

//     int i=0;
//     int n=5;
//     while(n){
//         if(i==(n-1)){
//             temp[i]=arr[n-1-i];
//             break;
//         }
//         temp[i]=arr[i+1];   //4,3,2,1,
//         cout<<arr[-i];
//         i++;     
//     }
//     cout<<"\n";
//     //rotated arry
//     for(int j=0;j<5;j++){
//         cout<<temp[j]<<",";
//     }
//     cout<<"\n";
// }



//Rotate array by K elements



int main(){
    int arr[5]={5,4,3,2,1};  //4/3/2/1/5
    int temp[5]={};

    int i=0;
    int n=5;
    while(n){
        if(i>=(n-3)){
            temp[i]=arr[n-3-i];
        }
        temp[i]=arr[i+3];   //4,3,2,1,
        i++;     
    }
    cout<<"\n";
    //rotated arry
    for(int j=0;j<5;j++){
        cout<<temp[j]<<",";
    }
    cout<<"\n";
}




