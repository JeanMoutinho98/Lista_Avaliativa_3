#include <stdio.h>
#include <math.h>

int Calcular_Valor(double aporte, double taxa, int tempo){
    double valor_total; 
    

    taxa = taxa / 100;


    for(int i = 1; i <= tempo; i++){
    valor_total = aporte * (1 + taxa) * ((pow((1 + taxa), i) - 1)/ taxa);    //Fórmula correta :)
    printf("Valor do montante ao fim do mes %d: R$ %.2lf\n", i, valor_total);
    }   


    return valor_total;
}

int main(){
    double aporte, taxa;
    int tempo;
    

    printf("Por favor, insira o tempo(em meses) investindo: ");
    scanf("%d", &tempo);
    printf("Por favor, insira o aporte mensal: ");
    scanf("%lf", &aporte);
    printf("Por favor, insira a taxa mensal(em %%): ");
    scanf("%lf", &taxa);


    double resultado = Calcular_Valor(aporte, taxa, tempo);


    return 0;
}