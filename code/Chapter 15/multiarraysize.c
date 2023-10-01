 // multiarraysize.c--Demonstrates the sizes of multidimensional array elements.

 #include <stdio.h>

 int multi[2][4];

 int main( void )
 {
    printf("\nThe size of multi = %p", sizeof(multi));
    printf("\nThe size of multi[0] = %p", sizeof(multi[0]));
    printf("\nThe size of multi[0][0] = %p\n", sizeof(multi[0][0]));

    return 0;
 }
