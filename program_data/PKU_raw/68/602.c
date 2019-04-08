int prime(int k)
{
	if(k==2)
		return 1;
	else if(k%2==0)
		return 0;
	else if(k==3)
		return 1;
	else
	{
		int i;
		for(i=3;i<=sqrt(k);i=i+2)
		{
			if(k%i==0)
				return 0;
		}
		return 1;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=6;i<=n;i=i+2) 
	{
		int j;
		for(j=3;j<i;j=j+2)
		{
			if(prime(j)==1&&prime(i-j)==1)
			{	
				printf("%d=%d+%d\n",i,j,i-j);
				break;
			}
		}
	}
	return 0;
}