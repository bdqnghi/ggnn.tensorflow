int f(int m,int n)
{
	if(n==1)
	{
		return 1;
	}
	if(m>=n)
	{
		return f(m,n-1)+f(m-n,n);
	}
	else
	{
		return f(m,n-1);
	}
}
int main()
{
	int n,m,t,i,k;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d %d",&m,&n);
		k=f(m,n);
		printf("%d",k);
		printf("\n");
	}
	return 0;
}








	














