#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void maximoMinimo(int *v, int n, int *maximo, int *minimo){
	int i;
	
	for(i = 0; i < n; i++){
		if(v[i] < *minimo){
			*minimo = v[i];
		}
		if(v[i] > *maximo){
			*maximo = v[i];
		}
	}
	
	printf("\n\nO menor valor do vetor é: %d", *minimo);
	printf("\nO maior valor do vetor é: %d", *maximo);
	getch();
}

int main(){
	setlocale(LC_ALL,"Portuguese") ;
	int numMin = 999;
	int numMax;
	int vetor[5];
	int i;
	
	printf("Digite 5 números! \n");
	
	for(i = 0; i < 5; i++){
		printf("\nDigite um número: ");
		scanf("%d",&vetor[i]);
	}
	
	maximoMinimo(vetor, i, &numMax, &numMin);
}
