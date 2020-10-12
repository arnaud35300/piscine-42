#include <stdio.h>
#include <unistd.h>
void autre(int *a)
{
	*a = 43;
}

int main(void)
{
	int a;
	a = 42;

	if (a > 50) {
	autre(&a);

	printf("%d", a);
	return (1);
	int *pointeur_de_a;
	pointeur_de_a = &a;

	int b;
	b = *pointeur_de_a;

	// a = 42;
	// &a = adresse (60450465xbd747)
	
	}

	
	char e = 'a' + 2;

	write(1, &e , 1);
	printf("%c", e);
	//printf("valeur de a : %d\n", a);
	//printf("adresse de a : %p", &a);
	//printf("valeur de a en passant par son pointeur %d", *pointeur_de_a);
}

