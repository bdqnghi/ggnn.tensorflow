int main()
{
	int n=0,i=0,k=0,j=0,f=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	cin>>k;
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			f=f+1;
			for(j=i;j<n-1;j++)
				a[j]=a[j+1];
			i=i-1;
			a[n-1]=0;
		}
	}
	for(i=0;i<n-f;i++)
	{
		if(i<n-f-1)cout<<a[i]<<' ';
		if(i==n-f-1)cout<<a[i]<<endl;
	}
	return 0;
}
