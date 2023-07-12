#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int qtdAlunos;

struct estudante{
	char nome[30];
	int matricula;
	float nota1;
	float nota2;
	float media;
}alunos[10];

void cadastro(struct estudante a[]){
    int i;
    int sair = 1;
    
    setlocale(LC_ALL, "Portuguese");
    
    while(sair != 0){
    	for(i = 0; i < 10; i++){
	        system("cls");
	        printf("Bem vindo a tela de cadastro de alunos!\n\n");
	        qtdAlunos++;
	        
	        printf("Digite o nome do aluno: ");
	        scanf("%s",&a[i].nome);
	        
	        printf("\nDigite a matrícula: ");
	        scanf("%d",&a[i].matricula);
	        
	        printf("\nDigite a primeira nota: ");
	        scanf("%f",&a[i].nota1);
	        
	        printf("\nDigite a segunda nota: ");
	        scanf("%f",&a[i].nota2);
	        
	        a[i].media = (a[i].nota1 + a[i].nota2) / 2;
	        
	        printf("\nDigite 0 para encerrar ou 1 para continuar o cadastro: ");
	        scanf("%d",&sair);
	        
	        if(sair == 0) break;
    	}
	}
}

void showNotas(struct estudante b[]){
    int i;
    system("cls");
    printf("Resultado dos alunos");
    
    for(i = 0; i < qtdAlunos; i++){
        printf("\n\nNome: %s - Matrícula: %d", b[i].nome, b[i].matricula);
        printf("\nNota 1: %.2f", b[i].nota1);
        printf("\nNota 2: %.2f", b[i].nota2);
        printf("\nMédia: %.2f", b[i].media);
    }
    
    getch();
}

int main(){
    cadastro(alunos);
    showNotas(alunos);
}
