int main()
{
	int n;
	cin>>n;
	int a[105];
	int i=0;
    int b;
	while(i<n)
	{
		cin>>a[i];
        i++;
	}
	int c=n-1;
	while(c>=1 && c<=(n-1))
	{
		cout<<a[c];
		cout<<" ";
		c--;
	}
	cout<<a[0];
	return 0 ;
}