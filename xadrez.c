#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

	// Movimentação da torre 5 casas à direita, usando while.
	
	int torre = 1;
	
	printf("Movimento da torre:\n");
	while(torre <= 5)
	{
		printf("Direita\n", torre);
		torre ++;
	}
	
	// Movimentação do bispo 5 casas à diagonal direita, usando do while.
	
	int bispo = 1;
	
	printf("\nMovimento do bispo:\n");
	do{
		printf("Cima, direita\n", bispo);
		bispo ++;
	} while(bispo <= 5);
	
	// Movimentação da rainha 8 casas à esquerda, usando For.
	
	printf("\nMovimento da rainha:\n");
	for(int rainha = 1; rainha <= 8; rainha ++){
		printf("Esquerda\n");
	}
	
	


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
