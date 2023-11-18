#include <stdio.h>
#include <math.h>

int Calcular_Valor(double aporte, double taxa, int tempo){
    double valor_total; 
    

    for(int i = 1; i <= tempo; i++){
    valor_total = aporte * (1 + taxa) * ((pow((1 + taxa), i) - 1)/ taxa);    //Fórmula correta :)
    printf("Valor do montante ao fim do mes %d: %.2lf\n", i, valor_total);
    }   


    return valor_total;
}

int main(){
    double aporte, taxa;
    int tempo;
    

    printf("Por favor, insira o tempo(em meses) investindo: \n");
    scanf("%d", &tempo);
    printf("Por favor, insira o aporte mensal: \n");
    scanf("%lf", &aporte);
    printf("Por favor, insira a taxa mensal: \n");
    scanf("%lf", &taxa);


    double resultado = Calcular_Valor(aporte, taxa, tempo);


    return 0;
}