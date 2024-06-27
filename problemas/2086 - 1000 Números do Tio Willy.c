#include<stdio.h>

int main(){
    // CICLO DE REPETICAO DO PROGRAMA
    while(1){
        
        // DECLARANDO O VETOR DE 1000 POSICOES
        int numeros[1000];
        
        // CICLO DOS 1000 INTEIROS    
        int i = 0;
        while(i < 1000){
            scanf(" %d", &numeros[i]);
            
            // CONDICAO DE PARADA
            if(numeros[i] == (-1)){
                break;
            }
            
            i++;
        }
        
        // CONDICAO DE PARADA GERAL
        if(numeros[i] == (-1)){
            break;
        }
        
        // NUMERO ESCOLHIDO
        int num_escolhido;
        scanf(" %d", &num_escolhido);
        
        // QUANTIDADE DE REPETICOES
        int repet = 0;
        
        // CICLO DE VERIFICACAO
        int j;
        for(j=0; j<(i+1); j++){
            // CHECAGEM DA REPETICAO
            if(num_escolhido == numeros[j]){
                repet++;
            }
        }
        
        // IMPRIME A RESPOSTA
        printf("%d appeared %d times\n", num_escolhido, repet);
    }
    
	return 0;
}
