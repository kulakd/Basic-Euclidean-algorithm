#include <stdio.h>

main()
{
	printf("This program is using basic Euclidean algorithm to find greates common divisor of two given integers.\n");
	int a,b,i=1;
	printf("Enter two integers a and b:");
	scanf("%d %d", &a, &b);
	printf("\n");
	while (a!=b)
	{
		if(a>b)
		{
			printf("Step %d: %d - %d\n",i,a,b);
			a=a-b;
		}
		else
		{
			printf("Step %d: %d - %d\n",i,b,a);
			b=b-a;
		}
		i++;
	}
	printf("Greatest common divisor: %d",a);
}
