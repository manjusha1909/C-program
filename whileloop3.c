#include<stdio.h>
main()
{
	int i=1, fact=1,n;
	printf("\n enter the number:");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("\n %d it is factorial= %d",n,fact);
}
