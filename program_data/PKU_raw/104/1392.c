int main()
{
	int m,n,s = 0;
	cin>>m>>n;
	int a[100];
	memset(a, 0, sizeof(a));
	a[0]=m;
	for(int i=0;i<=98;i++)
	{
		a[i+1]=a[i]/2;
		if(a[i+1]==1)
		{
			s=i+1;
			break;
		}
	}
	for(int h=0;h<=99;h++)
	{
		for(int i=0;i<=s;i++)
		{
			if(a[i]==n)
			{
				cout<<n;
				return 0;
			}
		}
				n=n/2;
	}
}

	
