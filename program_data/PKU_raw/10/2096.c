
int main()
{
	int n;
	int a[30],b[30];
	for(int i=0;i<30;i++)
	{
		a[i]=b[i]=1;
	}
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=n-2;i>=0;i--)
	{
		int max=1;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>=a[j])
			{
				if(1+b[j]>max)
				max=1+b[j];
			}
		}
		b[i]=max;
	}
	int max=0;
	for(int i=0;i<n;i++)
	{
		if(b[i]>max)
		{
			max=b[i];
			
		}
	}
	cout<<max<<endl;
	return 0;
}
