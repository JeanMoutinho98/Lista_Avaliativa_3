#include <stdio.h>
#include <math.h>

int Calcular_Valor(double aporte, double taxa, int tempo){
    double valor_total; 
    

    for(int i = 1; i <= tempo; i++){
    valor_total = aporte * (1 + taxa) * ((pow((1 + taxa), i) - 1)/ taxa);    //Fórmula correta :)
    printf("Montante ao fim do mes %d: R$ %.2lf\n", i, valor_total);
    }   


    return valor_total;
}

int main(){
    double aporte, taxa;
    int tempo;
    

    scanf("%d", &tempo);
    scanf("%lf", &aporte);
    scanf("%lf", &taxa);


    double resultado = Calcular_Valor(aporte, taxa, tempo);


    return 0;
}