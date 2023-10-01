   // multiarray.c--Demonstrates pointers and multidimensional arrays.

   #include <stdio.h>

   int multi[2][4];

   int main( void )
   {
       printf("\nmulti = %p", multi);
       printf("\nmulti[0] = %p", multi[0]);
       printf("\n&multi[0][0] = %p\n", &multi[0][0]);

       return 0;
   }
