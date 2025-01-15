#include <stdio.h>

int main() {
    // Declaração de variáveis
    char cidades[4][50];
    int populacao[4];
    double pib[4], area[4];

    // Entrada de dados
    for (int i = 0; i < 4; i++) {
        printf("Digite o nome da cidade %d: ", i + 1);
        scanf(" %[^\n]", cidades[i]); // Lê a string, incluindo espaços
        printf("Digite a população da cidade %d: ", i + 1);
        scanf("%d", &populacao[i]);
        printf("Digite o PIB (em bilhões) da cidade %d: ", i + 1);
        scanf("%lf", &pib[i]);
        printf("Digite a área (em km²) da cidade %d: ", i + 1);
        scanf("%lf", &area[i]);
        printf("\n");
    }

    // Exibição dos dados
    printf("\n Informações das cidades:\n");
    printf("===============================================================\n");
    printf("%-20s %-15s %-15s %-10s\n", "Cidade", "População", "PIB (Bilhões)", "Área (km²)");
    printf("===============================================================\n");
    for (int i = 0; i < 4; i++) {
        printf("%-20s %-15d %-15.2lf %-10.2lf\n", cidades[i], populacao[i], pib[i], area[i]);
    }
    printf("===============================================================\n");

    return 0;
}
