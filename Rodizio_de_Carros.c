#include <stdio.h>                                                  //Saídas ainda não estão válidas.
#include <stdlib.h>                                               
#include <ctype.h>                                                  

int Validar_Placa(char placa[]){
    int tamanho;

    //LLL-NNNN
    if(isalpha(placa[0]) && isalpha(placa[1]) && isalpha(placa[2]) && placa[3] == '-' && isdigit(placa[4]) && isdigit(placa[5]) && isdigit(placa[6]) && isdigit(placa[7]) ){
        printf("A placa %s esta no formato antigo(LLL-NNNN).\n", placa);
        tamanho = 7; 
    }
    //LLLNLNN
    else if(isalpha(placa[0]) && isalpha(placa[1]) && isalpha(placa[2]) && isdigit(placa[3]) && isalpha(placa[4]) && isdigit(placa[5]) && isdigit(placa[6])){
        printf("A placa %s esta no formato do MERCOSUL(LLLNLNN).\n", placa);
        tamanho = 6;
    }
    //Placa invalida
    else{
        printf("A placa %s nao eh valida.\n", placa);
    }


    return tamanho;
}


int Validar_Dia(char placa[], char dia[]){
    int tamanho = Validar_Placa(placa);


    if(strcmp(placa, "SEGUNDA-FEIRA") == 0 && placa[tamanho] == 0 || placa[tamanho] == 1){
        printf("Na %s eh proibida a circulacao de de veiculos com placas terminadas em 0 e 1\n", dia);
    }
    else if(strcmp(placa, "TERCA-FEIRA") == 0 && placa[tamanho] == 2 || placa[tamanho] == 3){
        printf("Na %s eh proibida a circulacao de de veiculos com placas terminadas em 2 e 3\n", dia);
    }
    else if(strcmp(placa, "QUARTA-FEIRA") == 0 && placa[tamanho] == 4 || placa[tamanho] == 5){
        printf("Na %s eh proibida a circulacao de de veiculos com placas terminadas em 4 e 5\n", dia);
    }
    else if(strcmp(placa, "QUINTA-FEIRA") == 0 && placa[tamanho] == 6 || placa[tamanho] == 7){
        printf("Na %s eh proibida a circulacao de de veiculos com placas terminadas em 6 e 7\n", dia);
    }
    else if(strcmp(placa, "SEXTA-FEIRA") == 0 && placa[tamanho] == 8 || placa[tamanho] == 9){
        printf("Na %s eh proibida a circulacao de de veiculos com placas terminadas em 8 e 9\n", dia);
    }
    else if(strcmp(placa, "SABADO") == 0 || strcmp(placa, "DOMINGO") == 0){
        printf("No final de semana, nao ha proibicao\n");
    }
    else{
        printf("A placa %s pode circular na %s\n", placa, dia);
    }


    return 0;
}


int main(){
    char placa[20];
    char dia[20];

    
    printf("Insira a placa do carro: ");
    fgets(placa, 20, stdin);


    printf("Insira o dia da semana: ");
    fgets(dia, 20, stdin);


    printf("A placa inserida foi: %s.\n", placa);
    printf("O dia inserido foi: %s.\n", dia);


    Validar_Placa(placa);
    Validar_Dia(placa, dia);


    return 0;
}