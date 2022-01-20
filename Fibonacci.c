//2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores
//anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...),
//escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci
//e retorne uma mensagem avisando se o número informado pertence ou não a sequência.
//IMPORTANTE:
//Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido
//no código;



#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n1 = 0, n2 = 1, resultado = 0, valor;

    for (int i = 0; i < 10; i++){
        
        n2 = n2 + n1;
        resultado = n2;
        valor = scanf("Digite um número da sequência Fibonacci: \n");
        
        if (resultado == valor){
            printf("%i é o resultado certo! Parabéns! \n", valor);
            }
            else
            {
                printf("Não é bem por ai, %i está errado \n", valor);
                printf("%i é o correto \n", resultado);
                }

    }
    

}
