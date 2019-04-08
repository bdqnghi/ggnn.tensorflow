int main()
{
	int k;
	cin>>k;
	int a[30];
	int num[30];
	int i;
	for(i=1;i<=k;i++)
	{
		cin>>a[i];
		num[i]=0;
	}
	int max=0;
	for(i=k;i>=1;i--)
	{
		int m=0;
		for(int j=i+1;j<=k;j++)
		{
			if(a[i]>=a[j]&&num[j]>m)
			    m=num[j];
		}
		num[i]=1+m;
		if(num[i]>max)
			max=num[i];
	}
	cout<<max;

}

