#include <stdio.h>

struct Carta {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
};

int main() {
    struct Carta carta1 = {"Brasil", 210000000, 8516000.0, 1.8e12, 30, 24.6};
    struct Carta carta2 = {"Argentina", 44000000, 2780000.0, 5.5e11, 25, 16.0};

    int opcao;

    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("%s tem %d habitantes.\n", carta1.nome, carta1.populacao);
            printf("%s tem %d habitantes.\n", carta2.nome, carta2.populacao);
            if (carta1.populacao > carta2.populacao) {
                printf("%s venceu!\n", carta1.nome);
            } else if (carta1.populacao < carta2.populacao) {
                printf("%s venceu!\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("%s tem %.2f km2 de area.\n", carta1.nome, carta1.area);
            printf("%s tem %.2f km2 de area.\n", carta2.nome, carta2.area);
            if (carta1.area > carta2.area) {
                printf("%s venceu!\n", carta1.nome);
            } else if (carta1.area < carta2.area) {
                printf("%s venceu!\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("%s tem PIB de %.2f trilhoes.\n", carta1.nome, carta1.pib / 1e12);
            printf("%s tem PIB de %.2f trilhoes.\n", carta2.nome, carta2.pib / 1e12);
            if (carta1.pib > carta2.pib) {
                printf("%s venceu!\n", carta1.nome);
            } else if (carta1.pib < carta2.pib) {
                printf("%s venceu!\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("%s tem %d pontos turisticos.\n", carta1.nome, carta1.pontosTuristicos);
            printf("%s tem %d pontos turisticos.\n", carta2.nome, carta2.pontosTuristicos);
            if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
                printf("%s venceu!\n", carta1.nome);
            } else if (carta1.pontosTuristicos < carta2.pontosTuristicos) {
                printf("%s venceu!\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("%s tem densidade demografica de %.2f.\n", carta1.nome, carta1.densidade);
            printf("%s tem densidade demografica de %.2f.\n", carta2.nome, carta2.densidade);
            // Para densidade demográfica, vence quem tem o menor valor
            if (carta1.densidade < carta2.densidade) {
                printf("%s venceu!\n", carta1.nome);
            } else if (carta1.densidade > carta2.densidade) {
                printf("%s venceu!\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Rode o programa novamente e escolha uma opcao valida.\n");
    }

    return 0;
}
