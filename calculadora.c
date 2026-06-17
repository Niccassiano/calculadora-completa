#include <stdio.h>
#include <math.h>

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

float soma(float a, float b){
    
    float resultado;
    resultado = a + b;

    return resultado;
}

float subtracao(float a, float b){
    
    float resultado;
    resultado = a - b;

    return resultado;
}

float multiplicacao(float a, float b){
    
    float resultado;
    resultado = a * b;

    return resultado;
}

float divisao(float a, float b){
    
    float resultado;
    if (b != 0) {
        resultado = a / b;
    }
    else {
        printf("Erro: Divisao por zero nao e permitida.\n");
        resultado = 0; // Retorna 0 ou algum valor de erro
    }

    return resultado;
    
}

float potencia(float base, float expoente){
    
    float resultado;
    resultado = pow(base, expoente);

    return resultado;
}

float raiz(float numero){
    
    float resultado;
    resultado = sqrt(numero);

    return resultado;
}