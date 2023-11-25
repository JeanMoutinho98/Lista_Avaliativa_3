#include <stdio.h>
#include <string.h>

int valor_romano(char r){


    if (r == 'I') return 1;
    if (r == 'V') return 5;
    if (r == 'X') return 10;
    if (r == 'L') return 50;
    if (r == 'C') return 100;
    if (r == 'D') return 500;
    if (r == 'M') return 1000;


    return 0;
}


int Romano_Para_Decimal(char romano[]){
    int resultado_decimal = 0;


    for (int i = 0; i < strlen(romano); i++){
        int s1 = valor_romano(romano[i]);

        if (i + 1 < strlen(romano)){
            int s2 = valor_romano(romano[i + 1]);

            if (s1 >= s2){
                resultado_decimal += s1;
            } else{
                resultado_decimal = resultado_decimal - s1 + s2;
                i++;
            }
        } 
        else{
            resultado_decimal += s1;
        }
    }


    return resultado_decimal;
}


int Decimal_Para_Binario(char num_romano[]){
    int resultado_decimal = Romano_Para_Decimal(num_romano);
    int num_binario[32];
    int i = 0;


    while (resultado_decimal > 0){
        num_binario[i] = resultado_decimal % 2;
        resultado_decimal = resultado_decimal / 2;
        i++;
    }


    printf("%s na base 2: ", num_romano);
    for (int j = i - 1; j >= 0; j--){
        printf("%d", num_binario[j]);
    }
    printf("\n");
}


void Decimal_Para_Hexadecimal(char num_romano[]){
    int resultado_decimal = Romano_Para_Decimal(num_romano);
    int i = 1, j, resto;
    char num_hexadecimal[100];


    while (resultado_decimal != 0){
        resto = resultado_decimal % 16;
        if (resto < 10){
            resto = resto + 48;
        } 
        else{
            resto = resto + 87;                                     // ASCii apenas e somente
        }
        num_hexadecimal[i++] = resto;
        resultado_decimal = resultado_decimal / 16;
    }


    printf("%s na base 16: ", num_romano);
    for (j = i - 1; j > 0; j--) {
        printf("%c", num_hexadecimal[j]);
    }
    printf("\n");
}


int main(){
    char num_romano[20];


    scanf("%s", num_romano);                                        //scanf funciona melhor do que fgets(num_romano, sizeof(num_romano), stdin); + strtok(time1, "\n");


    Decimal_Para_Binario(num_romano);
    printf("%s na base 10: %d\n", num_romano, Romano_Para_Decimal(num_romano));
    Decimal_Para_Hexadecimal(num_romano);


    return 0;
}