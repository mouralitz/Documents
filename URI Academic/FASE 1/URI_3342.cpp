#include <stdio.h>
 
int main() {
 
   int n, pretas, brancas, total;
   
   scanf(" %d", &n);
   
   total = n * n;
   
   pretas = total - (total /2);
   brancas = total - pretas;
   
   printf("%d casas brancas e %d casas pretas\n",brancas, pretas);
   
    return 0;
}
