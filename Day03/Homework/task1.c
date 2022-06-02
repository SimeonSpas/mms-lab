#include <stdio.h>
#include <stdint.h>
#include <math.h>
int main ()
{
    int num, opt;
    printf("1.DEC -> HEX\n2.HEX -> DEC\n");
    scanf("%d", &opt);  
    switch (opt)
    {
        case 1: 
            scanf("%d", &num);
            printf("%d(10) = %x(16)\n", num, num);
            break;
        case 2:
            scanf("%X", &num);
            printf("%x(16) = %d(10)\n", num, num);
        break;
        default:
        fprintf(stderr, "unrecognized number\n");
        break;
    }
    return 0;
}