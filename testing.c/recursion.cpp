// #include <iostream>
// #include <string>

// using namespace std;

// int name(string realname, int n);
// int main(){
//     int n=3;
//     string realname = "anaay";
//     int val=name(realname,n);
//     cout<<val<<"\n";
    
// }

// int name(string realname, int n){
//     if(n==0){
//         return 1;
//     }
//     cout<<realname<<"\n";
//     n--;
//     name(realname,n);
//     return 0;
// }

#include <iostream>
using namespace std;

// void number(int n,int i);
// int main(){
//     int num=5;
//     int i=1;
//     number(num,i);
//     return 0;
// }

// void number(int n,int i){
//     if(i>n){
//         return;
//     }
//     cout<<i<<"\n";
//     i++;
//     number(n,i);
// }

// 


//FACTORIAL USING RECURISON.
// int fact(int n,int i,int result);

// int main(){
//     int n=10,i=1,result=1;
//     int val=fact(n,i,result);
//     cout<<val<<"\n";
//     return 0;
// }


// int fact(int n,int i,int result){
//     if(i>n){
//         return result;
//     }
//     result*=i;
//     i++;
//     return fact(n,i,result);
// }

//REVERSING AN ARRAY.

// int main(){
//     int array[]={10,20,30,40,50,60,70,80,90,100};
//     int rev[10]={};
//     for(int i=0;i<10;i++){
//         rev[i]=array[10-1-i];   
//     }
//     for(int i=0;i<10;i++){
//         cout<<rev[i]<<"\n";
//     }
//     return 0;
// }


int main(){
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int rev[10]={};
    for(int i=0;i<5;i++){
        int temp=array[i];
        array[i]=array[10-1-i];
        array[10-1-i]=temp;
    }

    for(int j=0;j<10;j++){
        cout<<array[j]<<"\n";
    }
}
