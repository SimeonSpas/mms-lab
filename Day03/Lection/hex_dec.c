#include <stdio.h>
int main()
{
    // HEX <-> DEC
    int num, opt;
    printf("1. HEX -> DEC\n2. DEC -> HEX\n3.OCT -> DEC\n4. DEC -> OCT\n5.HEX -> OCT\n6.OCT -> HEX\n Enter option: ");
    scanf("%d", &opt);
    if (opt == 1){
        scanf("%X", &num);
        printf("%X(16) = %d (10)\n", num, num);
    }else if (opt == 2){
        scanf("%d", &num);
        printf("%d(10) = %X(16)\n", num, num);
    }else if (opt == 3){
        scanf("%o", &num);
        printf("%o(8) = %d(10)\n", num, num);
    }else if (opt == 4){
        scanf("%d", &num);
        printf("%d(10) = %o(8)\n", num, num);
    }else if (opt == 5){
        scanf("%X", &num);
        printf("%X(16) = %o(8)\n", num, num);
    }else if (opt == 6){
        scanf("%o", &num);
        printf("%o(8) = %x(16)\n", num, num);
    }
    else {
        fprintf(stderr, "invalid expression\n");
    }
    return 0;
}