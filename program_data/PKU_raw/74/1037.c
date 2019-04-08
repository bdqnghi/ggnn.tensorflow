int huiwen(long n)
{
	int a[11],i=0;
	while(n!=0)
	{
		a[i]=n%10;
		i++;
		n=n/10;
	}
	int j;
	for(j=0;j<i/2;j++)
		if(a[j]!=a[i-1-j])
			return 0;
	return 1;
}
int sushu(long n)
{
	long i;
	for(i=2;i<=(long)sqrt(n);i++)
		if(n%i==0)
			return 0;
		return 1;
}
void main()
{
	int i,count=0;
	long m,n,temp;
	scanf("%ld%ld",&m,&n);
	if(m>n)
	{
		temp=m;
		m=n;
		n=temp;
	}
	for(i=m;i<=n;i++)
	{
		if(huiwen(i)&&sushu(i))
		{
			printf("%ld",i);
			count++;
			break;
		}
	}
	if(count==0)
		printf("no");
	else 
		for(i++;i<=n;i++)
		{
			if(huiwen(i)&&sushu(i))
				printf(",%ld",i);
		}
}