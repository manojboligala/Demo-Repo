#include<stdio.h>
int bit_wise(int var, int pos);
int main()
{
	int var = 10;
	
	int pos = 2;
	
	int g = bit_wise(var,pos);
	printf("%d",g);
}

int bit_wise(int var, int pos)
{
	int res;
	
	int temp = (var>>pos) & 1;
	
	if (temp == 1)
	{
		res = var & ~ (1<<pos);
	}
	else
	{
		res = var | (1<<pos);
	}
	return res;
}
