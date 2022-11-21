#include<stdio.h>
main()
{
	int area,a,b,temp,n,ch,r;
	float pi=3.14;
	printf("\n enter the radius");
	scanf("\n%d",&r);
	printf("\n enter the for swaping for two number");
	scanf("\n%d%d",&a,&b);
	printf("\n enter the number for even and odd");
	scanf("%d",&n);
	printf("\n1area of circle \n2swapping \n3even odd");
	printf("\n enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			area=pi*r*r;
			printf("\n area of circle=%d",area);
			break;
		case 2:
			a=temp;
			a=b;
			b=temp;
			printf("\n swap a=%d b=%d",a,b);
			break;
		case 3:
			if(n%2==0)
			{
				printf("\n it is even=%d",n);
			}
			else
			{
				printf("\n its is oddd=%d",n);
			}
	}
}
