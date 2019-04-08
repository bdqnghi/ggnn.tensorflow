void main()
{
	int sushu(int);
	int huiwen(int);
	int i,m,n,s=0;
	int a[50]={0};
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(sushu(i)&&huiwen(i))
		{
		a[s]=i;
		s=s+1;
		}
	}
	if(s==0)
		printf("no");
	else
	{
		for(i=0;i<s-1;i++)
			printf("%d,",a[i]);
		printf("%d",a[s-1]);
	}
}

int sushu(int m)
{
	int i,k;
	k=sqrt(m);
	for (i=2;i<=k;i++)
	{
		if(m%i==0)
			break;
			
	}
	if(i>k)
		return(1);
	else
		return(0);
}
int huiwen(int m)
{
	int i,n,f,v=0;
	n=m;
	for(i=0;n!=0;i++)
	{
		f=n%10;
		v=v*10+f;
		n=n/10;
	}
	if(v==m)
		return(1);
	else
		return(0);
}

		