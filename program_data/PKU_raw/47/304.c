int main()
{
	int n;
	int a[102];
	cin>>n;
	for(int i = 0;i<n;i++)
	{
		cin>>a[i];
	}
	int c = 0;
	for(int k = n - 1;k>=0;k--)
	{
		cout<<a[k];
		c++;
		if(c != n)
			cout<<" ";
	}
}