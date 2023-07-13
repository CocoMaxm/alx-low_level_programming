#include <stdio.h>

int main()
{
	int m;
	char a;
	float x;
	long int w;
	long long int e;

	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s)\n", sizeof(m));
	printf("Size of a long int: %d byte(s)\n", sizeof(w));
	printf("Size of a long long int: %d byte(s)\n", sizeof(e));
	printf("Size of a float: %d byte(s)\n", sizeof(x));
	return (0);


}
