#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float temperatura;
    printf("Temperatura: ");
    scanf("%f", &temperatura);
    if (temperatura > 25)
    {
        printf("\nClima ensolarado.");
    }
    else if (temperatura < 15)
    {
        printf("\nClima chuvoso.");
    }
    else if ((temperatura = 15) && (temperatura < 25))
    {
        printf("\nClima nublado.");
    }
    return 0;
}