
#include<stdio.h>
#include<stdlib.h>
	
int negativos(float* vet, int N){
	int contador = 0;
	for(int j = 0; j < N; j++)scanf("%f",&vet[j]);
	
	for(int i= 0; i < N; i++){
		if(vet[i] < 0)contador++;
		}
	return contador;
}

	                    
int main(){
	float *vet;
	int N;

	printf("quantos numeros deseja conferir\n");
	scanf("%d",&N);
	printf(" %i numeros(s) negativo(s) digitado(s)\n",negativos(vet,N));
	return 0;
}
	
