#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

    int contador=0;
    int contadorn1=0; 
    int nmax=0; 
    int nmin=100; 
    int numero=0;
    char frase[50];

    printf("Ingrese una frase:");
    fflush(stdin);
    fgets(frase, 50, stdin);
    int len = strlen(frase);

    for (int i = 0; i < len; i++)
    {

        printf("%c\n", frase[i]);
        contadorn1++;
        if (frase[i] == ' ' || frase[i] == '\n')
        {
            contador++;
            numero = contadorn1 - 1;
            contadorn1 = 0;
            if (numero < nmin)
            {
                nmin = numero;
            }
            if (numero >= nmax)
            {
                nmax = numero;
            }
        }
    }

    printf("El numero de palabras es de: %d\n", contador);
    printf("El maximo de caracteres en una palabra es de: %d\n", nmax);
    printf("El minimo de caracteres en una palabra es de: %d\n", nmin);

    return 0;
}