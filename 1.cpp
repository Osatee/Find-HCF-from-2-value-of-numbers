#include <stdio.h>

int main()
{
	int a;
	scanf ("%d" , &a);
	
	int b;
	scanf ("%d" , &b);
	
	int c;
	
	int i = 1;
	for (i=1; i<=a && i<=b; i++)
	{
		if(a%i == 0 && b%i == 0)
		{
			c = i;
		}
	}
	
	printf("%d" , c);
}

