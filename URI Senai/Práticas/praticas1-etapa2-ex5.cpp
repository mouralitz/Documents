#include <stdio.h>
#include <string.h>

int main(){

    char string1[100];
    char string2[100];
    int ehIgual = 1;

    scanf(" %s %s", string1, string2);

    for(int i = strlen(string1) - 1, j = strlen(string2) - 1; i >= 0; i--){
		
        if(string1[i] == string2[j]){
            j--;

            if(j == -1) break;

        }else{
            ehIgual = 0;
            break;
        }
    }

    if(ehIgual){
        printf("NICE");
    }else{
        printf("F soussa maldito");
    }

}
