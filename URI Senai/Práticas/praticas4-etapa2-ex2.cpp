#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    
    int nmr;
    
    printf("Digite o número de jogos que deseja apostar (Max. 5): ");
    scanf(" %d", &nmr);
    
    int megacena[nmr][6][10]={0}, aposta, sorteio[6], teste, sorte[6][10]={0}, qt[nmr]={0};
    
    for(int i=0;i<nmr;i++){
        printf("Digite 6 digitos (01 - 60) para o %dº jogo: ", i+1);
        for(int x=0;x<6;x++){
        scanf(" %d", &aposta);
        megacena[i][(aposta-1)/10][(aposta-1)%10]=1;
        }
    }
    printf("Os números sorteados foram: ");
    for(int i=0, x=0;i<6;){
        sorteio[i]=rand()%60;
        if(sorteio[i]!=0 && sorte[(sorteio[i]-1)/10][(sorteio[i]-1)%10]==0){
            sorte[(sorteio[i]-1)/10][(sorteio[i]-1)%10]=1;
            printf("%d ", sorteio[i]);
            i++;
            x++;
        }
    }
    printf("\n");
    for(int i=0;i<nmr;i++){
        for(int j=0;j<6;j++){
            for(int k=0;k<10;k++){
                if(megacena[i][j][k]==1 && megacena[i][j][k]==sorte[j][k]){
                    qt[i]++;
                }
            }
        }
    }
    
    for(int i=0;i<nmr;i++){
        printf("O número de acertos no %dº jogo foi: %d\n", i+1, qt[i]);
    }
    
}