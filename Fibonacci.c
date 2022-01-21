
#include <stdio.h>
#include <stdlib.h>



int main(void){

    int n1 = 0, n2 = 1, resultado = 0, valor = 0;
    for (int i = 0; i < 10; i++)
    {
    
        resultado = n1 + n2;
        n1 = n2;
        n2 = resultado;
        valor = printf("Digite um número da sequência de Fibonacci: \n", n1);
        scanf("%i", n1);
        if (valor == n1)
        {
            printf("Parabéns você acertou! \n");
        }
        else
        {
            printf("Ops! Você errou. \n");
        }
    }
}