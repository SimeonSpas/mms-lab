#include <stdio.h>
#include <math.h>

int main(){
    double a, b, result;
     printf("Enter a: ");
     scanf("%lf", &a);
     printf("Enter b: ");
     scanf("%lf", &b);
     result = pow(a, b);
     printf("%.2lf power of %.2lf = %.2lf",a , b , result);
     

    return 0;
}
