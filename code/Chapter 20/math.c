 // math.c--Demonstrates some of C's math functions

 #include <stdio.h>
 #include <math.h>

 int main( void )
 {

     double x;
     int power;

     puts("Enter a number: ");
     scanf( "%lf", &x);

     printf("\n\nOriginal value: %lf", x);

     printf("\nCeil: %lf", ceil(x));
     printf("\nFloor: %lf", floor(x));
     if( x >= 0 )
         printf("\nSquare root: %lf", sqrt(x) );
     else
        puts("\nNegative number" );

     printf("\nCosine: %lf\n", cos(x));
     puts("Enter a whole number between 2 and 10: ");
     scanf( "%d", &power);
     printf("\n%lf to the %d power is %lf\n", x, power, pow(x, power));
     return(0);
 }
