int main()
{
	int i,n,t,a[21],j;
	a[2]=a[1]=1;
	cin >> t;
	for(i=1;i<=t;i++)
	{
		cin >> n ;
		if(n<=2)
		{
			cout << 1 << endl;
			continue;
		}
		else
		{
			for(j=3;j<=n;j++)
				a[j] = a[j-1] + a[j-2] ;
		}
		cout << a[n] << endl ;
	}
	return 0;
}