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
    fgets(frase, 50, stdin); //se usa fgets para que lean hasta 49 caracteres desde la entrada y el stdin los almacena 
    int len = strlen(frase); //se usa strlen para calcular la longitud 

    for (int i = 0; i < len; i++) //se inicia un bucle con la funcion for 
    {

        printf("%c\n", frase[i]); //se imprime un caracter por linea
        contadorn1++; //se incrementa el contadorn1 
        if (frase[i] == ' ' || frase[i] == '\n') //si es que se encuentran saltos de lineas se incrementa el contador
        {
            contador++;
            numero = contadorn1 - 1; 
            contadorn1 = 0; //se reinicia a 0 para contar la siguiente palabra 
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