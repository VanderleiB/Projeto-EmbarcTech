/*
01 - Elabore um programa para ler o preço de um produto e a quantidade comprada. 
Calcule o preço total a ser pago e informe o valor na tela.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

float calcular_preco_total(float p, float q) {
    return p * q;
}

int main() {

    system("cls");
    setlocale(LC_ALL, "pt-br");

    float p, q, t;

    printf("Digite o preço unitário do produto:\n");
    scanf("%f", &p);

    printf("Digite a quantidade comprada: \n");
    scanf("%f", &q);

    t = calcular_preco_total(p, q);

    printf("O preço total a ser pago é: R$ %.2f\n", t);
}
