#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int escolha;

     printf ("1- Camiseta \n");
    printf ("2- Calca\n");
    printf ("3- Sapato\n");
     printf("escolha uma opcao\n");
    scanf ("%d",&escolha);

    switch (escolha) {
    case 1:
    printf ("Camiseta (R$:25,99)");
    break;
    case 2:
    printf ("Calça (R$:90,99)");
    break;
    case 3:
    printf ("Sapato (R$:100,00)");
    break;
    }
    return 0;
}