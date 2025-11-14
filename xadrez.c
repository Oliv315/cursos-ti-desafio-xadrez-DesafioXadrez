#include <stdio.h>

// Criando funções:
void MovCima(int numero){
    if (numero > 0 ){
        MovCima(numero - 1);
        printf("Para cima, Casa: %d\n", numero);
    }
}

void MovDireita(int numero){
     if (numero > 0 ){
        MovDireita(numero - 1);
        printf("Para Direita, Casa: %d\n", numero);
        
    }
}

void MovEsquerda( int numero){
     if (numero > 0 ){
        MovEsquerda(numero - 1);
        printf("Para Esquerda, Casa: %d\n", numero);
        
    }
}

void MovDiagonal(int numero,int numero2){
    if(numero > 0 && numero2 > 0){
        MovDiagonal(numero -1, numero2 -1);
        printf("Movimento Diagonal,casas: %d,%d\n",numero, numero2);
    }
}

// Chamando as funções para cada peça:
int main(){

    int torre = 5;
    printf("Movimento Torre\n");
    MovCima(torre);
    printf("\n");

    int rainha = 8;
    printf("Movimento Rainha\n");
    MovEsquerda(rainha);
    printf("\n");


    int cavalo = 1;
    while (cavalo > 0){
        printf("Movimento do Cavalo\n");
        MovCima(2);
        MovDireita(1);
        printf("\n");

        cavalo--;
    }

    int bispo = 8;
    printf("Movimento Bispo\n");
    MovDiagonal(bispo, bispo);
    printf("\n");

    bispo--;
       
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