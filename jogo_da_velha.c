#include <stdio.h>
#include <stdlib.h>

char jogo[3][3];

char nome_jogador_1[20], nome_jogador_0[20];

int m, n;

void iniciar_jogo(){

    system("cls");

    printf("\n===============================================================================\n");
    printf("\t\t\tSeja Bem-Vindo - JOGO DA VELHA ");
    printf("\n===============================================================================\n");

    for(m=0; m<3; m++) {
        for(n=0; n<3; n++) {
            jogo[m][n] = ' ';
        }
    }

    printf("\nEntre com o nome do primeiro jogador >> ");
    scanf("%s", nome_jogador_1);
    printf("%s voce ficara com o X\n\n");

    printf("Entre com o nome do segundo jogador >> ");
    scanf("%s", nome_jogador_0);
    printf("%s voce ficara com o O");

}

void exibir_tabuleiro(){

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

}

int testa_ganhador(linha, coluna){

    int ganhador = 0;

    if( !ganhador && (jogo[linha][0]==jogo[linha][1]) && (jogo[linha][1]==jogo[linha][2]) ){
        ganhador = 1;
    }

    if( !ganhador && (jogo[0][coluna]==jogo[1][coluna]) && (jogo[1][coluna]==jogo[2][coluna]) ){
        ganhador = 1;
    }

    if(  !ganhador && ((linha == 0)&&(coluna == 0)) || ((linha == 1)&&(coluna == 1)) || ((linha == 2)&&(coluna == 2)) ){
        if((jogo[0][0]==jogo[1][1]) && (jogo[0][0]==jogo[2][2])){
            ganhador = 1;
        }
    }

    if( !ganhador && ((linha == 0)&&(coluna == 2)) || ((linha == 1)&&(coluna == 1)) || ((linha == 2)&&(coluna == 0)) ){
        if((jogo[0][2]==jogo[1][1]) && (jogo[0][2]==jogo[2][0])){
            ganhador = 1;
        }
    }

    return ganhador;

}

int finalizar_jogo(){

    int ops;

    printf("Jogar novamente: (0) Nao ou (1) Sim -> ");

    scanf("%d", &ops);

    return ops;

}

int main(){

	int linha, coluna;

	int jogador = 1;

    int velha;

	int erro;

    do{

        iniciar_jogo();

        velha = 0;

        do{

            exibir_tabuleiro();

            do{

                if(jogador){

                    printf("Vez do %s (X)\n\n", nome_jogador_1);

                }else{

                    printf("Vez do %s (O)\n\n", nome_jogador_0);

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

            velha++;

        }while(!testa_ganhador(linha, coluna) && velha != 9);

        exibir_tabuleiro();

        if(velha == 9){

            printf("Deu velha - O jogo terminou em empate!\n\n");

        }else{

            if(jogador){
                printf("Parabens %s voce ganhou!\n\n", nome_jogador_0);
            }else{
                printf("Parabens %s voce ganhou!\n\n", nome_jogador_1);
            }

        }

    }while(finalizar_jogo());

    system("cls");

	printf("Fim de jogo\n\n");

	return 0;

}
