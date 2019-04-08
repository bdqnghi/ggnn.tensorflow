int main()
{
	int a[200];
	int i;
	int j;
	int *p1;
	int *p2;
	int n;
	int m;
	cin>>n;
	cin>>m;
	for(i=0;i<=n-1;i++)
		cin>>a[i];


	p2=a+n-m;
	p1=a;
	int temp;

	for(i=0;i<=n-m;i++)
	{
		a[n+i]=*(p1+i);
	}
	for(i=0;i<=n-2;i++)
	cout<<*(p2+i)<<' ';
	cout<<*(p2+n-1);
	return 0;


}