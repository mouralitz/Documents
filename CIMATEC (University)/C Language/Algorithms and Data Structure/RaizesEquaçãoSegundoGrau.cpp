#include <stdio.h>
#include <math.h>
#include <locale.h>

float calcula_delta(float a, float b, float c){
    float delta;
    delta = ((b*b) - 4 * a * c);
    return delta;
}

float raiz_1(float a, float b, float delta){
    float  r1;
    
    r1 = (-b + (sqrt(delta))) / (2 * a);
    return r1;
}

float raiz_2(float a, float b, float delta){
    float r2;
    r2 = (-b - (sqrt(delta))) / (2 * a);
    return r2;
}

int main(void){
    
    setlocale(LC_ALL, "Portuguese");

    float a, b, c, delta, r1, r2;
    
    printf("Informe os valores de a, b, e c, respectvamente:\n");
    scanf(" %f %f %f", &a, &b, &c);
    delta = calcula_delta(a, b, c);
    
    printf("O valor de delta equivale a: %.2f\n", delta);

    if(delta > 0){
        r1 = raiz_1(a, b, delta);
        r2 = raiz_2(a, b, delta);
        printf("A função tem duas raízes reais e distintas, sendo elas: r1 = %.2f e r2 = %.2f",r1, r2);
    }
    else if(delta == 0){
        r1 = raiz_1(a, b, delta);
        printf("A função tem duas raízes reais e identicas, sendo elas: r1 e r2 = %.2f", r1);
    }
    else {
        printf("A função não possui raíz real");
    }

    return 0;
}