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


}
