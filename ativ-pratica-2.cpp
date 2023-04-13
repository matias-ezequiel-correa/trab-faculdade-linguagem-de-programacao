//Declaração das bibliotecas básicas.
#include <stdlib.h> 
#include <stdio.h>
#include <locale.h>>

int main() { //Função main principal.
	int RU[7]; //Criação do vetor com a quantidade de dígitos do RU
	int cont, numMaior = 0, numMenor = 0; //Criação das variaveis maior, menor e o contador.        

	setlocale(LC_ALL, "Portuguese"); // Os caracteres sejam em português.

	printf("Digite o seu RU, de acordo com o que é indicado!!\n"); //Imprimir mensagem para digi-tar o RU.
	
	for (cont = 0; cont < 7; cont++) {
		printf("\n Digite o %d digito do RU:", cont + 1); //Recebendo cada digito do RU
		scanf_s("%d", &RU[cont]); //Lendo o digito
	}
	//Verificação qual número é o maior e o menor.
	for (cont = 0; cont < 7; cont++) { 
		if (cont == 0) {
			numMaior = RU[cont];
			numMenor = RU[cont];
			cont++;
		}
		else if (RU[cont] > numMaior) {
			numMaior = RU[cont];
		}
		else if (RU[cont] < numMenor) {
			numMenor = RU[cont];
		}
	}
	printf("\n\n Maior numero:%d \n Menor numero: %d", numMaior, numMenor); //Imprimir o maior e o menor número na tela.

}
