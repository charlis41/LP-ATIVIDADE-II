#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float nota;
    printf("Insira a sua nota: ");
    scanf("%f", &nota);
    if (nota >= 9) {
    printf("\n Exelente\n");
    } else if (nota >= 7 && nota <= 8.9){
    printf("\n bom\n");
    }else if (nota >=5 && nota <=6.9){
    printf("\n razoavel\n");
    }else if (nota < 5)
    printf("\n insuficiente\n");
    return 0;
    }
    

