#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    // CRIANDO AS TRES VARIAVEIS DE ENTRADA
	int n1, n2, n3;
	scanf(" %d %d %d", &n1, &n2, &n3);
	
	// CONDICOES DA SAIDA
	if(n1 <= n2){
	    if(n2 <= n3){
	        printf("%d\n%d\n%d", n1, n2, n3);
	    }else if(n2 > n3 && n1 <= n3){
	        printf("%d\n%d\n%d", n1, n3, n2);
	    }else{
	        printf("%d\n%d\n%d", n3, n1, n2);
	    }
	}else{
	    if(n1 <= n3){
	        printf("%d\n%d\n%d", n2, n1, n3);
	    }else if(n1 > n3 && n2 <= n3){
	        printf("%d\n%d\n%d", n2, n3, n1);
	    }else{
	        printf("%d\n%d\n%d", n3, n2, n1);
	    }
	}
	
	return 0;
}
