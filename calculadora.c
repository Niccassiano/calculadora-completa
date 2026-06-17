#include <stdio.h>
#include <math.h>

// funcoes

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
        resultado = 0; // retorna 0 ou algum valor de erro
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

    // printf("A opcao escolhida foi: %d\n", opcao);

    // switch

    switch (opcao){
    case 1: {
        printf("Voce escolheu a opcao 1 - Soma\n");

        float n1, n2;
        printf("Digite o primeiro numero:\n");
        scanf("%f", &n1);

        printf("Digite o segundo numero\n");
        scanf("%f", &n2);

        float resultado = soma(n1, n2);
        printf("O resultado da soma e: %.2f\n", resultado);
        break;
    }
        
    case 2: {
        printf("Voce escolheu a opcao 2 - Subtracao\n");

        float n1, n2;
        printf("Digite o primeiro numero:\n");
        scanf("%f", &n1);

        printf("Digite o segundo numero\n");
        scanf("%f", &n2);

        float resultado = subtracao(n1, n2);
        printf("O resultado da subtracao e: %.2f\n", resultado);
        break;
    }

    case 3: {
        printf("Voce escolheu a opcao 3 - Multiplicacao\n");

        float n1, n2;
        printf("Digite o primeiro numero:\n");
        scanf("%f", &n1);

        printf("Digite o segundo numero\n");
        scanf("%f", &n2);

        float resultado = multiplicacao(n1, n2);
        printf("O resultado da multiplicacao e: %.2f\n", resultado);
        break;
    }
        
    case 4: {
        printf("Voce escolheu a opcao 4 - Divisao\n");

        float n1,n2;
        printf("Digite o primeiro numero:\n");
        scanf("%f", &n1);

        printf("Digite o segundo numero\n");
        scanf("%f", &n2);

        float resultado = divisao(n1, n2);
        if (n2 != 0) {
            printf("O resultado da divisao e: %.2f\n", resultado);
        }  
        break;
    }
       
    case 5: {
        printf("Voce escolheu a opcao 5 - Potencia\n");

        float base, expoente;
        printf("Digite a base:\n");
        scanf("%f", &base);

        printf("Digite o expoente:\n");
        scanf("%f", &expoente);

        float resultado = potencia(base, expoente);
        printf("O resultado da potencia e: %.2f\n", resultado);
        break;
    }
        
    case 6: {
        printf("Voce escolheu a opcao 6 - Raiz Quadrada\n");

        float numero;
        printf("Digite o numero:\n");
        scanf("%f", &numero);

        if (numero >= 0) {
            float resultado = raiz(numero);
            printf("O resultado da raiz quadrada e: %.2f\n", resultado);
        } else {
            printf("Erro: Raiz quadrada de numero negativo nao e permitida.\n");
        }
        break;
    }
         
    case 7: {
        printf("Voce escolheu a opcao 7 - Sair\n");
        break;
    }
        
    default: {
        printf("Opcao invalida. Por favor, escolha uma opcao entre 1 e 7.\n");
        break;
    }
}

    return 0;

}