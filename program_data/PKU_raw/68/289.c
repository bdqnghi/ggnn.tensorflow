int su(int i)
{
	int j;
	if(i==2)
		return 0;
	else if(i%2==0)
		return 1;
	else 
	{
		for(j=3;j<sqrt(i)+1;j=j+2)
		{
			if(i%j==0)
				return 1;
		}
                   return 0;
	}
}
int main()
{
	int su(int i);
	int m,t,n;
	scanf("%d",&m);
	for(n=6;n<m+1;n=n+2)
	{
	for(t=2;t<n/2+1;t++)
	{
		if(su(t)!=1)
		{ 
			if(su(n-t)!=1)
			{
			printf("%d=%d+%d\n",n,t,n-t);
			break;
			}
		}
	}
	}
	return 0;
}