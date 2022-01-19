
#include <stdio.h>

int main(void){

int indice = 13, soma = 0, k = 0;
do {
    k += k;
    soma = soma + k;
    }
while (k < indice);

printf(soma);

}

