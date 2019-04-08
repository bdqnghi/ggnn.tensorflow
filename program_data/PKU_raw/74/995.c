int huiwen(long n)
{
	long m=0,t=n;
	while(n>=1)
	{m=10*m+n%10;
	n=n/10;}

	if(m==t)
		return 1;
	else return 0;
	
}
int su(long n)
{
	long m,i,k;
	if(n==2)
		return 1;
	else if(n%2==0)
		return 0;
	else for(i=3;i<n/2;i++)
		if(n%i==0)
			return 0;
		return 1;
}

void main()
{
	long m,n,i,k,b[300];
	scanf("%ld%ld",&m,&n);
	for(i=m,k=0;i<=n;i++)

		if(su(i)*huiwen(i)==1)
		{b[k]=i;
		k++;}
		if(k==0)
			printf("no");
		else
		{
			printf("%ld",b[0]);
			if(k>1)
				for(i=1;i<k;i++)
					printf(",%d",b[i]);
		}
}