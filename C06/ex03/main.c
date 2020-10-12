#include <stdio.h>
int main(int argc, char **argv)
{
	(void)argc;

	argv[1] = argv[2];

	printf("%s", argv[1]);
	printf("%s", argv[2]);
}
