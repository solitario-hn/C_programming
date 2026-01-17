#include <stdio.h>    
// '#' defines a preprocessor that is used to include header files where the standard code work(functionality) for the built in functions , here like printf,scanf is written.

/* void main() 
 {
   printf("Hello C WORLD!"); 
 } */    /*USED FOR A MULTILINE COMMENT.*/

//   return void; OR  return; 
//  we can use void keyword to state that there's no return in the main function altogether , hence escaping to write any return statment at all or can just write return or return void.


//compiler starts compiling the code from the main function itself.

// #include <stdio.h>

/* 
int main() {
   printf("Hello World!");  //';' need to add semicolon after end of each line in code , and {define a block of code.}
   return 0;                //here instead of void , int datatype was given hence it is returning a integer datatype '0' value.
} 
*/

//Remember: The compiler ignores white spaces. However, multiple lines makes the code more readable.
//WHEN IN C , WE USE "line of text"  double quotation for multiple words ALWAYS.

#include <stdio.h>

int main() {
  printf("Hello World!\t\t");   //        '\t' 	Creates a horizontal tab ,'\\' 	Inserts a backslash character (\) 
  printf("\"I am learning \\C.\"");   //         '\"  ' 	Inserts a double quote character
  return 0;
}

//OUTPUT-- Hello World!            "I am learning \C."

