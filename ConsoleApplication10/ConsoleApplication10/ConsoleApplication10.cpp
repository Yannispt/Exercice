#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include<stdlib.h>
int main()

{
	int a, b, c;
	printf("donnez 3 entiers:\n");
	scanf("%d%d%d", &a, &b, &c);
	if (a >= b && a >= c)
	{
     if (b >= c) printf("%d %d %d\n", c, b, a);
	else printf("%d %d %d\n", c, b, a);
	}
		
	if (c >= a && c >= b)
	{
    if (a >= a && c >= b) printf("%d %d %d\n", b, a, c);
		else printf ("%d %d %d\n", b, a, c")
	}
		
	system("pause");
	return 0;
	
}