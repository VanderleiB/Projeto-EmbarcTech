// Inverte um número digitado pelo usuário

#include <stdio.h>
#include <locale.h>

int inverterNumero(int numero) {
    int invertido = 0, resto;

    while (numero != 0) {
        resto = numero % 10;
        invertido = invertido * 10 + resto;
        numero /= 10;
    }
    return invertido;
}

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    int numero, numeroInvertido;

    printf("Digite um número de três digitos: ");
    scanf("%d", &numero);

    if (numero >= 100 && numero <= 999) {
        numeroInvertido = inverterNumero(numero);
        printf("O número invertido é: %d\n", numeroInvertido);
    } else {
        printf("Número inválido. Digite um número entre 100 e 999.\n");
    }

}