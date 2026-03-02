#include <iostream>
#include <map>

using namespace std;

int main(){
    //array input
    int n;
    cin>>n;
    cout<<"array input.";
    int arr[n]={};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"array input----";


    //hash dict.
    map<int,int> hash;
    for(int i=0;i<n;i++){
        //hash[arr[i]]+=1
        hash[arr[i]]++;
    }

    //Find the highest/lowest frequency element
    int highest=0;
    int lowest=n;
    int highestele=0;
    int lowestelse=n;
    for(auto it = hash.begin(); it != hash.end(); ++it){
        if(it->second>highest){
            highest=it->second;         //pointers
            highestele=it->first;
        }
        if(it->second<lowest){
            lowest=it->second;
            lowestelse=it->first;
        }
    }  
    cout<<"The"<<highest<<" value is of"<<highestele<<"\n" ;
    cout<<"The"<<lowest<<" value is of"<<lowestelse<<"\n";  
}