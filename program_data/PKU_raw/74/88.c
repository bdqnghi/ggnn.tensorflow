int sushu(long n)
{
	int i;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			return(0);
			break;
		}
	}
	if(i>sqrt(n))
		return(1);
}
int huiwen(long n)
{
	long s=0,k;
	k=n;
	while(n>0)
	{
		s=s*10+n%10;
		n=n/10;
	}
	if(k==s)
		return(1);
	else
		return(0);
}
void main()
{
	long m,n,i,j,k,s=0;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(sushu(i)&&huiwen(i))
			s=s+1;
	}
	if(s==0)
		printf("no\n");
	for(i=m;i<=n;i++)
	{
		if(sushu(i)&&huiwen(i))
		{
			printf("%d",i);
			k=i;
			
			break;
		}
	}
	for(j=k+1;j<=n;j++)
	{
		if(sushu(j)&&huiwen(j))
		{
			printf(",%d",j);
		
		}
	}
	printf("\n");

	
}