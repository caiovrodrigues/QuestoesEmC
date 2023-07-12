#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "conio.h"

/* QUEST�O 4 */

struct funcionario{
	float salario;
	int codCargo;
}funcionario;

void mostrarSalario(float *antSalario, float *newSalario, float *diferencaSalario, int *cargo, int aumento){
	system("cls");
	printf("C�digo do funcion�rio: %d\n\n", *cargo);
	printf("Parab�ns, Voc� recebeu %d%% de aumento!!\n\n", aumento);
	printf("\tSal�rio antigo: R$%.2f\n", *antSalario);
	printf("\tSal�rio novo: R$%.2f\n", *newSalario);
	printf("\tDiferen�a: R$%.2f\n", *diferencaSalario);
	getch();
}

void calcularSalario(float *salario, int *codCargo){
	float newSalario;
	float diferencaSalarial;
	
	switch(*codCargo){
		case 101:
			newSalario = *salario * 1.10;
			diferencaSalarial = newSalario - *salario;
			mostrarSalario(&*salario, &newSalario, &diferencaSalarial, &*codCargo, 10);
			break;
		case 102:
			newSalario = *salario * 1.20;
			diferencaSalarial = newSalario - *salario;
			mostrarSalario(&*salario, &newSalario, &diferencaSalarial, &*codCargo, 20);
			break;
		case 103:
			newSalario = *salario * 1.30;
			diferencaSalarial = newSalario - *salario;
			mostrarSalario(&*salario, &newSalario, &diferencaSalarial, &*codCargo, 30);
			break;
		default:
			newSalario = *salario * 1.40;
			diferencaSalarial = newSalario - *salario;
			mostrarSalario(&*salario, &newSalario, &diferencaSalarial, &*codCargo, 40);
			break;
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	int i;
	
	printf("C�digo Cargo Percentual");
	printf("\n101 Gerente 10%");
	printf("\n102 Engenheiro 20%");
	printf("\n103 T�cnico 30%");
	
	printf("\n\nDigite o sal�rio do funcion�rio: ");
	scanf("%f",&funcionario.salario);
	
	printf("\nDigite o cargo do funcion�rio: ");
	scanf("%d",&funcionario.codCargo);	

	calcularSalario(&funcionario.salario, &funcionario.codCargo);
}









