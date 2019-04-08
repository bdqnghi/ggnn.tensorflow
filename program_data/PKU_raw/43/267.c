int zhishu(int x)
{
	int flag=1;
	for(int i=2;i<=x/2;i++)
	{
		if(x%i==0)
		{
			flag=0;
		}
	}
	return flag;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=3;i<=n/2;i++)
	{
		if(zhishu(i)&&zhishu(n-i))
		{
			printf("%d %d\n",i,n-i);
		}
	}
	return 0;
}
