// https://thehuxley.com/problem/4?locale=pt_BR

#include<stdio.h>

int main(){
    // QUANTIDADE DOS NUMEROS QUE VAI ENTRAR
    int n;
    scanf(" %d", &n);
    
    // VETOR DE ENTRADA DOS NUMEROS, VETOR PARA NUMEROS PARES E IMPARES
    // QUANTIDADE DE PARES E IMPARES
    // SOMA DOS VETORES PARES E IMPARES
    int vetor[n], vetorPar[n], vetorImpar[n];
    int qtdPar = 0, qtdImpar = 0;
    int somaPar = 0, somaImpar = 0;
    
    // CICLO PARA ADQUIRIR OS NUMEROS
    int i;
    for(i=0; i<n; i++){
        scanf(" %d", &vetor[i]);
        
        // CONDICAO DOS NUMEROS PARES
        if(vetor[i] % 2 == 0){
            // CONDICAO PARA NAO REPETIR NUMEROS
            int add = 0;
            
            int j;
            for(j=0; j<qtdPar; j++){
                if(vetor[i] == vetorPar[j]){
                    add = 1;
                }
            }
            
            if(add == 0){
                vetorPar[qtdPar] = vetor[i];
                somaPar += vetor[i];
            }
            qtdPar++;
        }
        // CONDICAO DOS NUMEROS IMPARES
        else{
            // CONDICAO PARA NAO REPETIR NUMEROS
            int add = 0;
            
            int j;
            for(j=0; j<qtdImpar; j++){
                if(vetor[i] == vetorImpar[j]){
                    add = 1;
                }
            }
            
            if(add == 0){
                vetorImpar[qtdImpar] = vetor[i];
                somaImpar += vetor[i];
            }
            qtdImpar++;
        }
    }
    
    // IMPRIMINDO A QUANTIDADE DE FIGURINHAS DE JOAO E MARIA
    printf("%d\n%d\n", qtdPar, qtdImpar);
    
    // CONDICAO DE QUAL SOMA IMPRIMIR
    if(somaPar > somaImpar){
        printf("d", somaPar);
    }
    else{
        printf("%d", somaImpar);
    }
    
	return 0;
}
