int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int *p=a;
	for(int i=n-1;i>=1;i--)
		cout<<*(p+i)<<" ";
	cout<<*p;
	return 0;
}