#include <stdio.h>

int main() {
    // Dados (População em Milhões, PIB em Trilhões, Território em Milhões de Km²)
    float popBr = 214.3, pibBr = 10.6, terBr = 8.51;
    float popEua = 336.0, pibEua = 29.1, terEua = 9.83;

    int c1, c2;
    float v1Br, v2Br, v1Eua, v2Eua;
    float somaBr, somaEua;

    printf("--- COMPARADOR DE SOMAS ---\n");
    printf("Características:\n1 - População\n2 - PIB\n3 - Extensão Territorial\n");
    
    printf("\nEscolha a 1ª característica: ");
    scanf("%d", &c1);
    printf("Escolha a 2ª característica: ");
    scanf("%d", &c2);

    // Atribuição dos valores do Brasil
    v1Br = (c1 == 1) ? popBr : (c1 == 2 ? pibBr : terBr);
    v2Br = (c2 == 1) ? popBr : (c2 == 2 ? pibBr : terBr);
    somaBr = v1Br + v2Br;

    // Atribuição dos valores dos EUA
    v1Eua = (c1 == 1) ? popEua : (c1 == 2 ? pibEua : terEua);
    v2Eua = (c2 == 1) ? popEua : (c2 == 2 ? pibEua : terEua);
    somaEua = v1Eua + v2Eua;

    // Exibição detalhada dos cálculos
    printf("\n#####################################\n");
    printf("CÁLCULO BRASIL:\n");
    printf("%.2f + %.2f = TOTAL: %.2f\n", v1Br, v2Br, somaBr);
    printf("#######################################\n");
    
    printf("\n######################################\n");
    printf("CÁLCULO EUA:\n");
    printf("%.2f + %.2f = TOTAL: %.2f\n", v1Eua, v2Eua, somaEua);
    printf("########################################\n");

    // Comparação final
    if (somaBr > somaEua) {
    printf("\n######################################\n");
        printf("RESULTADO: BRASIL VENCEU!\n");
    } else if (somaEua > somaBr) {
    printf("\n######################################\n");
        printf("RESULTADO: EUA VENCEU!\n");
    } else {
        printf("RESULTADO: EMPATE!\n");
    }
    printf("########################################\n");

    return 0;
}
