#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

int num;
 printf("Digite um numero: ");
 scanf("%d",&num);

 do
 {
    printf(" %d\n", num);
    num -= 1;
 } while (num > -1);
 

    return 0;
}

