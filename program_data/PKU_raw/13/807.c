int main()
{
	int a[20000],b[20000];
	int j=0,i=0,n=0,e=0;
	cin>>n;
	for(i=0;i<=n-1;i++)
	{
		cin>>a[i];
        b[j]=a[i];
        j=i+1;
	}
	for(i=0;i<=n-1;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if(a[i]==b[j])
			{
			   b[j]=0;
			}
		}
	}
	cout<<b[0];
	for(j=1;j<=n-1;j++)
	{
		if(b[j]!=0)
		cout<<" "<<b[j];
	}
	return 0;
}
