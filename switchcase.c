#include<stdio.h>
main()
{
	int a,b,ch;
	float pi,area;
	printf("\n enter a and b");
	scanf("%d%d",&a,&b);
	printf("\n1.area of circle \n2.swapp \n3.even and odd");
	 printf("\n enter your choice");
	 scanf("%d",&ch);
	 switch(ch)
	 {
	 	case 1:
	 	c=a+b;
	 	printf("\n add=%d",c);
	 	break;
	 	
	 	case 2:
	 		c=a-b;
	 		printf("\n sub=%d",c);
	 		break;
	 	case 3:
	 		c=a*b;
	 		printf("\n multi=%d",c);
	 		break;
	 	case 4:
	 		c=a/b;
	 		printf("\n div=%d",c);
	 		break;
	 		default:
	 			printf("\n wrong chocie");
	 }
}
