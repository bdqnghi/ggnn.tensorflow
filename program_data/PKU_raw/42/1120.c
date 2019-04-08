int main()
{
	int n,i,j,a[1000000],k;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>k;
	for(i=0;i<n;i++)
	{
		if(a[i]!=k)
		{
			cout<<a[i];
			break;
		}
	}
	for(j=i+1;j<n;j++)
	{
		if(a[j]!=k)
			cout<<" "<<a[j];
	}
	return 0;
}
