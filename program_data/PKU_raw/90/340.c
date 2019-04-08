/*???
???*/
int sum(int m, int n, int lim)//m????n???????????
{
	if(n == 1 && m <= lim)
		return 1;
	if(n == 1 && m > lim)
		return 0;
	if (m == 0)
		return 1;
	int max, i, a;
	if(m % n == 0)
		max = m / n;
	else
		max = m / n + 1;

	a = 0;
	if(lim > m)
		lim = m;
	for (i = lim; i >= max; i--)
		a += sum(m - i, n - 1, i);
	return a;
}
int main ()
{
	int m, n, k, i;
	cin >> k;
	for(i = 1; i <= k; i++)
	{
		cin >> m >> n;
		cout << sum(m,n,m) << endl;
	}
	return 0;
}

