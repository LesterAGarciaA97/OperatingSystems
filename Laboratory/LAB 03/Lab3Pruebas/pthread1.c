#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#include <string.h>
#include <unistd.h>

void *entry_point(void *value)
{

	while(1)
	{
		sleep(1);
		printf("Hello there thread \n");
	}

	return NULL;
}

void YourTurn(){


	while(1)
	{
		sleep(2);
		printf("Bye there thread \n");
	}

	
}


int main(int argc, char **argv)
{

	int opcion;


	int contadorThread = 0;

	while(1)
	{
		printf("Enter a integer: ");
		scanf("%d", &opcion);	

		switch (opcion)
		{
			case 1:
				//printf("ud ha presionado 1 gracias :)");
				contadorThread++;
				printf("%d \n", contadorThread);
				
				pthread_t thread;
				pthread_create(&thread, NULL, entry_point, &contadorThread);				

	
				YourTurn();
				pthread_join(thread, NULL);
				
				break;
			case 2:
				printf("ud ha presionado 2 no gracias :(");
				break;
			default:
				printf("IMBECIL");
				exit(0);
				break;
		}
	}
	return 0;



	
	
	//printf("Hello from the first thread :(");

	//int num = 123;

	//pthread_create(&thread, NULL, entry_point, &num);

	//Joined does that ensures that your main tread will wait until your second thread finishes
	//

	return EXIT_SUCCESS;
}





	//Crear un thread principal ahi hacer lo de las opciones

	//Mux

	//Thread 1 que es opciones
	//Thread 2 creado
	//Thread 1
	//Thread 2 existe
	//Thread 3 creado
	




