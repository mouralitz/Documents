#include <stdio.h>

int main (void){
	
	int hi, mi, hf, mf, si, sf, stot;
	
	scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
	
	if(hf <= hi && mf <= mi){
		hf = hf + 24;
	}
	else if(mf <= mi){
		hf = hf - 1;
		mf = mf + 60;
	}
	
	si = (hi*3600)+(mi*60);
	sf = (hf*3600)+(mf*60);
	
	stot= sf - si;
	
	int hora = stot / 3600;
	int min = (stot - (hora * 3600)) / 60;
	
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", hora, min);
	
	return 0;
}
