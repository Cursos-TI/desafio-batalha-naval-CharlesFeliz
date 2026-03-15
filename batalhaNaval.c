#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
	char linha[10]={'A','B','C','D','E','F','G','H','I','J'};
	// 1.Criando o Tabuleiro (Matriz 10x10)
	int tabuleiro[10][10];
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			tabuleiro[i][j] = 0;
			
		}
	}
	// 2. Criando Navio na Horizontal
 	int i,j;
 	i=3; // Escolha uma linha para iniciar para inserir o navio (0-9)
 	j=3; // Escolha uma coluna para iniciar para inserir o navio (0-6)	
	for(int n=0;n<3;n++){
		j=5+n;
		tabuleiro[i][j] = 3;		
	}
	// 3. Criando Navio na Vertical
 	i=3; // Escolha uma linha para iniciar para inserir o navio (0-9)
 	j=3; // Escolha uma coluna para iniciar para inserir o navio (0-6)	
	for(int n=0;n<3;n++){
		i=5+n;
		tabuleiro[i][j] = 3;		
	}
	
	// 4. Exibindo o Tabuleiro
	printf("\nTABULEIRO BATALHA NAVAL \n\n");
	printf("  ");
	for(int j=0; j<10; j++){
		printf("%2c",linha[j]);//Imprime os números das colunas
	}
	printf("\n");
	for(int i=0; i<10; i++){
		printf("%2d",i+1);
		for(int j=0; j<10; j++){
			printf("%2d", tabuleiro[i][j]);
	}
		printf("\n");
	}
    return 0;
}