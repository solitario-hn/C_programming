/*(a) Write a C program to add two numbers
(b) Write a C program to add three numbers*/

/*(a) Write a C program to find area of circle 
(b) Write a C program to calculate simple interest*/

// #include <stdio.h>

// int main(){
//     int a,b;   //simply initizializing a variable defining it's type giving it a desired value.
//     printf("Enter the numbers to add:\n");
//     scanf("%d%d",&a,&b);
//         //C uses all basic arithmetic operators. likee '+' to add numbers.
//     printf("The sum of two numbers is: %d\n",a+b);  //printf requires a format specifier before printing out the any value of a varibale then variable as a second or so on parameter in order.
//     return 0;
// }

// #include <stdio.h>

// void main(){
//     float a,b,c;
//     // printf("%i %i %p %p",a,b,a,b);
//     printf("Enter the two numbers you wish to add:");
//     scanf("%f %f",&a,&b);
//     // scanf("%f",&b);  //%i (Integer): Reads or prints an integer. It is more versatile than %d because it interprets input as decimal (e.g., 10), octal (e.g., 012), or hexadecimal (e.g., 0xA) based on the prefix.
//     float sum = a + b;
//     printf("The sum of two numbers is : %f\n",sum);
// }


// #include <stdio.h>
// void main(){
//     float a,b,c=0;
//     printf("Enter the numbers you wish to add:\t");
//     scanf("%f %f %f",&a,&b,&c);
//     float sum=a+b+c;
//     printf("The sum of the numbers is %.2f\n",sum);
// }
// working


// #include <stdio.h>
// #include <math.h>
// int main(){
//     float pi=3.14;    //we need float dataype to hold decimals.
//     float radius=0;
//     printf("Enter the radius of the circle:\t");
//     scanf("%f",&radius);
//     float area=pi*(pow(radius,2));
//     printf("The area of the circle is:%f\n",area);
//     return 0;
// }
// while using diff header files you need to link them first in via command line since gcc 
// //doesn't automatically link them. ---for here, gcc basic.c -lm -o basic.
// //do not redeclare same variable again and again in a scope will cause compiler error
// //---e.g. int area; then again after line 4 int area=32;   {two time variable declaration.}


// #include <stdio.h>

// void main(){
//     float principal,rate,time=0;   //adding 0 value by default to avoid garbage values.
//     printf("Enter the original amount borrowed or invested: \t");
//     scanf("%f",&principal);
//     printf("Enter the annual interest rate:\t");
//     scanf("%f",&rate);
//     printf("Enter the duration the money is borrowed or invested in years:\t");
//     scanf("%f",&time);
//     float simple=(principal*rate*time)/100;
//     printf("Your calculated simple interest for the amount is %.2f.\n",simple);
// }

// Write a C program to print a block F using
// hash (#), where the F has a height of six
// characters and width of five and four
// characters

// #include <stdio.h>

// void main(){
//     int height=5,width=5;
//     for(int i=0;i<height;i++){
//         if (i==0){
//             for(int j=0;j<width;j++){
//                 printf("#");
//             }
//             printf("\n");
//         }
//         else if (i==(height/2)){       //since height is int datatype division operator will auto choose only int value.
//             for(int k=0;k<(width-1);k++){
//                 printf("#");
//             }
//             printf("\n");
//         }
//         else{
//             printf("#\n");
//         }
//     }
// }

// Write a C program that accepts two item’s
// weight (floating points' values) and number of
// purchase(floating points'values)andcalculate
// the average value of the items

// #include <stdio.h>

// void main(){
//     float wt1,wt2,item1,item2;
//     printf("Enter the numer of purchase and weight(in kg) of item1: \t");
//     scanf("%f%f",&item1,&wt1); //using scanf to allocate the values into the variable with &
//     printf("Enter the number of purchase and weight(in kg) of item2:\t");
//     scanf("%f%f",&item2,&wt2);
//     float avg=(((wt1*item1)+(wt2*item2))/2);
//     printf("Your average value of items is %f\n",avg);
// }

// (a)Write a C program to swap two variables
// using a third variable

// #include <stdio.h>

// void main(){
//     int a=10,b=20,temp;   //hard coding values of a and b as an example.
//     printf("Value of a=%d and b=%d before swap.\n",a,b);
//     temp=a;           //value of a stores into temp.
//     a=b;              //b stores into a.
//     b=temp;           //b takes value of temp which stored value of a.
//     printf("Value of a=%d and b=%d after swap.\n",a,b );
// }

// (b)Write a C program to swap two variables
// without using a third variable

// #include <stdio.h>

// void main(){
//     int a,b;
//     //taking user input
//     printf("Enter value of a and b to be swapped: \t");
//     scanf("%d%d",&a,&b);
//     printf("Value of a=%d and b=%d before swap.\n",a,b);
//     a+=b;            //adding value of b into a 
//     b=a-b;           //b now has value of (sum of both a and b)- value of a ,i.e. a.
//     a=a-b;           //a now has value of (sum of both a and b)- value of b(i.e. a).
//     printf("Value of a=%d and b=%d after swap.\n",a,b);
// }

// (a)Write a C program to convert a given integer
// (in seconds) to hours, minutes, and seconds.

// #include <stdio.h>

// int main() {
//     int integer, hours, minutes, seconds;
//     // Prompt the user for input
//     printf("Enter time in seconds: ");
//     scanf("%d", &integer);
//     // Calculate hours, minutes, and remaining seconds
//     hours = integer / 3600;              // 3600 seconds in an hour
//     minutes = (integer % 3600) / 60;     // Remaining seconds after hours, divided by 60 for minutes
//     seconds = (integer % 3600) % 60;     // Remaining seconds after both hours and minutes
//     // Print the result
//     printf("%d seconds is equivalent to: %d hours, %d minutes, and %d seconds. \n", integer, hours, minutes, seconds);
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int total, years, weeks, days_remaining;
//     printf("Enter the number of days: ");
//     scanf("%d", &total);
//     years = total / 365;       // Calculate the number of years .
//     days_remaining = total% 365;  // Calculate the remaining days after accounting for years.
//     weeks = days_remaining / 7;   // Calculate the number of weeks in the remaining days
//     days_remaining = days_remaining % 7; // Calculate the number of days in the remaining days
//     printf("%d days is equal to: \n", total);
//     printf("Years: %d\n", years);
//     printf("Weeks: %d\n", weeks);
//     printf("Days: %d\n", days_remaining);
//     return 0;
// }

// Write a program to find the area of triangle.
// Area = sqrt(s*(s-a)*(s-b)*(s-c))


// #include <stdio.h>
// #include <math.h>  //using math.h to use sqrt built-in func.

// int main(){
//     float a,b,c,semi,area;
//     printf("Enter the three sides of the triangle:\t");
//     scanf("%f%f%f",&a,&b,&c);
//     semi=((a+b+c)/2);  //calculating the semi perimeter
//     area=sqrt((semi)*(semi-a)*(semi-b)*(semi-c));   //using sqrt function.
//     printf("Area of the triangle is:%.2f\n",area);  //printing out the result upto 2 decimals using .2f precision

//     return 0;

// }

// Write a C program to check whether a number
// is even or odd

// #include <stdio.h>

// int main(){
//     int num;
//     printf("Enter the integer to be checked:\t");
//     scanf("%d",&num);
//     //if numbers remained is 0(i.e. completely divisible by 0 it is even.)
//     if (num%2==0){
//         printf("%d is EVEN.\n",num);
//     }
//     else{
//         printf("%d is ODD.\n",num);
//     }
//     return 0;
// }


// Write a C program to check whether a given
// year is Leap year or not

// #include <stdio.h>

// void main(){
//     int year;
//     printf("Enter the year to be checked:\t");
//     scanf("%d",&year);
//     //if year is divisible completely by 4 and 100 or 400 it is a leap year.
//     if (year%4==0&&year%100||year%400==0){
//         printf("%d is a leap year.\n",year);
//     }
//     else{
//         printf("%d is not a leap year.\n",year);
//     }

// }

// (a)Write a C program to check whether a
// triangle is Equilateral,scalene,or isosceles

// #include <stdio.h>

// void main(){
//     float a,b,c;
//     printf("Enter the sides of the triangle to be checked:\t");
//     scanf("%f%f%f",&a,&b,&c);
//     if(a==b&&b==c&&c==a){
//         printf("It is a equilateral triangle.\n");}    //using && and operator to check. 
//     else if(a==b||b==c||c==a){
//         printf("It is an isosceles triangle.\n");}     //using || or operator.
//     else{
//         printf("It is a scalene triangle.\n");}
// }

// (b)Write a C program to check whether a
// triangle is right angles,obtuse,acute triangle

// #include <stdio.h>
// void main(){
//     int a,b,c;
//     printf("Enter the sides to be checked:\t");
//     scanf("%d%d%d",&a,&b,&c);
//     //making sure c is the longest side using ternary operator.
//     c=(a>b)?((a>c)?a:c):((b>c)?b:c);
//     if ((a*a)+(b*b)==c*c){                  //using pythagoras theorem to check.
//         printf("It is a right angled triangle.\n");
//     }
//     else if ((a*a)+(b*b)>c*c){
//         printf("It is an acute angled triangle.\n");
//     }
//     else{
//         printf("It is an obtuse angled triangle.\n");
//     }
// }


// Write a C program to convert temperature from Fahrenheit to Celsius and Celsius to Fahrenheit (User must provide the choice of type of temperature)

// #include <stdio.h>

// void c_to_f(int temp);
// void f_to_c(int temp);
// void main(){
//     int choice,temp;
//     printf("Enter 0 to convert fahrenheit to celsius and 1 to convert celsius to fahrenheit:\t");
//     scanf("%d",&choice);
//     printf("Enter the temperature:\t");
//     scanf("%d",&temp);
//     if(choice==0){
//         f_to_c(temp);
//     }
//     else if(choice==1){
//         c_to_f(temp);
//     }
//     else{
//         printf("Invalid Choice!\n");
//     }
// }

// void f_to_c(int temp){
//     float cel;
//     cel=(temp-32)*(5.0/9.0);   //since C does integer division we need to write float type numbers 9.0 instead of 9 to get floating values.
//     printf("Temperature in  degree celsius is %.2f\n",cel);
// }

// void c_to_f(int temp){
//     float cel;
//     cel=(temp*(9.0/5.0)+32);
//     printf("Temperature in degree fahrenheit is %.2f\n",cel);
// }

// (a)Write a C program to check whether a
// character is an alphabet, digit

// #include <stdio.h>

// void main(){
//     char check;
//     printf("Enter the character to be checked:\t");
//     scanf("%c",&check);
//     if(check>='A'&&check<='Z'||check>='a'&&check<='z'){
//         printf("%c is an alphabet.\n",check);
//     }
//     else{
//         printf("%c is a digit.\n",check);
//     }
// }

// (a)	Write a C program to check whether an alphabet is a vowel or consonant.

// #include <stdio.h>
// #include <ctype.h>
// void main(){
//     char ch,check;
//     printf("Enter the alphabet to be checked:\t");
//     scanf("%c",&ch);
//     check=tolower(ch); //converting alphabet to lowercase to check using ctype.h
//     if(check=='a'||check=='i'||check=='o'||check=='e'||check=='u'){
//         printf("%c is a vowel.\n",ch);
//     }
//     else{
//         printf("%c is consonant.\n",ch);
//     }
// }

//(a)Write a C program tofind smallestof two number

// #include <stdio.h>

// void main(){
//     float a,b;
//     printf("Enter the two numbers to be checked.\n");
//     scanf("%f%f",&a,&b);
//     if(a>b){    //using relational operator to check.
//         printf("%.2f is greater than %.2f\n",a,b);
//     }
//     else{
//         printf("%.2f is greater than %.2f\n",b,a);
//     }
// }

//(b)Write a C program to find largest of three numbers

// #include <stdio.h>

// void main(){
//     float a,b,c,largest;
//     printf("Enter the three numbers to be checked.\n");
//     scanf("%f%f%f",&a,&b,&c);
//     //using ternary operator to check
//     largest=(a>b)?((a>c)?a:c):((b>c)?b:c);
//     printf("The largest number is %.2f\n",largest);
// }

// Write a program in C to implement Simple
// Calculator.

// #include <stdio.h>

// void main(){
//     int a,b;
//     char choice;
//     printf("Enter the numbers you wish to operate on:\t");
//     scanf("%d%d",&a,&b);
//     printf("Enter operation to perform.\n'+' to add.\n'-' to subtract.\n'/' to divide.\n'*' to multiply.\n");
//     scanf(" %c",&choice);  //need to add a space in format specifier so scanf doesn't ready \n as an input.
//     switch(choice){    //using ' ' switch operator would take the ascii value.
//         case '+': 
//         printf("The sum is:%d\n",a+b);
//         break;
//         case '-':
//         printf("The difference is:%d\n",a-b);
//         break;
//         case '/':
//         printf("The division is:%d\n",a/b);
//         break;
//         case '*':
//         printf("The product is:%d\n",a*b);
//         break;
//         default:
//         printf("INVALID CHOICE!\n");     
//     }
// }

//WAP to calculate the root of a Quadratic Equation

// #include <stdio.h>
// #include <math.h>  //linking math header file to use sqrt built in function

// void main(){
//     double root1,root2,coeff_x,coeff_x_sqr,constant,discrimant;
//     printf("Enter the coefficient of x square,x and constant: ");
//     scanf("%lf%lf%lf",&coeff_x_sqr,&coeff_x,&constant);
//     printf("The equation is : (%.2lfx²)+(%.2lfx)+(%.2lf)\n",coeff_x_sqr,coeff_x,constant);
//     discrimant=(coeff_x*coeff_x)-(4*coeff_x_sqr*constant);
//     //calculating real roots on basis of discriminant. 
//     if (discrimant>=0){
//     root1=(-coeff_x+sqrt(discrimant))/(2*coeff_x_sqr);
//     root2=(-coeff_x-sqrt(discrimant))/(2*coeff_x_sqr);
//     printf("The roots of the equation are %.2lf and %.2lf\n",root1,root2);
//     }
//     else{
//         printf("Roots are imaginary and complex.\n");
//     }
// }

// WAP to to accept a coordinate point in a XY
// coordinate system and determine in which
// quadrant the coordinate point lies.
// #include <stdio.h>

// void main(){
//     float x,y;
//     printf("Enter the coordinate points x and y respectively:\n");
//     scanf("%f%f",&x,&y);
//     if (x>0&&y>0){
//         printf("(%.2f,%.2f) Point is in the first quadrant.\n",x,y);
//     }
//     else if (x<0&&y>0){
//         printf("(%.2f,%.2f) Point is in the second quadrant.\n",x,y);
//     }
//     else if (x<0&&y<0){
//         printf("(%.2f,%.2f) Point is in the third quadrant.\n",x,y);
//     }
//     else{
//         printf("(%.2f,%.2f) Point is in the fourth quadrant .\n",x,y);
//     }
// }

// Write a program to find gross salary of employee
// if DA is 40% of basic Salary and HRA is 20% of
// basic salary. Basic salary will be entered as input
// by keyboard.

// #include <stdio.h>

// void main(){
//     float basic,hra,da,gross;
//     printf("Enter the basic salary of the emploee:\t");
//     scanf("%f",&basic);
//     da=0.4*basic;  //da is 40% ,i.e. 40/100 of basic salary.
//     hra=0.2*basic; //hra is 20% , i.e. 20/100 of basic salary.
//     gross=basic+da+hra;
//     printf("The gross salary of employee is:₹%.2f\n",gross);
// }

// Write a program in C to calculate and print the
// Electricity bill of a given customer. The customer
// id and unit consumed by the user should be taken
// from the keyboard and
// displaythetotalamounttopaytothe customer

// #include <stdio.h>

// void main() {
//     int id, units_consumed;
//     float amt;

//     printf("Enter the Customer ID: \t");
//     scanf("%d", &id);
//     printf("Enter the Input units consumed: \t");
//     scanf("%d", &units_consumed);

//     // Calculate rates based on units (e.g., up to 100 units, 100-200, etc.)
//     if (units_consumed <= 100){
//         amt = units_consumed * 1.20;}
//     else if (units_consumed <=200) {
//         amt = (100*1.20) +(units_consumed-100)*1.50;}
//     else{
//         amt = (100*1.20)+(100*1.50)+(units_consumed-200)*2;}

//     printf("Customer ID: %d\nUnits Consumed:%d\nTotal Amount: %.2f\n", id, units_consumed,amt);
// }


// A library charges a fine forevery book returned
// late. For first 5 days the fine is 50 paisa,for6-10
// days, fine is one rupee and above10days, fineis 5
// rupees. If you return the book after 30 days
// your membership will be cancelled. Write a
// program to accept the number of days the
// member is late to return the book and display
// the fine or appropriate message

// #include <stdio.h>

// void main(){
//     int days,books;
//     float fine;
//     printf("Enter number of books issued:\t");
//     scanf("%d",&books);
//     printf("Days member is late to return the book:\t");
//     scanf("%d",&days);
//     if(days<=5){
//         fine=0.50*books;      //50 paisa = 0.5 rs.
//         printf("Your fine is ₹%.2f\n",fine);
//     }
//     else if(days>=6&&days<=10){
//         fine=1*books; 
//         printf("Your fine is ₹%.2f\n",fine);
//     }
//     else if(days>=11&&days<=30){
//         fine=5*books;
//         printf("Your fine is ₹%.2f\n",fine);
//     }
//     else{
//         printf("Oops! Your membership is cancelled. You missed the last dealine.\n");
//     }
// }

// Write a program to find the factorial of any number.

// #include <stdio.h>
// void main(){
//     int number,factorial=1; //setting initial value 1 to avoid garbage values.
//     printf("Enter the number to find the factorial:\t");
//     scanf("%d",&number);
//     //using for loop to multiply again and again.
//     if(number==0){
//         printf("%d factorial is 1.\n",number);
//     }
//     else{
//         for(int i=1;i<=number;i++){
//             factorial*=i;
//     }
//     printf("%d factorial is %d.\n",number,factorial);}
// }

// Write aprogramtoprintFibonaccisequence
// 011235813……Ntermsandprintsthesum of
// sequence.

// #include <stdio.h>

// void main(){
//     int term1=0,term2=1,next,sum=1,terms;  //since fibonacci series starts from 0 and 1. , initial sum=0+1=1.    
//     printf("Enter the numbers of terms for the fibonacci series:\t");
//     scanf("%d",&terms);
//     printf("%d,%d,",term1,term2);
//     //The Fibonacci series is a sequence where each number is the sum of the two preceding ones.
//     for(int i=1;i<=terms;i++){    
//         next=term1+term2;     //next term will be the sum of prev two terms.
//         term1=term2;          //now prev term 2 will be term 1.
//         term2=next;           //and the next term will be term 2 for the next term to come.
//         sum+=next;
//         printf("%d,",next);
//     }
//     printf("\nSum of the first %d terms of fibonacci series: %d\n",terms,sum);
// }

// Write a program in C to accept an integer number and find sum of digits

// #include <stdio.h>

// void main(){
//     int num,sum=0,rem=0;  //setting initital value of sum=0 to avoid garbage values.
    
//     //if number is negative,we need to only look for digits (digits are always positive.)
//     if(num<0){
//         num*=-1;
//     }

//     for(int i=1;i>rem;){   //till there's no remainder remains loop will run (updation is optional in for loop.)
//         //since in a number only the last digit,i.e.,consonant is not divisible by 10 it will give us the last digit. 
//         rem= num % 10  ;
//         sum+=rem;
//         num=num/10;  //gives quotient , removing the last retrieved digit before next iteration.
//     }
//     printf("Sum of the digits of number %d is : %d",num,sum);
// }

// Write a program in C to accept an integer number and find reverse of this number and 
// check this number for palindrome.

// #include <stdio.h>

// void main(){
//     int original_num,num,rem,reverse=0;
//     printf("Enter the integer number to reverse and check:\t");
//     scanf("%d",&num);
//     original_num=num;  //storing value to compare later.
//     if(num<0){
//         num*=-1;
//     }

//     while(num!=0){  //e.g num=9765
//         rem=num%10;    //first extracting the last digits.(remainder)   //9765%10=5
//         num=num/10;   //removing the last digit from the number.(quotient)  //9765/10=976
//         reverse=reverse*10+rem; //since the last digit extracted will be constant , in reverse it will be tens places further. 
//         //num=9765 (9000+700+60+5)  rev=5679 
//         //1.(0*10+5=5) 2.(5*10*6=56) 3.(56*10+7=567) 4.(567*10+9=5679)      
//     }
//     printf("The reversed number is: %d\n",reverse);

//     //if a num is palindrome , number==reverse.
//     if(original_num==reverse){
//         printf("%d is a palindrome.\n",original_num);
//     }
//     else{
//         printf("%d is not a palindrome\n",original_num);
//     }
// }

// Write a program in C to accept an integer
// number and to check a number is Armstrong or
// not

// An Armstrong number (or narcissistic number) is a positive integer that equals the sum of its own digits,
//  each raised to the power of the total number of digits in that integer

// #include <stdio.h>
// #include <math.h>
// void main(){
//     int original_num,num,digits=0,rem=0,sum=0;
//     printf("Enter number to check:\t");
//     scanf("%d",&num);
//     original_num=num;   //to compare original number later
//     //counting the number of digits in the number
//     while(num!=0){
//         rem=num%10;   //gives the last digit.
//         num=num/10;   //as soon as only const is remaining decimal division makes num==0 loop stops.
//         digits+=1;
//     }
//     num=original_num;  //re-setting the num value.
    //An Armstrong number equals the sum of its own digits raised to power of the total number of digits.
//     while(num!=0){
//         rem=num%10;
//         num=num/10;
//         sum+=pow(rem,digits);
//     }

//     if(sum==original_num){
//         printf("%d is an Armstrong number.\n",original_num);
//     }
//     else{
//         printf("%d is not an Armstrong number.\n",original_num);
//     }
// }

// Write a program in C to accept an integer numbers and to check a number is Perfect or not.

//perfect num , num= sum of it's proper divisors excluding that no itself.

// #include <stdio.h>

// void main(){
//     int sum=0,divisor,num;
//     printf("Enter the number to check for perfect number:\t");
//     scanf("%d",&num);
//     //finding perfect divisors.
//     for(int i=1;i<num;i++){
//         if (num%i==0){      //if it properly divides the number it is added into sum.
//             sum+=i;
//         }}
//     if(sum==num){
//         printf("%d is a perfect number.\n",num);
//     }
//     else{
//         printf("%d is not a perfect number.\n",num);
//     }
// }


// Write a program to find the sum of following
// series:
// S=2+4+6+8+ ………N terms
// 27 Write a program to check a n

// #include <stdio.h>

// void main(){
//     int n,sum=0;   //setting sum value 0 to avoid garbage values.
//     printf("Enter the no. of terms.:\t");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         sum+=(2*i);
//     }
//     printf("Sum of %d terms of series is: %d.\n",n,sum);
// }

// Write a program to check a number whether it
// is prime number or not.

// #include <stdio.h>

// void main(){
//     int divisors=0,num;
//     printf("Enter number to check:\t");
//     scanf("%d",&num);
//     if(num==1){
//         printf("%d is a neither prime nor composite number.\n",num);
//     }
//     else{
//         for(int i=1;i<=num;i++){
//             if(num%i==0){
//                 divisors+=1;
//             }
//         }
//         if(divisors==2){     //if a num is prime sum of its divisors=2
//             printf("%d is a prime number.\n",num);
//         }
//         else{
//             printf("%d is not a prime number.\n",num);
//         }
//     }
// }

// Write a program to find the sum of following
// series: 1–1/2 +1/3–1/4 +1/5-……uptonterms.

// #include  <stdio.h>

// int main(){
//     int n,step=1; float sum=0;
//     printf("Enter the number of terms:\t");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         sum+=(step*(1.0/i));    //writing 1.0 to avoid integer division by c
//         step*=-1;           //alternating multiplying terms by -1;
//     }
//     printf("The sum of %d terms of the series is %.2f\n",n,sum);
// }

// Write a program to find the sum of following
// series: 1!+2! +3! +4!+…..+n

// #include <stdio.h>

// int main(){
//     int n,sum=0,factorial=1;
//     printf("Enter the number of terms:\t");
//     scanf("%d",&n);
//     //finding each number factorial and then adding it to sum using nested loop.
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             factorial*=j;
//         }
//         sum+=factorial;
//         factorial=1;  //setting factorial back to 1 for next number.
//     }
//     printf("The  sum of the series upto %d terms : %d\n",n,sum);
//     return 0;
// }

// Write a program to find the sum of following series:
// S=-1^3+ 3^3- 5^3+7^3-9^3+ 11^3-……………..
// Nterms

// #include <stdio.h>

// int main(){
//     long long sum=0; int n,step=2,multi=-1;
//     printf("Enter  the number of terms:\t");
//     scanf("%d",&n);
//     int i=1,j=1;
//     while(j<=n){
//         sum+=multi*(i*i*i);
//         multi*=-1;
//         i+=step;   //since series goes like 1,3,5 increment of 2.
//         j++;
//     }
//     printf("The sum of series upto %d terms : %lld\n",n,sum);
// }

// Write a program to find the sum offollowing
// series:
// S=1/1! +2/2! +3/3!+ ………7terms.

// #include <stdio.h>

// void main(){
//     long double sum=0,factorial=1.0;
//     int i=1,j=1;
//     while(i<=7){
//         //finding the factorial
//         while(j<=i){
//             factorial*=j;
//             j++;
//         }
//         sum+=(i/factorial);
//         factorial=1;   //setting value of factorial back to 1.
//         i++;
//         j=1;   //setting value of j back to 1.
//     }
//     printf("Sum of the series upto 7 terms is: %.6Lf\n",sum);
// }


// Write a program to convert binary number to  ---------------------TO-DO
// decimal number

// Write a program to find the sum of following
// series:
// S=1^4+3^4+5^4+7^4+ ……..100 terms

// #include <stdio.h>

// int main(){
//     long long int sum=0,i=1;
//     int j=1;
//     while(j<=100){
//         sum+=(i*i*i*i);    //since a^4=a*a*a*a.
//         i+=2;  //only odd numbers.
//         j++;
//     }
//     printf("The sum of the series is: %lld\n",sum);
// }

// WriteaprograminCtoprintthefollowing pattern:
// * * *
// * * *
// * * *

// #include <stdio.h>

// int main(){
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

// Write a program in C to print the following pattern:
// 1 2 3
// 1 2 3
// 1 2 3

// #include <stdio.h>

// void main(){
//     for(int i=0;i<3;i++){
//         for(int j=1;j<=3;j++){
//             printf("%d ",j);   //printing out value of j =1,2,3 
//         }
//         printf("\n");   
//     }
// }

// WriteaprograminCtoprintthefollowing pattern:
// 1 1 1
// 2 2 2
// 3 3 3

// #include <stdio.h>

// void main(){
//     for(int i=1;i<=3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d ",i);   //printing out value of i =1,2,3 
//         }
//         printf("\n");   
//     }
// }

// WriteaprograminCtoprintthefollowing pattern:
// 3 2 1
// 3 2 1
// 3 2 1

// #include <stdio.h>

// void main(){
//     for(int i=0;i<3;i++){
//         for(int j=3;j>=1;j--){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
// }

// WriteaprograminCtoprintthefollowing pattern:
// 3 3 3
// 2 2 2
// 1 1 1

// #include <stdio.h>

// void main(){
//     for(int i=3;i>0;i--){
//         for(int j=0;j<3;j++){
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
// }

// WriteaprograminCtoprintthefollowing pattern:
// *
// * *
// * * *

// #include <stdio.h>

// void main(){
//     for(int i=1;i<=3;i++){
//         for(int j=0;j<i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

// WriteaprograminCtoprintthefollowing pattern:
// 1
// 1 2
// 1 2 3

// #include <stdio.h>

// void main(){
//     for(int i=1;i<=3;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d ",j);    //using j values-1 ; 1,2 ; 1,2,3 comparing to i.
//         }
//         printf("\n");         //moving to the next line.
//     }
// }

// WriteaprograminCtoprintthefollowing pattern:
// 1
// 2 2
// 3 3 3

// #include <stdio.h>

// void main(){
//     for(int i=1;i<=3;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
// }


// Write a program in Ctoprintthefollowing
// pattern:
// 3
// 3 2
// 3 2 1


// #include <stdio.h>

// void main(){
//     for(int i=3;i>=1;i--){
//         for(int j=3;j>=i;j--){
//             printf("%d ",j);   //printing out values of j-3 , 3,2 , 3,2,1. 
//         }
//         printf("\n");
//     }
// }

// #include <stdio.h>

// int main(){
//     for(int i = 1; i <= 3; i++){
//         for(int j = 3; j >= 4 - i; j--){
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// Write a program in C to print the following
// pattern:
// 3
// 2 2
// 1 1 1

// 

#include <stdio.h>
int main(){
    char c;
    printf("Enter the char:");
    scanf("%c",&c);

    for(int i=0;i<=5;i++){
        printf("%c     %d\n",c+i,c+i);

    }

    return 0;
}