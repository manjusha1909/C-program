#include<stdio.h>
main()
{
	int area,a,b,r,n,ch,temp;
	float pi=3.14;
	printf("Enter the radius");
	scanf("\n%d",&r);
	printf("enter the 2 no");
	scanf("\n%d%d",&a,&b);
	printf("\n enter the no");
	scanf("%d",&n);
	printf("\n1areaofcircle \n2swapping \n3 ");
	printf("Enter the your chioce");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			area=pi*r*r;
			printf(" area of circle=%d",area);
		    break;
			
		case 2:
			temp=a;
			a=b;
			b=temp;
			printf("\n after swapping a=%d & b=%d",a,b);
		    break;
			
		case 3:
			if(n%2==0)
			{
				printf("\n no is even=%d",n);
			}
			else
			{
				printf("\n no is odd=%d",n);
	         break;
			}
			
			default:
				printf("\n wrong choice");
				
	}
}
