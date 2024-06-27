#include<stdio.h>

int main() {
	// CICLO DE REPETICAO ENQUANTO num != (-1)
	while(1){
	    // NUMERO ESCOLHIDO
	    int num;
	    scanf(" %d", &num);
	    
	    // CONDICAO DE PARADA
	    if(num == (-1)){
	        break;
	    }
	    
	    // QUANTIDADE DE REPETICOES
	    int repet = 0;
	    
	    // NAO VAMOS UTILIZAR O CONCEITO DE ARRAY, ASSIM TODAS AS
	    // VARIAVEIS DA SEQUENCIA SERAO ARMAZENADAS UMA A UMA NA
	    // VARIAVEL num_sequencia, SENDO SOBRESCRITAS NO CICLO A SEGUIR
	    int num_sequencia;
	    
	    // CICLO DA SEQUENCIA
	    int i;
	    for(i=0; i<1000; i++){
	        // ENTRADA DO (i+1)-esimo NUMERO
	        scanf(" %d", &num_sequencia);
	        
	        // CONDICAO DE REPETICAO
	        if(num_sequencia == num){
	            repet++;
	        }
	    }
	    
	    // IMPRIMINDO A RESPOSTA
	    printf("%d appeared %d times\n", num, repet);
	}
	
	return 0;
}
