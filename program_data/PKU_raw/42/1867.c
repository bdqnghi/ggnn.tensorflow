
int main()
{
	int a[100000];
	int n, i, j, l, u, num, k = 0;

	cin >> n;
	for(i = 0; i < n; i++)
		cin >> a[i];
	cin >> num;
	for(j = 0; j< n; j++)
	{
		if( a[j] == num)
		{	
		    k++;
			for(l = j; l < n - k; l++)
				a[l] = a[l + 1];
			j = j - 1;
			a[n - k] = num - 1;

		}

	}

	for(u = 0; u < n - k - 1; u++)
		cout << a[u] << " ";
	cout << a[n - k - 1];
	    return 0;
}
