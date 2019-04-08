int sushu(int x)
{
	int i,t=0;
	if (x%2!=0)
	{
		for (i=3;i<=sqrt(x);i=i+2)
			if (x%i==0)
				break;
		if (i>sqrt(x))
			return(1);
		else return(0);
	}
	else return(0);
}
int huiwen(int x)
{
	int n=0,m=x;
	while(m!=0)
	{
		n=n*10+m%10;
		m=m/10;
	}
	if (n==x)
		return(1);
	else return(0);
}
void main()
{
	int m,n,i,t=0;
	scanf("%d%d",&m,&n);
	for (i=m;i<=n;i++)
		if (sushu(i)&&huiwen(i)&&t==0)
		{
			printf("%d",i);
			t=1;
		}
		else if (sushu(i)&&huiwen(i))
			printf(",%d",i);
	if (t==0)
		printf("no");
	printf("\n");
}
