#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "conio.h"

/* QUESTÃO 4 */

struct funcionario{
	float salario;
	int codCargo;
}funcionario;

void mostrarSalario(float *antSalario, float *newSalario, float *diferencaSalario, int *cargo, int aumento){
	system("cls");
	printf("Código do funcionário: %d\n\n", *cargo);
	printf("Parabéns, Você recebeu %d%% de aumento!!\n\n", aumento);
	printf("\tSalário antigo: R$%.2f\n", *antSalario);
	printf("\tSalário novo: R$%.2f\n", *newSalario);
	printf("\tDiferença: R$%.2f\n", *diferencaSalario);
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
	
	printf("Código Cargo Percentual");
	printf("\n101 Gerente 10%");
	printf("\n102 Engenheiro 20%");
	printf("\n103 Técnico 30%");
	
	printf("\n\nDigite o salário do funcionário: ");
	scanf("%f",&funcionario.salario);
	
	printf("\nDigite o cargo do funcionário: ");
	scanf("%d",&funcionario.codCargo);	

	calcularSalario(&funcionario.salario, &funcionario.codCargo);
}









