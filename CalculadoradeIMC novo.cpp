#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 50


struct pessoa{
	int ideal;
	int peso;
	float altura;
	float valor1;
	char nome[50];
};

typedef struct pessoa pessoa;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int*p;
	int i, alunos;
	
	
	printf("Olá, bem-vindo à Calculadora de IMC para uso escolar, para começarmos, digite a quantidade de alunos que farão o teste: ");
	scanf("%d", &alunos);
	fflush(stdin);
	system("cls");
	
	pessoa dados[alunos] = {0, 0, 0.0,0.0, "Nome"};
	
	p= (int*)(malloc(alunos*sizeof(int)));
	
	
	for(i=0;i<alunos;i++)
	{
	printf("Aluno(a) %d, insira seu nome:\n", i+1);
	scanf("%50[^\n]s", &dados[i].nome);
	fflush(stdin);
	system("cls");
	
	printf("Qual é seu peso atual, %s?\n", dados[i].nome);
	scanf("%d", &dados[i].peso);
	fflush(stdin);
	system("cls");
	
	printf("E por fim, qual é sua altura?\n");
	scanf("%f", &dados[i].altura);
	fflush(stdin);
	system("cls");
	
	dados[i].valor1 = dados[i].altura * dados[i].altura;
   	dados[i].ideal = dados[i].peso / dados[i].valor1;
	
		if(dados[i].ideal < 18.5){
		printf("%s, você está abaixo do seu peso ideal.\n\n", dados[i].nome);
		printf("-----------------------------------\n\n");
		fflush(stdin);
		system ("pause");
		system("cls");
		continue;
	}
	
	    if(dados[i].ideal >= 18.5 && dados[i].ideal <= 24.9){
		printf("%s, você está no seu peso normal.\n\n", dados[i].nome);
		printf("-----------------------------------\n\n");
		fflush(stdin);
		system ("pause");
		system("cls");
		continue;
		
	}
	
		if(dados[i].ideal >= 25 && dados[i].ideal <= 29.9){
		printf("%s, você está com sobrepeso.\n\n", dados[i].nome);
		printf("-----------------------------------\n\n");
		fflush(stdin);
		system ("pause");
		system("cls");
		continue;

	}
	
		if(dados[i].ideal >= 30 && dados[i].ideal <= 34.99 ){
		printf("%s, você se encontra em uma situação de obesidade grau 1.\n\n", dados[i].nome);
		printf("-----------------------------------\n\n");
		fflush(stdin);
		system ("pause");
		system("cls");
		continue;
		
	}
	
	    else if (dados[i].ideal > 40) {
		printf("%s, você se encontra em uma situação de obesidade grau 3(mórbida).\n\n", dados[i].nome);
		 printf("-----------------------------------\n\n");
		fflush(stdin);
		system ("pause");
		system("cls");
		continue;
    }
	
	    do{
		printf("%s, você se encontra em uma situação de obesidade grau 2(severa).\n\n", dados[i].nome);
		printf("-----------------------------------\n\n");
		fflush(stdin);
		system ("pause");
		system("cls");
		continue;
	}
		
	    while(dados[i].ideal >= 35 && dados[i].ideal <= 39.99 );
		
		
	}

int av;
	char fdb [100];
	printf("Por gentileza, se possível, poderia avaliar nosso software, com uma nota de 1 a 5? Sendo: \n/ 1- Péssimo. \n/ 2- Ruim. \n/ 3- Satisfatório. \n/ 4- Bom. \n/ 5- Excelente. \n");
	scanf("%d", &av);
	fflush(stdin);
		//system ("pause");
		system("cls");
	
	switch(av) {
		case 1:
			printf("Sentimos muito por isso, por favor, digite abaixo o que podemos fazer, em sua opinião. para melhorar a qualidade de nosso sistema.\n\n");
			scanf("%100[^\n]s", &fdb);
			fflush(stdin);
			system("cls");
			break;
		
		case 2:
			printf("Sentimos muito por isso, por favor, digite abaixo o que podemos fazer, em sua opinião, para melhorar a qualidade de nosso sistema.\n\n");
			scanf("%100[^\n]s", &fdb);
			fflush(stdin);
			system("cls");
			break;
			
	 	case 3:
	 		printf("Sentimos por não ter atendido a todas suas expectativas, por favor, digite abaixo o que podemos fazer, em sua opinião, para melhorar a qualidade de nosso sistema.\n\n");
			scanf("%100[^\n]s", &fdb);
			fflush(stdin);
			system("cls");
			break;
		
			case 4:
			printf("Que bom que gostou! Por favor, caso ache necessário, digite abaixo o que podemos fazer, em sua opinião, para melhorar ainda mais a qualidade de nosso sistema.\n\n");
			scanf("%100[^\n]s", &fdb);
			fflush(stdin);
			system("cls");
			break;
		
		case 5:
			printf("Ficamos muitos felizes em oferecer um serviço de qualidade para você! Por favor, conte sua experiência a familiares, e amigos. \n\n");
			//scanf("%s", &fdb);
			fflush(stdin);
			//system ("pause");
			//system("cls");
			break;
			
		default:
			printf("Opção inválida.");
			
	}
	
	return 0;
}

