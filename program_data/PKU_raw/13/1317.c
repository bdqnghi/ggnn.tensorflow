int main()
{
	int a[91];
	int i,n,number;
	cin >> n;
	memset(a,0,sizeof(a));
	cin >> number;
	a[number - 10]++;
		if ( a[number - 10] == 1)
			cout << number ;
	for (i = 1; i < n; i++)
	{
		cin >> number;
		a[number - 10]++;
		if ( a[number - 10] == 1)
			cout << " " << number ;
	}
	cout << endl;
return 0;
}