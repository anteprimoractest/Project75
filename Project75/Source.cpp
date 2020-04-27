#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void ispisTeksta(char *niz) {
	printf("%s", niz);
	printf("\n");
}

int main() {
	char niz[15] = "Hello world!";
	ispisTeksta(niz);
	system("PAUSE");
	return 0;
}
