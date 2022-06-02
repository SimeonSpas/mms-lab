#include <stdio.h>
#include <stdint.h>
#include <math.h>
int main ()
{
    double a = 1.1;
    double b = 0;
    for (int i =0; i < 11; i++){
        b += 0.1;
    }
    printf("a = %.20lf, b = %.20lf\n", a, b);
   /* if (a == b){
        printf("Equals\n");

    }else {
        printf("Not equals\n");
    }*/
    if (fabs(a-b) < 0.001){ // tova 0.001 e izbranata ot men tochnost (fabs e ot math.h i oznachava absoliutna stoinost)
        printf("Equals\n");
    }else{
        printf("Not equals");
    }
    return 0;
}
// ZAKOMENTIRANOTO SRAVNENIE GORE E GRESHEN PODHOD if (a == b) i t.n.
// Vinagi ima zakruglenie, zatova ima greshka i izpisva NOT EQUALS

//a = 1.10000000000000008882, b = 1.09999999999999986677
//MNOGO VAJNO !!!!!!