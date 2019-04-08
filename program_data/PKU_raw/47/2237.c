int main()
{
	int a[110],*p,n,*i,*j;
	cin>>n;
	for(i=a;i<a+n;i++)
	{
		cin>>*i;
	}
	for(j=a+n-1;j>a;j--)
	{
		cout<<*j<<' ';
	}
	cout<<*a;
	
	return 0;
}