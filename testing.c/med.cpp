// Find the Majority Element that occurs more than N/2 times
#include <iostream>
#include <map>
using namespace std;

int main(){
    int n=9;
    map<int,int> count;
    int arr[n]={7, 0, 0, 1, 7, 7, 2, 7, 7};
    for(int i=0;i<n;i++){
            count[arr[i]]++;
        }
    int max=n/2;
    int highest=0;
    for (auto it : count) {  
        cout << it.first << " " << it.second
        << endl;     
        if(it.second>max){
            max=it.second;
            highest=it.first;

        }  
    }

    cout<<"Majority element that occurs:\t"<<highest <<" with occurence:"<<max<<"\n";
}