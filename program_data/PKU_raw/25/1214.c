int main()
{
	int a[101]={0},b[101]={0},I=0;
	a[0]=1;
	int n;
	cin>>n;
	for(int j=1;j<=n;j++)
	{
		for(int i=0;i<101;i++)
		{
			a[i]=a[i]*2;
			if(a[i]>=10)
			{
				a[i]-=10;
				b[i+1]++;
			}
		}
		for(int i=0;i<101;i++)
		{
			a[i]=a[i]+b[i];
			b[i]=0;
		}
	}
	for(int i=99;i>=0;i--)
	{
		if(a[i]!=0)I++;
		if(I>0)
			cout<<a[i];
	}
	return 0;
}

