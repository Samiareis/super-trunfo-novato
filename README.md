# Super Trunfo - Nível Aventureiro

Este projeto é uma continuação do desafio Novato, adicionando um menu interativo que permite ao jogador escolher qual atributo será usado para comparar duas cartas de países.

## Como compilar

Para compilar o código, use o GCC no terminal:

```bash
gcc super_trunfo_aventureiro.c -o super_trunfo

Como executar
Após compilar, execute o programa com:

bash
Copiar
Editar
./super_trunfo
Como usar
O programa exibirá um menu com opções de atributos para comparar:

População

Área

PIB

Número de pontos turísticos

Densidade demográfica

Digite o número correspondente ao atributo desejado e pressione Enter.

O programa exibirá o nome dos dois países, os valores do atributo escolhido, e indicará qual carta venceu.

Em caso de empate, será exibida a mensagem "Empate!".

Se digitar uma opção inválida, o programa avisará para tentar novamente.

Atributos e regras de comparação
Para todos os atributos, vence a carta com o maior valor.

Para densidade demográfica, vence a carta com o menor valor.

Autor
Samia Reis
