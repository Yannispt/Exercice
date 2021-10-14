#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char c, str[100];
	int i, occurrence = 0;

	printf("Entrez une chaine de caracteres: ");
	gets_s(str);

	printf(" entrez un caractere : ");
	scanf("%c", &c);

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] == c)
			++occurrence;
	}

	printf("Le nombre doccurrence de %c est %d", c, occurrence);
	return 0;
}