#include <stdio.h>

typedef struct {
    char nome[100];
    char estado[50];
    int codigo;
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_pop;
    float pib_per_capita;
    float super_poder;
} Carta;

void lerCarta(Carta *c) {
    getchar(); // limpa o buffer
    printf("Nome do país: ");
    fgets(c->nome, 100, stdin);

    printf("Estado: ");
    fgets(c->estado, 50, stdin);

    printf("Código: ");
    scanf("%d", &c->codigo);

    printf("População: ");
    scanf("%lu", &c->populacao);

    printf("Área (km²): ");
    scanf("%f", &c->area);

    printf("PIB (em bilhões): ");
    scanf("%f", &c->pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &c->pontos_turisticos);
}

void calcularAtributos(Carta *c) {
    c->densidade_pop = c->populacao / c->area;
    c->pib_per_capita = c->pib / c->populacao;
}

void calcularSuperPoder(Carta *c) {
    c->super_poder = (float)c->populacao + c->area + c->pib + c->pontos_turisticos + c->pib_per_capita + (1.0f / c->densidade_pop);
}

void compararAtributos(Carta c1, Carta c2) {
    printf("\n--- Comparação de Cartas ---\n");
    printf("População: Carta 1 venceu (%d)\n", c1.populacao > c2.populacao);
    printf("Área: Carta 1 venceu (%d)\n", c1.area > c2.area);
    printf("PIB: Carta 1 venceu (%d)\n", c1.pib > c2.pib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", c1.pontos_turisticos > c2.pontos_turisticos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", c1.densidade_pop < c2.densidade_pop); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", c1.pib_per_capita > c2.pib_per_capita);
    printf("Super Poder: Carta 1 venceu (%d)\n", c1.super_poder > c2.super_poder);
}

int main() {
    Carta carta1, carta2;

    printf("--- Cadastro da Carta 1 ---\n");
    lerCarta(&carta1);
    calcularAtributos(&carta1);
    calcularSuperPoder(&carta1);

    printf("\n--- Cadastro da Carta 2 ---\n");
    lerCarta(&carta2);
    calcularAtributos(&carta2);
    calcularSuperPoder(&carta2);

    compararAtributos(carta1, carta2);

    return 0;
}
