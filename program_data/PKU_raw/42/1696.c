int main()
{
	int a[100000],i,k,n,t,m,b=0;
	cin>>n;
	for(i=0;i<=n-1;i++)
		cin>>a[i];
	cin>>k;
	for(t=1;t<=100;t++)
	{
		for(i=0;i<=n-1;i++)
		{
			if(a[i]==k)
			{
				b++;
				for(m=i;m<=n-1;m++)a[m]=a[m+1];
			}
		}
	}
	cout<<a[0];
	for(i=1;i<=n-b-1;i++)cout<<" "<<a[i];
	return 0;
}