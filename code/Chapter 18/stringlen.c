 // stringlen.c--Using the strlen() function. */

 #include <stdio.h>
 #include <string.h>

 int main( void )
 {
    size_t length;
    char buf[80];

     while (1)
     {
         puts("\nEnter a line of text, a blank line to exit.");
         gets(buf);

         length = strlen(buf);

         if (length != 0)
             printf("\nThat line is %lu characters long.", length);
         else
             break;
     }
      return(0);
 }
