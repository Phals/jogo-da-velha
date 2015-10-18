#include <stdio.h>
#include <stdio.h>

int main(){ 

	char jogo[3][3];
	
	int linha, coluna;
	
	int jogador;
	
	int i, j;
    
    for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			jogo[i][j] = ' ';
		}
	}
	
	while(1){
		
		system("cls");
		
		printf("\n");
		printf("\t\t    1      2      3   \n");
		printf("\t\t       |       |       \n");
		printf("\t\t1  %c   |   %c   |   %c \n",jogo[0][0],jogo[0][1],jogo[0][2]);
		printf("\t\t       |       |       \n ");
		printf("\t\t-------|-------|------- \n ");
		printf("\t\t       |       |       \n");
		printf("\t\t2  %c   |   %c   |   %c   \n",jogo[1][0],jogo[1][1],jogo[1][2]);
		printf("\t\t       |       |       \n ");
		printf("\t\t-------|-------|------- \n ");
		printf("\t\t       |       |       \n");
		printf("\t\t3  %c   |   %c   |   %c \n",jogo[2][0],jogo[2][1],jogo[2][2]);
		printf("\t\t       |       |       \n");
		printf("\n\n\n");
		
		if(jogador){
			
			printf("Vez: X\n\n");
			
			printf("Digite a linha: ");
			scanf("%d", &linha);
			
			printf("Digite a coluna: ");
			scanf("%d", &coluna);
			
			jogo[linha-1][coluna-1] = 'X';
			
			jogador = 0;
			
		}else{
			
			printf("Vez: O\n\n");
			
			printf("Digite a linha: ");
			scanf("%d", &linha);
			
			printf("Digite a coluna: ");
			scanf("%d", &coluna);
			
			jogo[linha-1][coluna-1] = 'O';
			
			jogador = 1;
			
		}
	
	}

	return 0;

} 
