#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_LEN 20

typedef struct Linux{
	int data;
	char* name[MAX_LEN];
} Linux;

int print(Linux *Q)
{
	char buffer[256];
	int c;
	printf("---------------------------------------\n");
	printf("|          WELCOME TO SAGSAG          |\n");
	printf("---------------------------------------\n");
	printf("| 1.Enter your age (1-99):	      |\n");
	printf(">");
	if(scanf("	%d",&Q->data) != 1)
	{
		printf("INVALID INPUT\n");
		free(Q);
		return 1;
	} 
	printf("| 2.Enter your name:                  |\n");
	printf(">");
	if(scanf("	%d",&Q->data) != 1)
	if(scanf("	%s",&Q->name) != 1)
	{
		printf("INVALID INPUT");
		free(Q);
		return 1;
	}
	printf("---------------------------------------\n");
	printf("Your age is: %d and your name is %s\n", Q ->data, Q ->name);
	printf("-----------------------------------------------------------------------------------------------\n");
	printf("\033[37m     __          __   _____    _       ______  ________   ____________	 _____ 	\033[0m\n");
	printf("\033[37m    /  /  __    /  / / ____/  / /     / ____/ / ___   / /  __   __    / / ____/	\033[0m\n");
	printf("\033[37m   /  /  /  /  /  / / /__    / /     / /     / /   / / /  / /  /  /  / / /__   	\033[0m\n");
	printf("\033[37m  /  /  /  /  /  / / ____/  / /	    / /	    / /	  / / /	 / /  /  /  / / ____/  	\033[0m\n");
	printf("\033[37m /  /__/  /__/  / / /____  / /___  / /___  / /___/ / /  / /  /  /  / / /____   	\033[0m\n");
	printf("\033[37m ______________/ /_______//______//______//_______/ /__/ /__/  /__/ /______/   	\033[0m\n");
	printf("-----------------------------------------------------------------------------------------------\n");
	printf("\n");
	printf("\n\033[36m$ - YOU WERE BORN NOW...\033[0m\n");
	printf("\n\033[36m$ - YOU TOOK YOUR BEST DECISION TODAY\033[0m\n");
	printf("\n\033[36m$ - WELCOME TO SAGSAG OPERATING SYSTEM! \033[0m\n");
	printf("\n");
	printf("\n\033[33m$ - Enjoy :) \033[0m\n");
	printf("\n");
	printf("\033[33m$ To Exit - ^z \033[0m\n");
	printf("\n");
	while((c = getchar()) != '\n' && c != EOF);
	while(1)
	{
		printf("\033[36m%s_root\033[0m\033[37m@\033[0m\033[35mMAIN_MENU\033[0m:$ ", Q->name);
		if(fgets(buffer, sizeof(buffer), stdin) == NULL)
		{
			printf("\nINPUT ERROR OR EOF DETECTED\n");
			break;
		}
		buffer[strcspn(buffer, "\n")] = 0;

		if(strcmp(buffer,"wmi") == 0)
		{
			printf(" %s\n ", Q->name);
		}

		if(strcmp(buffer,"where") == 0)
		{
			printf("At the age of %d talking to a computer instead of working out or getting social\n", Q->data);
		}

		else if(strcmp(buffer,"") == 0)
		{
			continue;
		}
	}
	return 0;	
}

int main()
{
	int age = 0;
	char* name[MAX_LEN];
	Linux *lin = malloc(sizeof(Linux));
	if(lin == NULL)
	{
		printf("Allocation Failed\n");
		exit(1);
	}
	int result = print(lin);
	free(lin);
	return result;
}
