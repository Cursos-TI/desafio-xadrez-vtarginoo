#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

 void movimentaBispoRecursivo(int movimentos){
    
        if(movimentos<0){
            return;
        }

        printf("Cima\n");
        printf("Direita\n");

        movimentaBispoRecursivo(movimentos-1);
    }


    void movimentaTorreRecursivo(int movimentos){
        
        if(movimentos<0){
            return;
        }
        printf("Direita\n");

        movimentaTorreRecursivo(movimentos-1);
    }

    void movimentaRainhaRecursivo(int movimentos){
        if(movimentos<0){
            return;
        }

        
        printf("Esquerda\n");

        movimentaRainhaRecursivo(movimentos-1);
    }

    void movimentaCavaloComplexo(int movimentos){
    printf("Movimentação do Cavalo em 'L'!!!\n");

    // Loop para a parte vertical (2 casas para Cima)
    for (int vertical = 0; vertical < movimentos; vertical++) {
        printf("Cima\n");
    }

    // Loop para a parte horizontal (1 casa para a Direita)
    for (int horizontal = 0; horizontal < 1; horizontal++) {
        printf("Direita\n");
    }
}

void movimentaBispoLoops(int movimentos) {
    printf("Movimentação do Bispo com Loops Aninhados!!!\n");

    // Loop externo: controla o movimento vertical 
    for (int i = 0; i < movimentos; i++) {
        // Loop interno: controla o movimento horizontal 
        // Este loop executa apenas uma vez para cada movimento vertical
        for (int j = 0; j < 1; j++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }
}




int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int movimentoBispo = 5;
    int movimentoTorre =5;
    int movimentoRainha = 8;
    printf("***Início das Movimentações***\n");
    
    printf("\n");
    printf("*********************\n");
    printf("Nível Novato\n");
    printf("*********************\n");
    printf("\n");

    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimentação do Bispo!!!\n");
    for (int i =0; i<movimentoBispo;i++){
        printf("Cima\n");
        printf("Direita\n");
    }



    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("Movimentação da Torre!!!\n");
    for (int i =0; i<movimentoTorre;i++){
        printf("Direita\n");
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
     printf("Movimentação da Rainha!!\n");
     for (int i =0; i<movimentoRainha;i++){
        printf("Esquerda\n");
    }


    printf("\n");

     // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
     printf("\n");
    printf("*********************\n");
    printf("Nível Aventureiro\n");
    printf("*********************\n");
    printf("\n");

    printf("Movimentação do Cavalo!!!\n");
    int movimentoCompleto = 1;

    while(movimentoCompleto--){

        for(int i =0 ;i<2;i++){
            printf("Baixo\n"); //Imprime Cima 2 Vezes
        }
        printf("Esquerda\n"); //Imprime Direita 1 Vez
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    printf("\n");
    printf("*********************\n");
    printf("Nível Mestre\n");
    printf("*********************\n");
    printf("\n");

     
    printf("Movimentação do Bispo Recursiva!!!\n");
    movimentaBispoRecursivo(movimentoBispo);
    printf("Movimentação da Torre Recursiva!!!\n");
    movimentaTorreRecursivo(movimentoTorre);
    printf("Movimentação da Rainha Recursiva!!!\n");
    movimentaRainhaRecursivo(movimentoRainha);
    printf("Movimentação Complexa do Cavalo!!!\n");
    movimentaCavaloComplexo(2);
    printf("Bispo Loops Aninhados!!\n");
    movimentaBispoLoops(4);


    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
