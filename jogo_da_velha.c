#include <stdio.h>
#include <stdlib.h>

int main(){ 

	char jogo[3][3];
	
	int linha, coluna;
	
	int jogador, ganhador = 0;
	
	int i, j;
	
	int erro;
    
    	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			jogo[i][j] = ' ';
		}
	}
	
	while(!ganhador){
		
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
			
			
			do{
			
				printf("Vez: X\n\n");
				
				printf("Digite a linha: ");
				scanf("%d", &linha);
				
				linha--;
				
				printf("Digite a coluna: ");
				scanf("%d", &coluna);
				
				coluna--;
				
				if(jogo[linha][coluna] == ' '){
					jogo[linha][coluna] = 'X';
					erro = 0;
			    }else{
			    	printf("\nCasa ocupada.\n");
			    	erro = 1;
				}
			
			}while(erro);
			
			jogador = 0;
			
		}else{
			
			do{
			
				printf("Vez: O\n\n");
				
				printf("Digite a linha: ");
				scanf("%d", &linha);
				
				linha--;
				
				printf("Digite a coluna: ");
				scanf("%d", &coluna);
				
				coluna--;
				
				if(jogo[linha][coluna] == ' '){
					jogo[linha][coluna] = 'O';
					erro = 0;
			    }else{
			    	printf("\nCasa ocupada.\n");
			    	erro = 1;
				}
			
			}while(erro);
			
			jogador = 1;
			
		}
		
		if(linha == 0){
		
			if((jogo[0][0]==jogo[0][1]) && (jogo[0][1]==jogo[0][2])){
				ganhador = 1;
			}
			
		}else if(linha == 1){
			
			if((jogo[1][0]==jogo[1][1]) && (jogo[1][1]==jogo[1][2])){
				ganhador = 1;
			}
			
		}else{
			
			if((jogo[2][0] == jogo[2][1]) && (jogo[2][1] == jogo[2][2])){
				ganhador = 1;
			}
			
		}
		
		if(coluna == 0){
		
			if((jogo[0][0]==jogo[1][0]) && (jogo[1][0]==jogo[2][0])){
				ganhador = 1;
			}
			
		}else if(coluna == 1){
			
			if((jogo[0][1]==jogo[1][1]) && (jogo[1][1]==jogo[2][1])){
				ganhador = 1;
			}
			
		}else{
			
			if((jogo[0][2]==jogo[1][2]) && (jogo[1][2]==jogo[2][2])){
				ganhador = 1;
			}
			
		}
		
		if(((linha == 0)&&(coluna == 0))||((linha == 1)&&(coluna == 1))||((linha == 2)&&(coluna == 2))){
			if((jogo[0][0]==jogo[1][1]) && (jogo[0][0]==jogo[2][2])){
				ganhador = 1;
			}
		}
		
		if(((linha == 0)&&(coluna == 2))||((linha == 1)&&(coluna == 1))||((linha == 2)&&(coluna == 0))){
			if((jogo[0][2]==jogo[1][1]) && (jogo[0][2]==jogo[2][0])){
				ganhador = 1;
			}
		}
	
	}
	
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
	
	printf("Fim de jogo\n\n");
	
	system("pause");

	return 0;

} 
