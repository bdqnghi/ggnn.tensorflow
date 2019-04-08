int main()
{
    int n, i, k, m, p, q, a[100000];
	cin >> n;
	p = 1;
	for(i = 0; i < n; i++)
		cin >> a[i];
	cin >> k;
	for(i = n - 1; i >= 0; i--)
	{
		if(a[i] == k)
		{
			for(m = i; m <= n - p; m++)
                a[m] = a[m + 1];
			p++;
			i++;
		}
	}
	for(q = 0; q <= n - p; q++)
	{	
		cout << a[q];
	    if(q != n - p)
			cout << " ";
	}
	return 0;
}