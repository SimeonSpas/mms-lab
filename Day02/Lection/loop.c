#include <stdio.h>
int main(){
    long num = 0;
    while (num >= 0){
        printf("%ld\n", num);
        num += 10000;
    }
    return 0;
}