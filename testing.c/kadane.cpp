// Kadane's Algorithm : Maximum Subarray Sum in an Array
// #include <iostream>
// using namespace std;


// int main(){
//     int n=6;
//     int arr[n]={2, 3, 5, -2, 7, -4};
//     int sum=0;int max=0;


//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             sum+=arr[j];  
//             if(sum>=max){
//             max=sum;
//         }
//         }
//         sum=0;
//     }
//     cout<<max<<"\n";
// }


//KADANE ALGORITHM
#include <iostream>
using namespace std;


int main(){
    int n=6;
    int arr[n]={2, 3, 5, -2, 7, -4};
    int sum=0;int max=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];

        if(sum<0){
            sum=0;
        }

        if(sum>max){
            max=sum;
        }

    }
    cout<<max<<'\n';

}