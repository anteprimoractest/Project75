#include<stdio.h>
#include<string.h>

void ispisTeksta(char * niz) {
	for(int i = 0; i < niz.length; i++) {
	printf("%s",niz);
	}
}

int main() {
	printf("Hello world!\n");
	char niz[15] = "Novi string";
	ispisTeksta(&niz);
	return 0;
}
