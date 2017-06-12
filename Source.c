#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>



int main()
{

	int a = 0;
	int b = 1;
	int c;
	int d = 0;
	int i = 0;
	printf("Please enter the amount of elements you want\n\n");
	scanf("%d", &d);
	for (i = 0; i < d; i++)
	{
		c = a + b;
		printf("\n%d\n", c);
		a = b;
		b = c;
	}

	system("pause");
	return 0;
}
