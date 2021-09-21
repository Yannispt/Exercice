#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int poids = 0; 


	printf("entre le poids");
	scanf("%d", &poids);
	if (poids < 20) {
		printf("prix est de 3.00f");
	}
	
	if (poids > 20 && poids <= 50) {
		printf("prix est de 3.95f");

	}
	if (poids > 50) {

		printf("prix est de 5.90f");
	 }
}