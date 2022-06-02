#include <stdio.h>
// nai golqm obsht delitel (GCD)
int main ()
{
    unsigned int a, b, minAB; // samo polojitelni chisla
    scanf("%u %u", &a, &b);
    if (a > b){
        minAB = b;
    }else {
        minAB = a;
    }
    for (int i = minAB; i > 0; i--){
        if ((a%i) == 0 && (b%i) == 0){
            printf("%d\n", i);
            break; // breakva za da ne pokazva po malki deliteli
            // a nie iskame NAI GOLEMIQ delitel SAMO
        }
    }
    return 0;
}

/*a b
100 150
100 50
50 50
50 0
*/