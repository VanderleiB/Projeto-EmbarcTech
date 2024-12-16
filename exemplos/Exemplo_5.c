/*
08 -Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto
(MG 7%; SP 12 %; RJ 15%; MS 8%). Faça um programa em que o usuário entre com o valor e o estado destino do produto. O programa
deve retornar o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o estado digitado não for v áli do, mostrar uma
mensagem de erro
*/

#include <stdio.h>
#include <locale.h>

float calcularPrecoFinal(char estado[3]) {
    float imposto;

    switch (estado[0]) {
        case 'M':
            if (estado[1] == 'G') {
                imposto = 0.07;
            }
            break;
        case 'S':
            if (estado[1] == 'P') {
                imposto = 0.12;
            } else if (estado[1] == 'M') {
                imposto = 0.08;
            }
            break;
        case 'R':
            if (estado[1] == 'J') {
                imposto = 0.15;
            }
            break;
        default:
            imposto = -1; // Indica estado inválido
    }

    if (imposto >= 0) {
        return imposto;
    } else {
        return -1;
    }
}

int main() {

    setlocale(LC_ALL, "pt-br");

    float valorProduto, precoFinal;
    char estado[3];

    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);

    printf("Digite o estado destino (MG, SP, RJ ou MS): ");
    scanf("%2s", estado); // Lê até 2 caracteres

    precoFinal = valorProduto * (1 + calcularPrecoFinal(estado));

    if (precoFinal >= 0) {
        printf("O pre�o final do produto no estado %s �: R$ %.2f\n", estado, precoFinal);
    } else {
        printf("Estado inv�lido ou ocorreu um erro no c�lculo.\n");
    }
}

