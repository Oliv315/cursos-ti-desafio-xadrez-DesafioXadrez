#include <stdio.h>
#include <string.h>
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


int main() {
//Rainha   // 8 casas para esquerda
int Torre = 1;                      /// 5 casas para frente
int Bispo = 1;                   /// 5 casas diagonais
int Linha = 1, Coluna = 1;       // representação da mesa

for (int Rainha = 1; Rainha < 9; Rainha++){
    printf("Rainha, Esquerda, casa %d\n", Rainha);
}

while (Torre < 6)
{
    printf("Torre, Frente, casa %d\n", Torre);
    Torre++;
}
do {
    printf("Bispo, Diagonal, casa (%d,%d)\n", Linha, Coluna);
    Linha++, Coluna++, Bispo++;
} while (Bispo < 6);

return 0;
}




    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.