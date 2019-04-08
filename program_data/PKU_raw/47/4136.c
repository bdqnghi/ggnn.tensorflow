int main()
{
	int n,i;
	cin>>n;
	int x[n+1];
	for(i=n;i>=1;i--)
	cin>>x[i];
	for(i=1;i<n+1;i++)
	{
		if(i==1)
		cout<<x[i];
		else
		cout<<" "<<x[i];
	}
	return 0;
}