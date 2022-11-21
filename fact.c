#include<stdio.h>
main()
{
  int i,n,fact;
  printf("\n enter the number");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
    fact=fact*i;
  }
  printf("\n it is fact",fact);
