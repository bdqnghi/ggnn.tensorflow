int iszhishu(int n)
{
	int i,sum=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{sum=sum+1;}	
	}
        if(sum==0) return 1;
		else return 0;
}

int main()
{
	int m,i;
	scanf("%d",&m);
	for(i=3;i<=m/2;i++)
	{
		if(iszhishu(i)&&iszhishu(m-i))
			printf("%d %d\n",i,m-i);
	}

	return 0;
}