
int main (void)
{
	int n, a[100], i, j;
	cin >> n;
	for (i = 0; i < n; i++)
		cin>> a[i];

	cout << a[n-1];
	for (i = n-2; i >= 0; i--)
		cout <<' '<<a[i];

	cout << endl;

	return 0;
}