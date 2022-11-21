#include<stdio.h>
void fact()
main()
{
  int i,n,fact=1;
  printf("\n enter the number");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
    fact=fact*i;
  }
  printf("\n it is fact",fact);
  
  void add()
  {
    int a,b,c;
    printf("\n enter  the two no");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\n addioton c=",c);
