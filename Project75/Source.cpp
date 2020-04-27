#include<stdio.h>
#include<string.h>

void ispisTeksta(char *niz) {
	printf("%s",niz);
	char zn;
	printf("Unesite znak: \n");
	scanf("%c", &zn);
}

int main() {
	printf("Hello world!\n");
	char niz[15] = "Novi string\n";
	ispisTeksta(niz);
	//return 0;
}
