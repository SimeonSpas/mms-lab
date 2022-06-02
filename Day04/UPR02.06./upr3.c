#include <stdio.h>
//premahvane na posledovatelnite intervali
int main()
{

    char sym = 0, prevSym = 0;
    while (sym != 'A'){
        prevSym = sym; // zapomnq tekushtiq simvol
        scanf("%c", &sym);
        if (!(sym != ' ' || prevSym != ' ')){
            printf("%c", sym);

        }
      
    }
    return 0;
}