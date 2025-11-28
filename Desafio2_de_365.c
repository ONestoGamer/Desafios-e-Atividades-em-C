#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
// contar apenas o total de vogais simples em uma frase
char frase[100];
int i, count = 0;
printf("Digite uma frase: ");
fgets(frase, sizeof(frase), stdin);

for (i = 0; frase[i] != '\0'; ++i) {
	char c = tolower((unsigned char)frase[i]);
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
		count++;
	}
}
printf("Total de vogais: %d\n", count);
return 0;
}
