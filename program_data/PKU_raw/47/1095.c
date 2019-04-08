int main()
{
	int n;
	cin>>n;
	int i,a[100]={0};
    for(i=1;i<=n;i++)
		cin>>a[i];
	int j=0,b=n/2,t;
	for(j=0;j<=b;j++)
	{
		t=a[j];
		a[j]=a[n-j];
		a[n-j]=t;
	}
	int x=1;
	for(i=0;i<n;i++)
	{
		if(x==1)
		{
			cout<<a[0];
			x=0;
		}
		else
			cout<<" "<<a[i];

	}
	return 0;
	}
