#define CR_SECURES_NO_WARNINGS		
#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	int i;
	printf("\n chaine a convertir en minuscule: ");
	gets_s(str);
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + 32;
		}
	}
	printf("\n la chaine en minuscule = %s", str);
	return 0;
}