int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<a[0];
	for(int i=1;i<n;i++)
		for(int j=0;j<i;j++)
		{
			if(a[i]==a[j])
				a[i]=1;
		}
	for(int i=1;i<n;i++)
	{
		if(a[i]>1)
			cout<<" "<<a[i];
	}
	return 0;


}
