// Inverte um n�mero digitado pelo usu�rio

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

    printf("Digite um n�mero de tr�s digitos: ");
    scanf("%d", &numero);

    if (numero >= 100 && numero <= 999) {
        numeroInvertido = inverterNumero(numero);
        printf("O n�mero invertido �: %d\n", numeroInvertido);
    } else {
        printf("N�mero inv�lido. Digite um n�mero entre 100 e 999.\n");
    }

}