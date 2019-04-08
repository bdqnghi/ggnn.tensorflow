long even(long n)
{
	long t;
	if(n==2 || n==3)
		return 1;
else
{
   for(t=2;t<=sqrt(n);t++)
   {
	  if(n%t==0)
	  break;
   }
   if(t==(int)sqrt(n)+1)
	   return 1;
   else
	   return 0;
}
}
int main()
{
	long n,i,j;
	scanf("%ld",&n);
    for(i=6;i<=n;i=i+2)
	{
       for(j=3;j<i;j++)
	   {
		   if(even(j)==1&&even(i-j)==1)
		   {
			   printf("%ld=%ld+%ld\n",i,j,i-j);
		   break;
		   }
	   }
	}
}