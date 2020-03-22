#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include<sys/wait.h> 

void clrscr()
{
    system("@cls||clear");
}

int main() {
	int numero;
	int productor;
	int consumidor;
	bool menu = true;
	char caracter;
	printf("1. Crear productor\n");
	printf("2. Crear consumidor\n");
	printf("3. Reiniciar consumidor\n");
	printf("4. Pausar productor\n");
	printf("5. Detener productor\n");
	printf("6. Detener consumidor\n");
	printf("7. Mostrar ambos\n");
	printf("8. Salir\n");
	while (scanf("%c", &caracter) == 1) {
		if (caracter = 49) {
			productor = fork();
			printf("Se creo el productor con el pid %d", productor);
		} else if (caracter = 50) {
			consumidor = fork();
			printf("Se creo el consumidor con el pid %d", consumidor);
		} else if (caracter = 51) {

		} else if (caracter = 52) {

		} else if (caracter = 53) {

		} else if (caracter = 54) {

		} else if (caracter = 55) {

		} else if (caracter = 56) {
			menu = false;
		}
		clrscr();
		printf("1. Crear productor\n");
		printf("2. Crear consumidor\n");
		printf("3. Reiniciar consumidor\n");
		printf("4. Pausar productor\n");
		printf("5. Detener productor\n");
		printf("6. Detener consumidor\n");
		printf("7. Mostrar ambos\n");
		printf("8. Salir\n");
		//caracter = 0;
		
	}
	/*if (productor > 0 && consumidor > 0) {
		numero = 5;
		printf("Parent %d \n", getpid());
	} else if (productor == 0) {
		numero = 6;
		printf("Child  %d \n", getpid());
	} else if (consumidor == 0) {
		numero = 6;
		printf("Child  %d \n", getpid());
	} else {
		numero = 0;
		printf("error");
	}
	printf("%d", numero);*/
	return 0;
}
