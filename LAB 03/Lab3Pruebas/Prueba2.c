#include <pthread.h>
#include <unistd.h>
#include <stdio.h>


//Manda un puntero de retorno
void* myturn( void * arg)
{
	while(1)
	{
		sleep(1);
		printf("My Turn!\n");
	}
	
	return NULL;
}

void yourturn()
{
	while(1)
	{
		sleep(1);
		printf("My Turn!\n");
	}
}

int main()
{

	pthread_t thread1;
	pthread_create(&thread1, NULL, myturn, NULL);

	//myturn();
	yourturn();

	pthread_join(thread1, NULL);
}
