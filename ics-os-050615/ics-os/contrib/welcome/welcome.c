#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define N 5

void printW();
void printE();
void printL();
void printC();
void printO();
void printM();
void printE();

main(){
	char str[50];

	printf("Enter your name: ");
	gets(str);
	
	printW();
	printf("\n");
	delay(50);
	printE();
	printf("\n");
	delay(50);
	printL();
	printf("\n");
	delay(50);
	printC();
	printf("\n");
	delay(50);
	printO();
	printf("\n");
	delay(50);
	printM();
	printf("\n");
	delay(50);
	printE();	
	printf("\n");
	delay(50);
}

void printW(){
	int i, j;
	
	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
			if(j == 0 || j == (N-1))
				printf("*");
			else if(j == (N/2) && i == (N/2))
				printf("*");
			else if(j > (N/2) && i > (N/2) && i == j)
				printf("*");
			else if(j <(N/2) && i > (N/2) && i == ((N-1)-j))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}

void printE(){
	int i, j;

	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
			if(i == 0 || i == (N-1))
				printf("*");
			else if(i == (N/2) && j <= (N/2))
				printf("*");
			else if(j == 0)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}

void printL(){
	int i, j;

	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
			if(j == 0)
				printf("*");
			else if(i == (N-1))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}

void printC(){
	int i, j;

	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
			if(j == 0)
				printf("*");
			else if(i == 0 || i == (N-1))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}

void printO(){
	int i, j;

	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
			if(j == 0 || j == (N-1))
				printf("*");
			else if(i == 0 || i == (N-1))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}

void printM(){
	int i, j;
	
	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
			if(j == 0 || j == (N-1))
				printf("*");
			else if(j == (N/2) && i == (N/2))
				printf("*");
			else if(j < (N/2) && i < (N/2) && i == j)
				printf("*");
			else if(j > (N/2) && i < (N/2) && i == ((N-1)-j))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}


