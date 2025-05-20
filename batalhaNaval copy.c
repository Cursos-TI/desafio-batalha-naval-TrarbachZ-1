#include <stdio.h>

int main(){

    int i;
    char linha[10]={'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro[10][10]={0};
    int sobrepoe = 1;


// adicionando horizontalmente #######

int linHorizontal = 4;          //linha inde estará o navio
int colHorizontalInicial = 2;   //primeira casa do navio

if (colHorizontalInicial >= 8){
    printf("O navio horizontal não cabe na linha\n");
} else {

    for (i = colHorizontalInicial; i <= (colHorizontalInicial) + 2; i++){
        if (tabuleiro[linHorizontal][i] != 0){
            sobrepoe = 0;
            break;
        }
    }    
}

if (sobrepoe){
    for (i = colHorizontalInicial; i <= (colHorizontalInicial) + 2; i++){
    tabuleiro[linHorizontal][i] = 3;
    }
} else {
    printf("O navio horizontal sobrepõe outro!\n");
    sobrepoe = 1;
}



// adicionando verticalmente #######

int colVertical = 0;          //coluna onde estará o navio
int linVerticalInicial = 0;   //primeira casa do navio

if (linVerticalInicial >= 8){
    printf("O navio vertical não cabe na coluna!");
} else {
    for (i = linVerticalInicial; i <= (linVerticalInicial + 2); i++){
    if (tabuleiro[i][colVertical] != 0){
            sobrepoe = 0;
            break;
    }    
}
}

if (sobrepoe)
{
    for (i = linVerticalInicial; i <= (linVerticalInicial + 2); i++){
    tabuleiro[i][colVertical] = 3;
    }
} else {
    printf("O navio vertical sobrepõe outro navio!\n");
    sobrepoe = 1;
}

// adicionando diagonal #######
int linInicialDiagonal = 0;         //primera linha diagonal, de cima para baixo
int colInicialDiagonal = 2;         //primeira coluna diagonal, da esquerda para a direita

if (linInicialDiagonal >= 8 || colInicialDiagonal >= 8){
    printf("O navio da diagonal não cabe!\n");
} else {
    for (i = 0; i < 3; i++){
        if (tabuleiro[linInicialDiagonal + i][colInicialDiagonal + i] != 0){
            sobrepoe = 0;
            break;
        }
    }

if (sobrepoe)
{
    for (i = 0; i < 3; i++){
    tabuleiro[linInicialDiagonal + i][colInicialDiagonal + i] = 3;
    }
} else {
    printf("O navio da diagonal soprepõe outro navio!\n");
    sobrepoe = 1;
    }
}


// adicionando diagonal inversa #######
int colInicialDiagonalInv = 2;       //primeira coluna diagonal, da direita para a esquerda
int linInicialDiagonalInv = 2;       //primeira casa diagonal, de cima pra baixo

if (colInicialDiagonalInv <= 1 || linInicialDiagonalInv >= 8){
    printf("O navio da diagonal inversa não cabe!\n");
} else {
    for (i = 0; i < 3; i++){
    if (tabuleiro[linInicialDiagonalInv + i][colInicialDiagonalInv - i] != 0){
            sobrepoe = 0;
            break;
        }
    }
}

if (sobrepoe)
{
    for (i = 0; i < 3; i++){
    tabuleiro[linInicialDiagonalInv + i][colInicialDiagonalInv - i] = 3;
    }
} else {
    printf("O navio da diagonal inversa sobrepõe outro navio\n");
    sobrepoe = 1;
}


//cabeçalho de letras #######
printf("   ");
for (i=0; i<10; i++){
    printf("%c ", linha[i]);
}
printf("\n");

//numeros e o tabuleiro #######
 for (int i = 0; i < 10; i++) {
        printf("%02d ", (i + 1));
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }



}
