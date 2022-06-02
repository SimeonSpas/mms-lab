#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int main()
{
    int num, max = INT_MIN;
    int flag = 0;
    while (scanf("%d", &num) != EOF){
        flag = 1;
        if (num > max){
            max = num;
        }

    }
    if (flag == 1){
        printf("%d\n", max);
    }
    else {
        fprintf(stderr, "No numbers!\n");
        return EXIT_FAILURE;
    }
    
    return EXIT_SUCCESS;
}
