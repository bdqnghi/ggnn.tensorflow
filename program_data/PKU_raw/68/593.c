int sushu(int n)
{
 int i,s=1;
 for(i=2;i<=sqrt(n);i++)
  if(n%i==0) 
  {
   s=0;
   break;
  }
 return(s);
}
main()
{
 int n,i,j;
 scanf("%d",&n);
 for(i=6;i<=n;i=i+2)
  for(j=3;j<=i/2;j++)
   if(sushu(j)&&sushu(i-j))
   {
	printf("%d=%d+%d\n",i,j,i-j);
	break;
   } 
}
