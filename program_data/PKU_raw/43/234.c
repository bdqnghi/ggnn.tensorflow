int main()
{
    int su(int x);
	int n,i,j;
	scanf("%d",&n);
	for(i=3;i<=n/2;i+=2)
	{
		j=n-i;
		if(su(i)&&su(j))printf("%d %d\n",i,j);
	}
}
int su(int x)
{
	int i,z=1;
	if(x==2)z=1;
	else
	{
		for(i=2;i<=sqrt(x);i++)
		{
			if(x%i==0)
			{
				z=0;
				break;
			}
		}
	}
	return z;
}