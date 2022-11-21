#include<stdio.h>
main()
{
	int s1,s2,s3,s4,s5,sum,per;
	printf("enter 5 numbers");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	sum=s1+s2+s3+s4+s5;
	printf("\n sum=%d",sum);
	per=(sum*100)/500;
	printf("\n per=%d",per);
	if(per>=70 && per<=100)
	{
		printf("distinaction");
	}
	else if(per>=60 && per<=75)
	{
		printf("\n 2nd class");
	}
	else if(per>=50 && per<=60)
	{
		printf("\n 3rd class");
	}
	else if(per>=40)
	{
		printf("\n pass");
	}
	else
	{
		printf("\n fail");
	}
	
}
