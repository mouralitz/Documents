#include <stdio.h>

int main(){
    int v, p, total, razao;

    scanf("%d", &v);
    scanf("%d", &p);

    if ( v % p != 0){
        total = (v / p) + 1;
        razao = v % p;
        for (int i = 1; i <= razao; i++){
            printf("%d\n", total);
        }
        for (int i = 1; i <= (p-razao); i++){
            printf("%d\n", total - 1);
        }
    }
    else{
        total = v / p;
        for (int i = 1; i <= p; i++){
            printf("%d\n", total);
        }
    }

    


    return 0;
}