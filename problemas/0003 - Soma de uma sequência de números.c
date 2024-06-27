// https://thehuxley.com/problem/3?locale=pt_BR

#include<stdio.h>

int main(){
    // NUMERO DE ELEMENTOS A SER INSERIDO
    int n;
    scanf(" %d", &n);
    
    // CRIACAO DA VARIAVEL DA SOMA DOS ELEMENTOS
    int soma = 0;
    
    // CICLO DE ENTRADA E SOMA DOS NUMEROS
    int i;
    for(i=0; i<n; i++){
        // ENTRADA DO NUMERO
        int num_sequencia;
        scanf(" %d", &num_sequencia);
        
        // SOMA DO NUMERO
        soma += num_sequencia;
    }
    
    // IMPRIMINDO O RESULTADO
    printf("%d", soma);
    
	return 0;
}
