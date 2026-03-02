#include <iostream>
using namespace std;
//let array size=12

//creating the array.
int main(){
    int n;    //---declaring size of array.
    cin >> n;
    int arr[n]={};    //array will only have integrer values.
    for(int i=0;i<n;i++){
        cin>>arr[i];                      //taking user input for each array element.
    }
    // 1213456

    //precomputing
    int hash[13]={0};       //size of hash array=n+1 from og array with each element being 0;
    for(int j=0;j<n;j++){
        hash[arr[j]]+=1;   //so hash array stores that number's occurence corresponding to hash array's index value , hash[1]=2 then tht means  1 occurec two times in the original array.
    }  

    //fetching according to which no to search for

    int q;
    cin>>q;
    while(q--){   
        int number;
        cin>>number;
        //fetch
        cout<<hash[number]<<endl;

    }
    return 0;
}



