#include <stdio.h>
#include <stdlib.h>

int main(){

	char jogo[3][3];

	int linha, coluna;

	int jogador, ganhador = 0;

    	char nome_jogador_1[20], nome_jogador_2[20];

	int i, j;

	int erro;

    	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			jogo[i][j] = ' ';
		}
	}

	//Tela de boas vinda

	printf("\n===============================================================================\n");
	printf("\t\t\tSeja Bem-Vindo - JOGO DA VELHA ");
	printf("\n===============================================================================\n");
	
	//Informacoes dos jogadores
	
	printf("\nEntre com o nome do primeiro jogador >> ");
	scanf("%s", nome_jogador_1);
	printf("%s voce ficara com o X\n\n");
	
	printf("Entre com o nome do segundo jogador >> ");
	scanf("%s", nome_jogador_2);
	printf("%s voce ficara com o O");

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

        do{

            if(jogador){

                printf("Vez do %s (X)\n\n", nome_jogador_1);

            }else{

                printf("Vez do %s (O)\n\n", nome_jogador_2);

            }

            printf("Digite a linha: ");
            scanf("%d", &linha);

            linha--;

            printf("Digite a coluna: ");
            scanf("%d", &coluna);

            coluna--;

            if(jogo[linha][coluna] == ' '){

                if(jogador){
                    jogo[linha][coluna] = 'X';
                    jogador = 0;
                }else{
                    jogo[linha][coluna] = 'O';
                    jogador = 1;
                }

                erro = 0;

            }else{

                printf("\nCasa ocupada.\n");
                erro = 1;

            }

        }while(erro);

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

	return 0;

}
