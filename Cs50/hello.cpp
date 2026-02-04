// #include <iostream>
// class Solution {
// public:  //can be used in any folder.
//     void printNumber() {
//         int x;
//         std::cin>>x;
//         std::cout<<"The user inupt is:"<<x;

//     }
// };





// #include <iostream>
// using namespace std;

// class Solution {
// public:
//     void printNumber() {
//         int x;
//         cin >> x;
//         cout << x;
//     }
// };

// int main() {
//     Solution s;
//     s.printNumber();
//     return 0;
// }


/*Given marks of a student, print on the screen:

Grade A if marks >= 90
Grade B if marks >= 70
Grade C if marks >= 50
Grade D if marks >= 35
Fail, otherwise.*/


#include <iostream>
using namespace std;

// int main(){
//     int x;
//     cout<<"Enter the marks obtained:";
//     cin>>x;
//     if (x>=90){
//     cout<<"Grade A";}
//     else if(x>=70){
//         cout<<"Grade B";
//     }
//     else if(x>=50){
//         cout<<"Grade c";
//     }
//     else if(x>=35){
//         cout<<"Grade D";
//     }
//     else{
//         cout<<"Fail nikal.";
//     }
// }

// int main(){
//     for (int i=0 ; i<5;i++)
//     {
//         cout<<"\n";
//         for (int i=0;i<5;i++){      //this will run completely first.
//             cout<<"*";
//         }
//     }
// }


// int main(){
//     for (int i=0 ; i<5;i++)
//     {
//         cout<<"\n";
//         for (int j=0;j<=i;j++){   //fydtdtdt kogc
//             cout<<"*";
       
//         }
//     }
// }

// int main(){
//     for (int i=1 ; i<6;i++)
//     {   //1,22,333
//         cout<<"\n";
//         for (int j=1;j<=i;j++){      //this will run completely first.
//             cout<<i;
//         }
//     }
// }


// int main(){
//     for (int i=5 ; i>=0;i--)
//     {
//         cout<<"\n";
//         for (int j=0;j<=i;j++){      //this will run completely first.
//             cout<<"*";
//         }
//     }
// }

// int main(){
//     for (int i=0 ; i<5;i++)
//     {
//         cout<<"\n";
//         int k=0;
//         for (int j=5;j>i;j--){ 
//             k++;    //this will run completely first.
//             cout<<k;  
//         }
//     }
// }

int main(){
    for (int i=0 ; i<5;i++)
    {
        cout<<"\n";
        for (int j=0;j<5-i;j++){ 
              //this will run completely first.
            cout<<j;  
        }
    }
}
