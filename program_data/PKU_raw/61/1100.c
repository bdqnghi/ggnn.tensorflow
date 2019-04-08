int fei(int m)
{
	if (m == 1)
		return 1;
	if (m == 2)
		return 1;
	return fei(m - 1) + fei(m - 2);
}
int main()
{
	int n, i, a[20], num;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		num = fei(a[i]);
		cout << num << endl;
	}
	return 0;
}
