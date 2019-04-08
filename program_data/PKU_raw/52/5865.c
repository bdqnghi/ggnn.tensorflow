/*************************
??cpp1
????
???
2013/12/11
**************************/
int main()
{
	int a[103], *p = NULL, n, m, i, j, temp;
	cin >> n >> m;
	p = a;
	for (i=1; i<=n; i++)
		cin >> *p++;
	for (i=1; i <= m; i++)
	{
		temp = * (a+n-1);
		for (j=n-1; j>=1 ; j--)
			* (a+j) = * (a+j-1);
		*a = temp;
	}
	p = a;
	cout << *p;
	for (i=1; i <= n-1; i++)
		cout <<" " << * (++p);
	return 0;
}
