int issushu(int x);
int main()
{
	int n,i,flag=0;

	scanf("%d",&n);
	for(i=1;i<=n-2;i++)
	{
		if(issushu(i)&&issushu(i+2))
		{
			printf("%d %d\n",i,i+2);
			flag=1;
		}
	}
	if(flag==0) printf("empty");
	

	return 0;
}

int issushu(int x)
{
	int j;
	if(x<2) return 0;
	else if(x==2) return 1;
	else
	{
		for(j=2;j<x;j++)
		{
			if(x%j==0) return 0;
		}
	}
	return 1;
}