#include <stdio.h>
#include <math.h>
// nai golqm obsht delitel (GCD)
// vtori variant
int main ()
{
    unsigned int a, b, minAB, temp; 
    scanf("%u %u", &a, &b);
    while (b != 0)
    {
        if (a < b){
            temp = a;
            a = b; 
            b = temp;
        }
        a = a - b;
    }
    printf("%u", a);
    return 0;
}