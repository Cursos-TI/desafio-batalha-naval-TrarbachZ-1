#include <stdio.h>

int main(){

    int i;
    char linha[10]={'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro[10][10]={0};


// adicionando verticalmente #######
for (i = 4; i <= 6; i++)
{
    tabuleiro[7][i] = 3;
}

// adicionando horizontalmente #######
for (i = 2; i <= 4; i++)
{
    tabuleiro[i][1] = 3;
}

// adicionando diagonal #######
int linInicial = 2;
int colInicial = 6;

for (i = 0; i < 3; i++)
{
    tabuleiro[linInicial + i][colInicial + i] = 3;
}

// adicionando diagonal inversa #######
int linInicialInv = 7; 
int colInicialInv = 2; 

for (i = 0; i < 3; i++)
{
    tabuleiro[linInicialInv + i][colInicialInv - i] = 3;
}




//cabeçalho de letras #############
printf("   ");

for (i=0; i<10; i++)
{
    printf("%c ", linha[i]);
}
printf("\n");



//numeros e o tabuleiro ############
 for (int i = 0; i < 10; i++) {
        printf("%02d ", (i + 1));
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

proximo codigo por favor verificar se o navio cabe

}
