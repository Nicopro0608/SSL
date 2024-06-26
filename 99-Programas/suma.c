#include <stdlib.h>
#include <stdio.h>

/* La biblioteca ctype.h incluye una función que permite determinar si un caracter
es un dígito o no.
Una cadena para la cuál todos sus caracteres son dígitos es Número. */


int esNumero(const char *nro) // devuelve 1(true) si ES NUMERO
{
    if (nro == NULL || *nro == '\0')
    {
        return 0;
    }

    while (*nro)
    {
        if (*nro < '0' || *nro > '9')
        {
            return 0;
        }
        else {
            nro++;
        }
    }

	return 1;
}

int main(int argc, char *argv[]) {
	if (argc != 3)
    {
		puts("uso: suma nro1 nro2");
		return 1;
	}

	if (!esNumero(argv[1]) || !esNumero(argv[2]))
    {
		puts("nro1 y nro2 deben ser constantes numericas");
		return 1;
	} 


	int sumando1 = atoi(argv[1]);
	int sumando2 = atoi(argv[2]);

	printf("la suma de %d y %d es %d", sumando1, sumando2, sumando1 + sumando2);


	return 0;
}
