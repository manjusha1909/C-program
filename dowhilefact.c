#include<stdio.h>
main()
{
	int i=1,fact=1,n;
	printf("\n enter the  number:");
	scanf("%d",&n);
	do
	{
		fact=fact*i;
		i++;
	}
	while(i<=n);
	printf("\n  fact=%d",fact);
}
