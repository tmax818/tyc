 // puts.c--Demonstrates puts().

 #include <stdio.h>
 #define SIZE 5
 // Declare and initialize an array of pointers.

 char *messages[SIZE] = { "This", "is", "a", "short", "message." };

 int main( void )
 {
     int x;

     for (x=0; x<SIZE; x++)
         puts(messages[x]);

     puts("And this is the end!");

     return 0;
 }
