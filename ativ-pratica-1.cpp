//Declaração das bibliotecas básicas.
#include <stdlib.h> 
#include <stdio.h>
#include <locale.h>
#include <string.h>

struct dados { //Criação da Struct Registro.
	char Nome[50];
	int RU;
};

int main() { //Função main principal.
	struct dados aluno, * P_aluno; //Criação do Ponteiro.
	char c;
	int tam; //Guardar tamanho.
	setlocale(LC_ALL, "Portuguese"); // Os caracteres sejam em português.

	printf("Digite o seu RU: "); //Recebendo o RU.
	scanf_s("%d", &aluno.RU); //Lendo o RU e guardando no endereço "aluno".
	c = getchar();

	printf("\n\n Digite o seu nome completo: "); //Solicitação de entrada do Nome Completo.
	gets_s(aluno.Nome, 49);

	P_aluno = &aluno; //Variavel ponteiro recebe o endereço da Struct.

	if (P_aluno->RU % 2) { //Vericação se o número é par ou impar.
		printf("\n\n ^^^^^^ O RU ANUNCIADO É IMPAR!! ^^^^^^");
	}
	else {
		printf("\n\n ^^^^^^ O RU ANUNCIADO É PAR!! ^^^^^^");
	}

	tam = strlen(P_aluno->Nome); //Saber o tamanho do Nome Completo que foi digitado.

	printf("\n\n O NOME COMPLETO INVERTIDO: "); //Imprimir o Nome Completo informado de traz para frente, invertido.	
		for (; tam >= 0; tam--) {
		printf("%c", P_aluno->Nome[tam]);

	}

	printf("\n\n");

	return 0;
}
