int pd(long k)
{ 
	int a,j;
		for (j=2;j<=(sqrt(k));j++)
		    if (k%j==0)
				break;
		if(j>(sqrt(k))) a=1;
		else a=0;
	return(a);
}
void fj(long n)
{    
	long i,m;
	for (i=3;i<n;i=i+2)
	{
	    m=n-i;
		if (pd(i)>0 && pd(m)>0)
		{
			printf("%ld=%ld+%ld\n",n,i,m);
		    break;
		}
	}
}
void main()
{
	long h,b;
	scanf("%ld",&h);
	for(b=6;b<=h;b=b+2)
		fj(b);
}