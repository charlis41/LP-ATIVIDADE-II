#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
int escolha;

   
    printf ("1- Ingles \n");
    printf ("2- Espanhol\n");
    printf ("3- Frances\n");
     printf("Escolha um idioma de sua preferencia:\n");
    scanf ("%d",&escolha);

    switch (escolha) {
    case 1:
    printf ("Welcome");
    break;
    case 2:
    printf ("Bienvenido");
    break;
    case 3:
    printf ("Accuellir");
    break;
    }
    return 0;
    }

    
