int main()
{
	int a[100];
	int i,t,n;
	cin>>n;
	for(int i=0;i<=n-1;i++)
		cin>>a[i];
	if(n/2==1)
	{
		for(i=0;i<(n-1)/2;i++)
			{
				a[n-1-i]=t;
				a[n-1-i]=a[i];
				a[i]=t;
		}
	}
	else
	{
		for(i=0;i<=(n-1)/2;i++)
		{
			t=a[i];
			a[i]=a[n-1-i];
			a[n-1-i]=t;
		}

	}
	for(i=0;i<=n-2;i++)
		cout<<a[i]<<" ";
		cout<<a[n-1];
return 0;
}


		
