#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *preenche(int *vet,int n){
	vet = (int*)malloc(n * sizeof(int));
	for(int i = 0; i < n; i++)vet[i] = rand()%20;
	return vet;
}

int maiorElemento(int *vet, int n){
	int maior =vet[0];
	for(int i = 0; i < n; i++){	
		if(vet[i] > maior)maior = vet[i];
	}
	return maior;
}

int menorElemento(int *vet, int n){
	int menor = vet[0];
	for(int i = 0; i < n; i++){
			if(vet[i] <  menor)menor = vet[i];
	}
	return menor;
}

float mediaElementos(int *vet, float n){
	float media = 0;
	for(int i = 0; i < n; i++)media += vet[i];
	return  media / n ;
	}
	
int main (){
	int *vet1;
	int *vet2;
	int n, m;
	
	srand(time(NULL));
	
	n = rand()%10;
	m = rand()%10;
	vet1 = preenche(vet1,n);
	vet2 = preenche(vet2,m);

	printf("O primeiro vetor possui %i elementos,\n seu maior elemento é %i o menor é % i e a media é %.2f\n",n,maiorElemento(vet1,n),menorElemento(vet1,n),mediaElementos(vet1,n));
	printf("O segundo vetor possui %i elementos,\n seu maior elemento é %i o menor é % i e a media é %.2f\n",n,maiorElemento(vet2,m),menorElemento(vet2,m),mediaElementos(vet2,m));


	return 0;

}
