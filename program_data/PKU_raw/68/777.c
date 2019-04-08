int isprime(long n)
{
	long j,x;
	if(n==3) x=1;
	else
	{
	for(j=2;j<=sqrt(n);j++)
	{
	if(n%j==0)	
		{x=0;
	     break;
	    }
	
	}
	if(j>sqrt(n)) x=1;
	}
	return(x);


}
void main()
{
   int  n,i;
   scanf("%d",&n);
   for(i=6;i<=n;i=i+2)
   {
	   int  m;
	   for(m=3;m<=(i/2);m=m+2)
	   {
		   if(isprime(m)==1&&isprime(i-m)==1)
		   {  
			   
			   printf("%d=%d+%d\n",i,m,i-m);
			   break;
		   }
			 
	   
	    }

   }
}