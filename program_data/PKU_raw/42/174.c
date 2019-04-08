int main ()
{
	int a[100001] = {0};
	int n, i, k, sum;
	cin >> n;
	for ( i = 1; i <= n; i ++) //?????
		cin >> a[i];
	cin >> k;
	sum = 1;                   //sum????????1
	for ( i = 1; i <= n; i ++)
	{
		if ( a[i] != k ) //??????sum??
		{
			a[sum] = a[i];
			if (sum != 1)
				cout << ' ';//????????
			cout << a[sum];
			sum ++;
		}
	}
	return 0;
}