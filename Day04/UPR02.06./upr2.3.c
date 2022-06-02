#include <stdio.h>
#include <math.h>
// nai golqm obsht delitel (GCD)
// Algoritum na EVKLIT
// nai burz algoritum za namirane na nai golqmoto obshto kratno!!!!
int main ()
{
    unsigned int a, b, minAB, temp; 
    scanf("%u %u", &a, &b);
    while (b != 0 && a != 0)
    {
        if (a < b){
            temp = a;
            a = b; 
            b = temp;
        }
        printf("%u %u\n", a, b);
        a = a % b;
    }
    printf("%u\n", b);
    return 0;
}