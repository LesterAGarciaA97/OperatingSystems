#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#include <string.h>

void *entry_point(void *value)
{
	printf("Hello the second thread :)");

	return NULL;
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
	//pthread_join(thread, NULL);

	return EXIT_SUCCESS;
}
