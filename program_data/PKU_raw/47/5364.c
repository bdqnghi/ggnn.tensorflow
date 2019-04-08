int main()
{
	int i,n,a[100];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	int *p = NULL;
	p = &a[n-1];
	while(i>1)
	{
		cout<<*p<<" ";
		i--;
		p--;
	}
	cout<<*p;
	return 0;
}