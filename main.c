#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
	char nombre[50];
	char saludo[100] = "Hola ";
	char *puntero;
	int caracteres = 0;
	printf("Introduzca su nombre:\n");
	scanf("%s", nombre);
	
	puntero = nombre;
	
	while (*puntero != '\0') {
		caracteres++;
		puntero++;
	}
	strcat(saludo, nombre);
	printf("%s\n", saludo);
	printf("Su nombre tiene %d caracteres.\n", caracteres);



	return 0;
}