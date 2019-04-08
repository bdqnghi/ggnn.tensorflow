
int reverse(int a)
{
  int c=0;
  while(a)
  {
       c=c*10+a%10;
	   a=a/10;
 }
  return c;
}

main()
{
  int a,i;
  for(i=0;i<6;i++)
  {
	 scanf("%d",&a);
	 printf("%d\n",reverse(a));
  }
  
}