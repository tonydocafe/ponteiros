#include<stdio.h>
#include<math.h>

int raizes(float A, float B, float C, float *X1, float *X2){
	float d = B*B - 4*A*C;

	if (d < 0){
		printf("não existe raiz real\n");
		return 0;
	}else if(d > 0){
		*X1 =(-B + sqrt(d))/(2 * A);
		*X2 =(-B - sqrt(d))/(2 * A);
		return 2;
	}else{
		*X1 = *X2 = -B /(2 * A);
		return 1;
	}

}


int main (){
	float A,B,C,X1,X2;
	printf("digite o valor de A em Ax²+Bx+C\n");
	scanf("%f",&A);
	printf("digite o valor de B em Ax²+Bx+C\n");
	scanf("%f",&B);
	printf("digite o valor de C em Ax²+Bx+C\n");
	scanf("%f",&C);
	int numero_de_raizes = raizes(A,B,C,&X1,&X2);
	
	printf("essa equação possui %i raizes reais\n",numero_de_raizes);

	return 0;
}
	
