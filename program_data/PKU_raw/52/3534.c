//????
//2010?11?13?
//1000012753 ???
int main()
{
	int a[200], n, m, i, *p;
	cin >> n >> m;
	for (i = m; i < m + n; ++i)
		cin >> a[i];
	for (p = a + n; p < a + n + m; ++p)
		*(p - n) = *p;
	cout << *a;
	for (p = a + 1; p < a + n; ++p)
		cout << " " << *p;
	cout << endl;
	return 0;
}