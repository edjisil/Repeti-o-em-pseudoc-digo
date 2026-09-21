#include <stdio.h> // contém a biblioteca dados padrão de entrada e saída com cabeçalho (h)

int main () // função main, sabemos que é uma função porque possui (), é do tipo int
{
    int soma, contador; // variáveis com nome soma e contador do tipo int 
    
    soma = 0; // variável soma recebe 0
    contador = 1; // variável contador recebe 1, obs.: ; indica que a linha chegou ao fim
    
    while (contador <= 10) { // while = enquanto contador for menor ou igual a dez, determina o tempo de voltas registrado na variável contador
        soma = soma + contador; // variável soma recebe ela mesma mais o valor da varável contador a cada volta
        contador = contador + 1; // variável contador recebe ela mesma mais 1 a cada volta
    }
    printf("Soma: %d", soma); // exibe para o usuário o resultado das voltas na varável soma, valor é exibido do tipo inteiro %d
}
