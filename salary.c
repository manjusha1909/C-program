#include<stdio.h>
main()
{
	 int bs,hra,ta,bonus,netsal;
	 printf("\n enter basic salary");
	 scanf("%d",&bs);
	 if(bs>=10000)
	 {
	 	hra=bs*10/100;
	 	ta=bs*5/100;
	 	bonus=2400;
	 }
	 else
	 {
	 	hra=bs*5/100;
	 	ta=10000;
	 	bonus=1500;
	 }
	 netsal=bs+hra+ta+bonus;
	 printf("\n nestal=%d",netsal);
	 printf("\n bs \t thra \thra \tbonus \t nestal");
	 printf("\n %d \t%d \t%d \t%d \t%d",bs,hra,ta,bonus,netsal);
}
