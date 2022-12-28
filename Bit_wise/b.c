#include<stdio.h>

int main()
{
	int var = 5;

	int pos = 7;

	int g = var ^ (1 << pos);
	printf("%d",g);
}
