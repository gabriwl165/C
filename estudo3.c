#include <math.h>
#include <stdbool.h>
#include <stdio.h>

void calc(float lado);
void calc_hexa(float lado, float *area, float *perimetro);
bool lado_positivo(float lado);

void main(){

    float lado;
    printf("Digite o valor do Lado:\n");
    scanf("%f", &lado);
    while (lado_positivo(lado)){
        calc(lado);
        printf("Digite o valor do Lado:\n");
        scanf("%f", &lado);
    }

}

bool lado_positivo(float lado){

    if (lado > 0){
        return true; // Positivo
    } else {
        return false; // Negativo
    }    

}

void calc(float lado){

    float area = (3*(lado*lado)*pow(3, 2))/2;
    float perimetro = 6*lado;

    calc_hexa(lado, &area, &perimetro);

}

void calc_hexa(float lado, float *area, float *perimetro){
    
    printf("Valor do Lado: %f \nValor da Área: %f\nValor do Perímetro: %f\n", lado, *area, *perimetro);

}