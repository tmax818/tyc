 /* get.c--Demonstrates using the gets() library function. */

 #include <stdio.h>

 /* Allocate a character array to hold input. */

 char input[257];

 int main( void )
 {
     puts("Enter some text, then press Enter: ");
     gets(input);
     printf("You entered: %s\n", input);

     return 0;
 }
