#include <stdio.h>

int main ()
{
    int soma, contador;
    
    soma = 0;
    contador = 1;
    
    while (contador <= 10) {
        soma = soma + contador;
        contador = contador + 1;
    }
    printf("Soma: %d", soma);
}