int main ()
{
	int m, n, i,j = 0, k = 0;
	int *p = NULL;
	int a[200];
	cin >> n >> m;
	for(i = 0; i < n; i++)
		cin >> a[i];
	for(i = n; i < 2 * n - m; i++)
		a[i] = a[j ++];
	
	p  = a + n - m;
	for(i = 0; i < n - 1; i++)
	cout << *p++<< " ";
	cout << *p << endl;
	return 0;
}



