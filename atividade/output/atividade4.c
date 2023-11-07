#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int idade;
    printf("Digite sua idade:");
    scanf("%d", &idade);
    if (idade >= 18)
    {
        printf("Acesso permitido\n");
    }
    else
    {
        printf("Acesso Negado\n");
    }
    return 0;
}
