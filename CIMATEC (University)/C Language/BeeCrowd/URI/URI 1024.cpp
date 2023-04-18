#include <stdio.h>
#include <string.h>

int main(void){
    char frase[1000], revfrase;
    int n;
	
	scanf(" %d", &n);
	for (int i = 0; i < n; i++){
		scanf(" %[^\n]s", frase);

        //Algoritmo para a 1ª passada.
        
    for(int i=0; i<strlen(frase); i++){
        if((frase[i] >= 'a' && frase[i] <= 'z')){
        frase[i] += 3;
        }
        else if((frase[i] >= 'A' && frase[i] <= 'Z')){
            frase[i] += 3;
        }
    }
 
        //Algoritmo para a 2ª passada.

    for(int i=0; i<strlen(frase)/2; i++){
        revfrase = frase[i];
        frase[i] = frase[(strlen(frase)-(i+1))];
        frase[(strlen(frase)-(i+1))] = revfrase;
    }

        //Algoritmo para a 3ª passada.
	for (int i = (strlen(frase)/2) ; i < (strlen(frase)); i++){
		frase[i] -= 1;
	}
    
    
    printf("%s\n",frase);
	}
    

    return 0;
}
