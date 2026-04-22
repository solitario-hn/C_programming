//Write a program which reads your name from
//the keyboard and outputs a list of ASCII codes,
//hich represent your name.// 
//#include <stdio.h>

// int main() {
//     char name[100];
//     printf("Enter your name: ");
//     fgets(name, sizeof(name), stdin);

//     printf("\nCharacter  ASCII\n");
//     printf("-----------+------\n");

//     for (int i = 0; name[i] != '\0' && name[i] != '\n'; i++) {
//         printf("   '%c'      %d\n", name[i], (int)name[i]);
//     }
//     return 0;
// }
// Write a program which will read a text and count
// all occurrences of all characters which are part
// of text.
// 
// Write a program which reads a string from the
// keyboard and determines whether the string is a
// palindrome (Ignore Capitalization)
// 
/*Write macro definition with arguments for
calculation of simple interest and amount. Store
these macro definitions in a file called
‘Interest.h”. Include this file in your program
and use the macro definition for calculating
simple interest and amount.*/
// #include <stdio.h>
// #include "Interest.h"   /* quotes = search current directory */

// int main() {
//     float principal, rate, time;

//     printf("Enter Principal  : "); scanf("%f", &principal);
//     printf("Enter Rate (%%)   : "); scanf("%f", &rate);
//     printf("Enter Time (yrs) : "); scanf("%f", &time);

//     printf("\nSimple Interest : %.2f\n", SIMPLE_INTEREST(principal, rate, time));
//     printf("Total Amount    : %.2f\n",   AMOUNT(principal, rate, time));
//     return 0;
// }
/*Write a program to copy the contents of one file
to another file.*/

// 
/*Write a program which will store ten integers to
one file and squares of these numbers to another
file.*/
// 

/*Write a program which will store ten integers to
one file and stores the odd and even numbers to
respective files*/

// #include <stdio.h>

// int main() {
//     int nums[10];

//     printf("Enter 10 integers:\n");
//     for (int i = 0; i < 10; i++) {
//         printf("  [%d]: ", i + 1);
//         scanf("%d", &nums[i]);
//     }

//     FILE *fin   = fopen("integers.txt", "w");
//     FILE *feven = fopen("even.txt",     "w");
//     FILE *fodd  = fopen("odd.txt",      "w");

//     if (!fin || !feven || !fodd) { printf("File error.\n"); return 1; }

//     for (int i = 0; i < 10; i++) {
//         fprintf(fin, "%d\n", nums[i]);

//         if (nums[i] % 2 == 0)
//             fprintf(feven, "%d\n", nums[i]);
//         else
//             fprintf(fodd,  "%d\n", nums[i]);
//     }

//     fclose(fin); fclose(feven); fclose(fodd);
//     printf("integers.txt, even.txt, odd.txt written.\n");

//     /* read back both split files */
//     FILE *f; char line[20];

//     printf("\n--- even.txt ---\n");
//     f = fopen("even.txt", "r");
//     while (fgets(line, sizeof(line), f)) printf("%s", line);
//     fclose(f);

//     printf("\n--- odd.txt ---\n");
//     f = fopen("odd.txt", "r");
//     while (fgets(line, sizeof(line), f)) printf("%s", line);
//     fclose(f);

//     return 0;
// }

// Write a program to compare two given strings
#include <stdio.h>
#include <string.h>

int stringCompare(char *s1, char *s2) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];   /* + means s1 > s2, - means s1 < s2 */
        i++;
    }
    return s1[i] - s2[i];           /* handles different lengths */
}

int main() {
    char s1[100], s2[100];
    printf("Enter string 1: "); fgets(s1, sizeof(s1), stdin);
    printf("Enter string 2: "); fgets(s2, sizeof(s2), stdin);

    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    int result = stringCompare(s1, s2);

    if      (result == 0) printf("Strings are EQUAL.\n");
    else if (result  > 0) printf("'%s' is GREATER than '%s'.\n", s1, s2);
    else                   printf("'%s' is LESS than '%s'.\n",    s1, s2);
    return 0;
}