int way(int m, int n)
{
	if(n == 1)
		return 1;

	 if(m > n)
	 {
		return way(m, n - 1) + way(m - n , n);
	 }
	 if(m < n)
	 {
		return way(m, n - 1);
	 }
	 if(m == n)
		 return way(m, n - 1) + 1;
}

int main()
{
	int i, l, a, m, n;
	cin >> l;
	for(i = 1 ; i <= l ; i++)
	{
		cin >> m >> n;
		a = way(m, n);
		cout << a << endl;
	}

	return 0;
}
