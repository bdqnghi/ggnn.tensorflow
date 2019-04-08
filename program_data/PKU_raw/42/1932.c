int main()
{
	long int a[100001], k;
	int i, j, n;
	cin >> n;
	for (i = 1; i <= n; i++)
	  cin >> a[i];
	cin >> k;
	for (i = 1; i < n; i++)
	{
		if (a[i] != k)
		  continue;
		for (j = i + 1; (j <= n) && (a[j] == k); j++);
		if (j > n)
		  break;
		a[i] = a[j];
		a[j] = k;
	}
	if (a[1] != k)
	  cout << a[1];
	for (i = 2; (i <= n) && (a[i] != k); i++)
	  cout << ' ' << a[i];
	return(0);
 } 