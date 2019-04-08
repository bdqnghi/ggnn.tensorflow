
int f(int a)
{
	int i;
	for(i=3;i<=sqrt(a);i+=2)
	{
		if(a%i==0)
		{
			return(0);
			break;
		}
	}
	return(1);
}

int g(int b)
{
	int n=0,i;
	int c;
	c=b;
	while(c>0)
	{
		n=n*10+c%10;
		c=c/10;
	}
	if(n==b)
		return(1);
	else 
		return(0);


}


main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	if(m<=2)
		printf("2,");
	int j;
	int flag=0;
	if(m%2==0)
		m=m+1;
	for(j=m;j<=n;j+=2)
	{
		if(g(j)&&f(j))
		{
			flag=1;
			printf("%d",j);
			break;
		}
	}
	if(flag==0)
		printf("no");
	for(j=j+2;j<=n;j+=2)
	{
		if(f(j)&&g(j))
		{
			flag=1;
			printf(",%d",j);
		}
	}
}




