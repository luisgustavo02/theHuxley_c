// https://thehuxley.com/problem/1087?locale=pt_BR

#include<stdio.h>

int main(){
    // VARIAVEL INICIAL
	int i;
	
	// CICLO DE REPETICAO
	
	// OS NUMEROS NATURAIS INICIAM NO 0, LOGO FAREMOS O CICLO
	// 0, 1, 2, 3, ..., 98, 99
	
	for(i=0; i<100; i++){
	// AO INVES DE COLOCAR i<100, PODEMOS COLOCAR i<=99

		// IMPRIMINDO O NUMERO
	    printf("%d\n", i);
	}
	
	return 0;
}
