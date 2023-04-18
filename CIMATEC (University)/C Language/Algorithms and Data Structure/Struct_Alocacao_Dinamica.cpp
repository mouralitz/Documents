#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
	int dia, mes, ano;
}data;

int main(){
	data *d;
	if(d != NULL){
		d = (data *)malloc (sizeof (data));
		d->dia = 15; d->mes = 7; d->ano = 2017;
		printf("...%d...%d...%d", d->dia, d->mes, d->ano);
	}
	
	free(d);
	d = NULL;
}
