
int main()
{
	int n,a[120],i,temp;
	int *p = NULL;//????
	p = a;
	cin >> n;
	for ( i = 0 ; i < n; i ++ )  cin >> a[i];
	for ( i = 0 ; i < n / 2 ; i ++ )//?????
	{
		temp = *(p + i);
		*(p + i) = *(p + n - 1 - i);
		*(p + n - 1- i ) = temp;
	}
	cout << a[0];
	for ( i = 1 ; i < n; i ++) cout << ' ' << a[i];
	return 0;
}