#include <stdio.h>
#include <stdlib.h>

int main(){
    char placa[10];
    char dia[20];
    int tamanho_placa = strlen(placa);
    int tamanho_dia = strlen(dia);
    int ultimo_caracter_placa = tamanho_placa - 1;
    int ultimo_caracter_dia = tamanho_dia - 1;


    printf("Insira uma placa de carro(Formato Antigo ou formato Mercosul):");
    scanf("%s", placa);
  

    printf("Insira um dia da semana:");
    scanf("%s", dia);


    printf("A placa inserida foi %s.\n", placa);
    printf("O dia inserido foi %s.\n", dia);


    printf("O tamanho da string 'placa eh: %d\n", strlen(placa));
    printf("O tamanho da string 'placa eh: %d\n", strlen(dia));


    printf("O ultimo caracter da placa eh '%c'.\n", placa[ultimo_caracter_placa]);
    printf("O ultimo caracter do dia eh '%c'.\n", dia[ultimo_caracter_dia]);


    return 0;
}