void main()
{
	int prime(int n);
	int palin(int n);
	int m,n,i=0;
	scanf("%d%d",&m,&n);
	for(;m<=n;m=m+1)
	{
		if(palin(m)==1 && prime(m)==1)
		{
			if(i==0)
				printf("%d",m);
			else
				printf(",%d",m);
			i=i+1;
		}
	}
	if(i==0)
		printf("no");
}

int prime(int n)
{
	int k=1,i;
	for(i=2;i<=sqrt(n);i=i+1)
	{
		if(n%i==0)
		{
			k=0;
			break;
		}
		else
			continue;
	}
	return(k);
}

int palin(int n)
{
	int a[5];
	int i,c,flag=1;
	c=log10(n);
	for(i=0;i<=c;i=i+1)
	{
		a[i]=n/pow(10,c-i);
		n=n-a[i]*pow(10,c-i);
	}
	for(i=0;i<=c;i=i+1)
	{
		if(a[i]==a[c-i])
			continue;
		else
		{
			flag=0;
			break;
		}
	}
	return(flag);
}
