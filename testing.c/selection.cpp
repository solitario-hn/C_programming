// //OPTIMAL BUBBLE SORT.

// #include <iostream>
// using namespace std;

// int main(){
//     int arr[5]={9,5,4,3,1};
//     for(int i=0;i<5;i++){
//     for(int i=0;i<4;i++){
//         if(arr[i]>arr[(i+1)]){
            
//             int temp=arr[i];
//             arr[i]=arr[(i+1)];
//             arr[(i+1)]=temp;
           
//         }
//     }}
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<",";
//     }
// }



//INSERTION SORT

#include <iostream>
using namespace std;


int main(){
    int arr[5]={7,8,6,5,4};
    for(int i=1;i<=5;i++){
        int key=arr[i];
        int j=i - 1;
        while (j >= 0 &&arr[j]>key){//checking the if conditions in the while declaration.
            arr[j+1]=arr[j];
            arr[j]=key;
            j--;  
        }        
    }
    for(int i=1;i<=5;i++){
        cout<<arr[i]<<',';
    }
    cout<<"\n";
}