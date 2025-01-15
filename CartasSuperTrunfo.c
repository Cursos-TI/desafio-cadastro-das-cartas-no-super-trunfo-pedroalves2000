#include <stdio.h>

int main() {
    // Declaração de variáveis
    char cidades[4][50];
    int populacao[4];
    float area[4], pib[4];

    // Coleta de informações das cidades
    for (int i = 0; i < 4; i++) {
        printf("Digite o nome da cidade %d: ", i + 1);
        scanf(" %[^"]s", cidades[i]); // Lê o nome da cidade com espaços

        printf("Digite a população de %s: ", cidades[i]);
        scanf("%d", &populacao[i]);

        printf("Digite a área de %s (em km²): ", cidades[i]);
        scanf("%f", &area[i]);

        printf("Digite o PIB de %s (em bilhões): ", cidades[i]);
        scanf("%f", &pib[i]);

        printf("\n");
    }

    // Exibição das informações coletadas
    printf("\nInformações das Cidades:\n");
    printf("--------------------------------\n");

    for (int i = 0; i < 4; i++) {
        printf("Cidade: %s\n", cidades[i]);
        printf("População: %d\n", populacao[i]);
        printf("Área: %.2f km²\n", area[i]);
        printf("PIB: %.2f bilhões\n", pib[i]);
        printf("--------------------------------\n");
    }

    return 0;
}
