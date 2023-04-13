//Declaração das bibliotecas básicas.
#include <stdlib.h> 
#include <stdio.h>
#include <locale.h>
#include <math.h>

void calc_hexa(float l, float* area, float* perimetro); //Função para cal-cular a area e o perímetro do poligono.

int main() { //Função main principal
	float lado = 0; // O programa vai executar eternamente, enquanto não for digitado um numero negativo.
	float area_hexagono, perimetro_hexagono;
	setlocale(LC_ALL, "Portuguese"); // Os caracteres sejam em português.
	while (lado >= 0) { //Comando do Enquanto para que rode até que seja maior ou igual a zero.
		printf("Digite o valor do lado:"); //Solicitação do valor do lado do polígono.
		scanf_s("%f", &lado);
		if (lado < 0) { //Comando para que quando seja um número nega-tivo, ele termine o programa.
			exit(1);
		}
		calc_hexa(lado, &area_hexagono, &perimetro_hexagono); //Chamar a função e calcular suas medidas conforme suas formulas.

		printf("\n\nA ÁREA DO HEXAGONO É %f E O PERÍMETRO DO HEXAGONO É %f.\n\n", area_hexagono, perimetro_hexagono); //Imprimir os resultados da área e do perímetro obtidos.

	}

	return 0;
}

void calc_hexa(float l, float* area, float* perimetro) { //Formulas para calcular a área e o perímetro de um hexagono.
	*area = (3 * pow(l, 2) * sqrt(3)) / 2;
	*perimetro = 6 * l;
}
