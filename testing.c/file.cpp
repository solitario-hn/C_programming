// #include <iostream>
// using namespace std;
// int main(){
//     //let the number be 1234
//     int n=1234,rem=0,digits=0;
//     while(n!=0){
//         // rem=n%10;   //extracting the last digit.
//         n=n/10;  //remaining digits.
//         digits+=1;
//     }
//     cout<<"\n";
//     cout<<digits;
//     cout<<"\n";
// }
//everese
// #include <iostream>
// using namespace std;

// int main(){
//     int n=1234,rem=0,rev=0;
//     //reversing the num
//     while(n!=0){
//         rem=n%10 ; //extraction of last digit.
//         n=n/10;   //123
//         rev=(rev*10)+rem;  //reversing the order.  
        
//     }
//     cout<<rev;
//     cout<<"\n";
// }


//palindrome number that reads same as forward and backward.
 
//check greatest common divisor.

// #include <iostream>
// using namespace std;

// int main(){
//     int i=1,n1=9,n2=12,cdiv=0;
//     while(i<=n1){
//         if((n1%i)==0 && (n2%i==0)){
//             cdiv=i;

//         }
//         i++;
//     }
//     cout<<cdiv;
//     cout<<"\n";
// }

//using eucledian algorithm.

// #include <iostream>
// using namespace std;

// int main(){
//     int n1=20,n2=15;
//     while(n1>0&&n2>0){
//         if(n2>n1){
//             n2=n2-n1;   
//         }
//         else{
//             n1=n1-n2;
//         }
//     }
//     cout<<n1+n2;
//     cout<<"\n";
// }

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main(){
// int n=153,rem,digits=0,original_num,num,sum=0;

// original_num=n;
// //counting the digits
// while(n!=0){
//     n=n/10;  //integer divsion.
//     digits+=1;
// }
// n=original_num;
// //adding to power
// while(n!=0){
//     rem=n%10; //extracting last digit;
//     n=n/10;
//     sum+=pow(rem,digits);
// }
// if(original_num==sum){
//     cout<<"it is armstrong";
// }
// }

//divisor of n optimal

// #include <iostream>
// using namespace std;
// int main(){
//     int n=36;
//     int divisors;
//     for(int i=1;i*i<=n;i++){   
//         if(n%i==0){
//             cout<<i<<"\n";
//             if((n/i)!=i){
//                 cout<<n/i<<"\n";          
//         }
//     }
// }}

//prime number optimal method

#include <iostream>
using namespace std;
int main(){
    int n=17;
    int isPrime=true;     
    for(int i=2;i*i<=n;i++){   
        if(n%i==0){
            cout<<"it is not a prime number\n";
            isPrime=false;
            break;                       
        }
    }
    if(isPrime){
        cout<<"It is a prime number\n";
    }
}