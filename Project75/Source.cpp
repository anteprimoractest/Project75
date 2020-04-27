#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void ispisTeksta(char *niz) {
	printf("%s", niz);
	printf("\n");
	system("PAUSE");
}

int main() {
	char niz[15] = "Hello world!";
	ispisTeksta(niz);
	return 0;
}
