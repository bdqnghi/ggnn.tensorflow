int main()
{
	int m=1;
	int n,k;
	int i,t;

	scanf("%d%d",&n,&k);
	for(m=1;;m++)
	{
		t=m;
		for(i=1;i<=n;i++)
		{
			if(t%n==k)
				t=t-t/n-k;
			else
				break;
		}
		if (i>n&&t>=1)
		{
			printf("%d\n",m);
			break;
		}
	}	
	return 0;
} 


