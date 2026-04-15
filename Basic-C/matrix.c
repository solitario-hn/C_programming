//MATRICES IN C
// Write a program in C to display the index of
// smallest and largest element in 3 X 4 matrix of
// integers.

// 
// Write a program in C that accepts N*N matrix
// as input and print transpose of this matrix

// #include <stdio.h>

// int main(){
//     int i,j;
//     printf("Enter the number of rows and columns of matrix:");
//     scanf("%d%d",&i,&j);
//     int mat[i][j];
//     //forming the matrix.
//     for(int k=0;k<i;k++){
//         for(int l=0;l<j;l++){
//             printf("Enter the %d row and %d column element: ",k+1,l+1);
//             scanf("%d",&mat[k][l]);
//         }
//     }
//     //printing out the transpose
//     for(int k=0;k<j;k++){ //k=row=j(prev col)
//         for(int l=0;l<i;l++){ //for transpose , row=column and column=row interchange.
//             printf("%d\t",mat[l][k]);
//         }
//         printf("\n");
//     }
// }

// Write a program to accept two matrices of some
// order. (Order must be given by user) find out the
// sum of these matrices and print the sum of
// matrices.


// #include <stdio.h>
// void display_matrix(int n,int res[n][n]);
// void creating_matrix(int n,int mat[n][n]);
// void sub_matrix(int n,int m,int matA[n][n],int matB[n][n]);

// int main(){
//     int n,m;
//     printf("Enter the order of matrix A: ");
//     scanf("%d",&n);
//     int matA[n][n];
//     creating_matrix(n,matA);
//     printf("Enter the order of matrix B: ");
//     scanf("%d",&m);
//     int matB[m][m];
//     creating_matrix(m,matB);
//     //ADDING BOTH THE MATRIX
//     sub_matrix(n,m,matA,matB);
//     return 0;
// }

// void creating_matrix(int n,int mat[n][n]){
//     //forming the matrix.
//     for(int k=0;k<n;k++){
//         for(int l=0;l<n;l++){
//             printf("Enter the %d row and %d column element: ",k+1,l+1);
//             scanf("%d",&mat[k][l]);
//         }
//         printf("\n");
//     }
// }


// void sub_matrix(int n,int m,int matA[n][n],int matB[n][n]){
//     if(n!=m){
//         printf("ERORR! MATRIX MUST HAVE SAME ORDER FOR ADDITION");
//         return;
//     }
//     else{
//         int result[n][n];
//         for(int k=0;k<n;k++){
//             for(int l=0;l<n;l++){
//                 result[k][l]=matA[k][l]-matB[k][l];
//             }
//         }
//         display_matrix(n,result);
//     }   
// }

// void display_matrix(int n,int res[n][n]){
//     printf("\nSum of matrices:\n");
//     for(int k=0;k<n;k++){
//         for(int l=0;l<n;l++){
//             printf("%d\t",res[k][l]);
//         }
//         printf("\n");
//     }
// }

// Write a program to find out the
// product/Multiplication of two matrices and print
// the product matrix. (order of matrices must be
// given by user)

// #include <stdio.h>
// void display(int row, int col, int mat[row][col]);
// void input_matrix(int row,int col,int mat[row][col]);
// void prod(int rowA,int colA,int rowB,int colB,int A[rowA][colA],int B[rowB][colB]);

// int main(){
//     int rowA,colA,rowB,colB;
//     printf("Enter the no. of rows and column of matrix A: ");
//     scanf("%d%d",&rowA,&colA);
//     int A[rowA][colA];
//     input_matrix(rowA,colA,A);

//     printf("Enter the no. of rows and column of matrix b: ");
//     scanf("%d%d",&rowB,&colB);
//     int B[rowB][colB];
//     input_matrix(rowB,colB,B);

//     prod(rowA,colA,rowB,colB,A,B);
//     return 0;
// }

// void input_matrix(int row,int col,int mat[row][col]){
//     for(int k=0;k<row;k++){
//         for(int l=0;l<col;l++){
//             printf("Enter the %d row and %d column element: ",k+1,l+1);
//             scanf("%d",&mat[k][l]);
//         }
//         printf("\n");
//     }
// }

// void prod(int rowA,int colA,int rowB,int colB,int A[rowA][colA],int B[rowB][colB]){
//     //for matrices multiplication to be valid colA=rowB.
//     printf("\nA X B MATRIX\n");
//     if(colA!=rowB){
//         printf("INVALID MULTIPLICATION OF MATRIX");
//     }
//     else{
//         int res[rowA][colB];
//         for(int i=0;i<rowA;i++){
//             for(int j=0;j<colB;j++){
//                 res[i][j]=0;  //presetting a value to avoid garbage value.
//                             for(int k = 0; k < colA; k++) {
//                 res[i][j] += A[i][k] * B[k][j];
//             }
//         }
//     }
//     printf("\nResultant Matrix (A x B):\n");
//     display(rowA, colB, res);
// }}
// // Display function
// void display(int row, int col, int mat[row][col]) {
//     for(int i = 0; i < row; i++) {
//         for(int j = 0; j < col; j++) {
//             printf("%d\t", mat[i][j]);
//         }
//         printf("\n");
//     }
// }



// 

// #include <stdio.h>

// void swap(int *a, int *b) {
//     int t = *a; *a = *b; *b = t;
// }

// int main() {
//     int x, y;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &x, &y);

//     swap(&x, &y);

//     printf("After swapping: x = %d, y = %d\n", x, y);

//     return 0;
// }
// #include <stdio.h>

// int fact(int n) {
//     int f = 1;
//     for(int i = 1; i <= n; i++) {
//         f *= i;
//     }
//     return f;
// }

// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     printf("Factorial = %d\n", fact(n));
//     return 0;
// }

// Write a C Program to Calculate the factorial of
// a number using recursion

// 

// Write a C program to check whether a number
// is even or odd using functions.


// #include <stdio.h>

// void check(int n){
//     if(n%2==0){
//         printf("%d is even.\n",n);
//     }
//     else{
//         printf("%d is odd.\n",n);
//     }
// }

// int main(){
//     int n;
//     printf("Enter the number to check:");
//     scanf("%d",&n);
//     check(n);
// }


// Write a C program to find all prime numbers
// between given interval using functions.

// 


// A Strong number = sum of factorial of digits = number

// 

// #include <stdio.h>

// int power(int base, int exp) {
//     if (exp == 0)
//         return 1;
//     return base * power(base, exp - 1);
// }

// int main() {
//     int base, exp;

//     printf("Enter base and exponent: ");
//     scanf("%d %d", &base, &exp);

//     printf("%d ^ %d = %d\n", base, exp, power(base, exp));
//     return 0;
// }

// Declare a structure name student containing
// members name, roll_no, marks. Create an array
// of 30 such students. Write a program to read and
// display the contents of array.

// #include <stdio.h>
// #include <string.h>

// struct student
// {
//     char name[50];
//     int roll_no;
//     int marks;
// };

// int main(){
//     struct student s[30];

//     // Input
//     for(int i = 0; i < 5; i++) {
//         printf("\nEnter details of student %d:\n", i + 1);
//         printf("Name: ");
//         scanf("%s", s[i].name);
//         printf("Roll No: ");
//         scanf("%d", &s[i].roll_no);
//         printf("Marks: ");
//         scanf("%d", &s[i].marks);
//     }

//     // Display
//     printf("\n--- Student Details ---\n");
//     for(int i = 0; i < 5; i++) {
//         printf("\nStudent %d:\n", i + 1);
//         printf("Name: %s\n", s[i].name);
//         printf("Roll No: %d\n", s[i].roll_no);
//         printf("Marks: %d\n", s[i].marks);
//     }
//     return 0;
// }





// Write a simple database program in C which
// stores personal details of 100 persons such as
// Name, Date of Birth, Address, Phone number etc

// 

// Write a program in ‘C’ that compares two given
// dates. To store a date, use a struct that contains
// three members namely day, month, and year. If
// the dates are equal, then display message as
// “equal” otherwise “Unequal”

#include <stdio.h>

struct date {
    int day, month, year;
};

int main() {
    struct date d1, d2;

    // Input first date
    printf("Enter first date (dd mm yyyy): ");
    scanf("%d %d %d", &d1.day, &d1.month, &d1.year);

    // Input second date
    printf("Enter second date (dd mm yyyy): ");
    scanf("%d %d %d", &d2.day, &d2.month, &d2.year);

    // Compare
    if(d1.day == d2.day && d1.month == d2.month && d1.year == d2.year) {
        printf("Equal\n");
    } else {
        printf("Unequal\n");
    }

    return 0;
}