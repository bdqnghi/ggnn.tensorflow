int f(int n)
{
	int i,k;
	k=(int)sqrt(n);
	for(i=2;i<=k;i++)
	{
		if(n%i==0)break;
	}
	if(i>k)return 1;
	else return 0;
}
int main()
{
	int n,i,j;
	scanf("%d",&n);
    for(i=6;i<=n;i+=2)
	{
		for(j=3;j<i;j+=2)
		{
			if(f(j)&&f(i-j))
			{
				printf("%d=%d+%d\n",i,j,i-j);
				break;
			}
		}
	}
	return 0;
}