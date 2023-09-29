// Demonstrates a simple function


#include <stdio.h>

long cube(long x);

long input, answer;

int main(){

    printf("Enter an integer value: ");
    scanf("%ld", &input);
    answer = cube(input);

    printf("\nThe cube of %ld is %ld\n", input, answer);

    return 0;
}

// function cube:

long cube(long x){
    // long x_cubed;

    // x_cubed = x * x * x;
    return x * x * x;
}