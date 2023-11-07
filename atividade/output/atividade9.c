#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, num = 479001599, cont = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cont++;
        }
      
    }
      if (cont == 2)
        {
            printf(" primo\n");
        }
        else
        {
            printf("Não e primo\n");
        }
    return 0;
}