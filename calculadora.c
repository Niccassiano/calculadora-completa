#include <stdio.h>

int main () {

    int opcao;

    printf("=========================\n");
    printf(" CALCULADORA COMPLETA\n");
    printf("=========================\n");


    printf("Escolha uma opcao:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Potencia\n");
    printf("6 - Raiz Quadrada\n");
    printf("7 - Sair\n");

    printf("Escolha: ");
    scanf("%d", &opcao);

    printf("A opcao escolhida foi: %d\n", opcao);






    return 0;

}