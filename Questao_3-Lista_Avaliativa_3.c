#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

    int Validar_Placa(char placa[]){
        int tamanho;

        //LLL-NNNN
        if(isalpha(placa[0]) && isalpha(placa[1]) && isalpha(placa[2]) && placa[3] == '-' && isdigit(placa[4]) && isdigit(placa[5]) && isdigit(placa[6]) && isdigit(placa[7])){
            tamanho = 7; 
        }
        //LLLNLNN
        else if(isalpha(placa[0]) && isalpha(placa[1]) && isalpha(placa[2]) && isdigit(placa[3]) && isalpha(placa[4]) && isdigit(placa[5]) && isdigit(placa[6])){
            tamanho = 6;
        }
        //Placa invalida
        else{
            printf("Placa invalida\n");
        }


        return tamanho;
    }


    int Validar_Dia(char placa[], char dia[]){
        int tamanho = Validar_Placa(placa);


        if(strcmp(dia, "SEGUNDA-FEIRA") == 0 && (placa[tamanho] == '0' || placa[tamanho] == '1')){
            printf("%s nao pode circular segunda-feira\n", placa);
        }
            else if(strcmp(dia, "SEGUNDA-FEIRA") == 0 && (placa[tamanho] != '0' || placa[tamanho] != '1')){
                printf("%s pode circular segunda-feira\n", placa);
        }
        else if(strcmp(dia, "TERCA-FEIRA") == 0 && (placa[tamanho] == '2' || placa[tamanho] == '3')){
            printf("A placa %s nao pode circular terca-feira\n", placa);
        }
           else if(strcmp(dia, "TERCA-FEIRA") == 0 && (placa[tamanho] != '2' || placa[tamanho] != '3')){
                printf("%s pode circular terca-feira\n", placa);
        }
        else if(strcmp(dia, "QUARTA-FEIRA") == 0 && (placa[tamanho] == '4' || placa[tamanho] == '5')){
            printf("A placa %s nao pode circular quarta-feira\n", placa);
        }
                else if(strcmp(dia, "QUARTA-FEIRA") == 0 && (placa[tamanho] != '4' || placa[tamanho] != '5')){
                    printf("%s pode circular quarta-feira\n", placa);
        }
        else if(strcmp(dia, "QUINTA-FEIRA") == 0 && (placa[tamanho] == '6' || placa[tamanho] == '7')){
            printf("A placa %s nao pode circular quinta-feira\n", placa);
        }
                else if(strcmp(dia, "QUINTA-FEIRA") == 0 && (placa[tamanho] != '6' || placa[tamanho] != '7')){
                    printf("%s pode circular quinta-feira\n", placa);
        }
        else if(strcmp(dia, "SEXTA-FEIRA") == 0 && (placa[tamanho] == '8' || placa[tamanho] == '9')){
            printf("A placa %s nao pode circular sexta-feira\n", placa);
        }
                else if(strcmp(dia, "SEXTA-FEIRA") == 0 && (placa[tamanho] != '8' || placa[tamanho] != '9')){
                    printf("%s pode circular sexta-feira\n", placa);
        }
        else if(strcmp(dia, "SABADO") == 0 || strcmp(dia, "DOMINGO") == 0){
            printf("Nao ha proibicao no fim de semana\n");
        }
        else if(strcmp( dia, "DOMINGO") != 0 || strcmp(dia, "SEGUNDA-FEIRA") != 0 || strcmp(dia, "TERCA-FEIRA") != 0 || strcmp(dia, "QUARTA-FEIRA") != 0 || strcmp(dia, "QUINTA-FEIRA") != 0 || strcmp(dia, "SEXTA-FEIRA") != 0 || strcmp(dia, "SABADO") != 0 ){
            printf("Dia da semana invalido\n");
        }
        else{
        }


        return 0;
    }


    int main(){
        char placa[20];
        char dia[20];


        fgets(placa, sizeof(placa), stdin);
        strtok(placa, "\n");


        fgets(dia, sizeof(dia), stdin);
        strtok(dia, "\n");


        Validar_Dia(placa, dia);


        return 0;
    }