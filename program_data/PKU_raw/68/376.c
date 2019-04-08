void main()
{
	long int x,n,i;
	long int prime(long int t);
	n=6;
	scanf("%ld",&i);
	while(n<=i)
	{
	for(x=3;x<=n/2;x=x+2)
		if(prime(x)&&prime(n-x))
			break;
		printf("%ld=%ld+%ld\n",n,x,n-x);
		n=n+2;
	}
}

long int prime(long int t)
{
	long int g,h,k;
	k=sqrt(t);
	for(h=2;h<=k;h++)
		if(t%h==0)
			break;
		if(h>k) g=1;
		else g=0;
		return(g);
}