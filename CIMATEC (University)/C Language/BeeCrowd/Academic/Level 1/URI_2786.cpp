#include <stdio.h>

int main(void){

    int  l, c, lajota1, lajota2;

    scanf(" %d %d", &l, &c);

   lajota1 = (l * c) + ((l-1) * (c-1));
   lajota2 = 2 * ((l-1) + (c-1));

   printf("%d\n%d\n", lajota1, lajota2);

    return 0;
}