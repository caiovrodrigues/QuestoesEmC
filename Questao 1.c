#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void mm(int *v, int *min, int *max){
	int i;
	
	for(i = 0; i < 5; i++){
		if(v[i] < *min){
			*min = v[i];
		}
		if(v[i] > *max){
			*max = v[i];
		}
	}
	
	printf("\n\nO menor valor do vetor é: %d", *min);
	printf("\nO maior valor do vetor é: %d", *max);
	getch();
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int minimo = 999;
	int maximo;
	int vetor[5];
	int i;
	
	printf("Digite 5 números! \n");
	
	for(i = 0; i < 5; i++){
		printf("\nDigite um número: ");
		scanf("%d",&vetor[i]);
	}
	
	mm(vetor, &minimo, &maximo);
}
