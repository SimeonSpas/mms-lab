#include <stdio.h>

int main()
{
    int x =23;
    printf("size of int: %ld Bytes\n", sizeof(int));
    printf("size of short: %ld Bytes\n", sizeof(short));
    printf("size of double: %ld Bytes\n", sizeof(double));
    printf("size of float: %ld Bytes\n", sizeof(float));
    printf("size of char: %ld Bytes\n", sizeof(char));
    printf("size of x: %ld Bytes\n", sizeof(x));
    printf("size of long long: %ld Bytes\n", sizeof(long long));
    return 0;
}