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

void rotate_right(int arr[], int n,int k);
void reverse(int arr[],int n,int k);

int main(){
    int arr[5]={5,4,3,2,1};
    int n=5;
    int k=2;
    // rotate_right(arr,n,k);
    reverse(arr,n,k);
    return 0;   
}



void rotate_right(int arr[], int n,int k){  //21543
    k=k%n;
    int temp[k]={};
    int j=0;
    for(int i=n-k;i<n;i++){
        temp[j]=arr[i];   
        j++;    
    }

    for(int i=n-k-1;i>=0;i--){
        arr[i+k]=arr[i];
    }
    //putting temporary back into the array

    for(int i=0;i<k;i++){
        arr[i]=temp[i];
    }  
}

void reverse(int arr[],int n,int k){
    int j=n/2;

    for(int i=0;i<2;i++){
        int temp=arr[i];
        arr[i]=arr[n-1];
        arr[n-1]=temp;
        n--;
    }

    for(int i=0;i<k/2;i++){
        int temp=arr[i];
        arr[i]=arr[k-1];
        arr[k-1]=temp;
        k--;
    }
    n=5;
    k=2;

    for(int i=n-k-1;i<=(n/2);i++){
        int temp=arr[i];
        arr[i]=arr[n-1];
        arr[n-1]=temp;
        n--;
    }


    for(int i=0;i<5;i++){
        cout<<arr[i]<<';';
    }

}



