/* sizeof.c -- program to tell the size of the C variable type in bytes*/

#include <stdio.h>

int main(){

    printf("\nA char is\t %9ld bytes", sizeof(char));
    printf("\nAn int is\t %9ld bytes", sizeof(int));
    printf("\nA short is\t %9ld bytes", sizeof(short));
    printf("\nA long long is\t %9ld bytes", sizeof(long long));
    printf("\nAn unsigned char is\t %9ld bytes", sizeof(unsigned char));
    printf("\nAn unsigned int is\t %9ld bytes", sizeof(unsigned int));
    printf("\nAn unsigned short is\t %9ld bytes", sizeof(unsigned short));
    printf("\nAn unsigned long is\t %9ld bytes", sizeof(unsigned long));
    printf("\nAn unsigned long long is\t %9ld bytes", sizeof(unsigned long long));
    printf("\nA float is\t %9ld bytes", sizeof(float));
    printf("\nA double is\t %9ld bytes", sizeof(double));
    printf("\nA long double is\t %9ld bytes", sizeof(long double));
    printf("\n");

    return 0;
}