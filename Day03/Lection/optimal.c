#include <stdio.h>
int main()
{
    // HEX <-> DEC
    int num, opt;
    printf("1. HEX -> DEC\n2. DEC -> HEX\n3.OCT -> DEC\n4. DEC -> OCT\n5.HEX -> OCT\n6.OCT -> HEX\n Enter option: ");
    scanf("%d", &opt);
    switch (opt){
        case 1: if (opt == 1){
        scanf("%X", &num);
        printf("%X(16) = %d (10)\n", num, num);
        }
        break;
        case 2: if (opt == 3){
        scanf("%X", &num);
        printf("%X(16) = %d (10)\n", num, num);
        }
        break;
        
        case 3: if (opt == 3){
        scanf("%X", &num);
        printf("%X(16) = %d (10)\n", num, num);
        }
        break;
        }
    
    return 0;
}