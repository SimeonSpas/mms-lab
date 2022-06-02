#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main ()
{
    float a, b, c;
    float max = INT_MIN;
    for (a = 0; a < 3; a++){
        scanf("%f", &b);
        if (b > max){
            max = b;
        }
    }printf("the max numbers is: %.2f", max);
    
    return EXIT_SUCCESS;
} 
// ./task1 << numbers.txt
