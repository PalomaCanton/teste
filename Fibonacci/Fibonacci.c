
#include <stdio.h>
#include <stdlib.h>



int main(void){

    int n1 = 0, n2 = 1, resultado = 0, valor = 0;
    for (int i = 0; i < 10; i++)
    {
    
        valor = printf("\nDigite um numero da sequencia de Fibonacci: \n");
        scanf("%i", &valor);
        if (valor == n2)
        {
            printf("Parabens voce acertou! \n");
        }
        else
        {
            printf("Ops! voce errou, era %i o numero certo \n", n2);
        }
        resultado = n1 + n2;
        n1 = n2;
        n2 = resultado;
    }
    printf("Acabou!");
}