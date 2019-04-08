

int compare(const void *a, const void *b)
{
	return *(int*)a - *(int *)b;
}

int main()
{
	int n, a[100], b;
	a[0] = 1, a[1] =1;
	cin >> n;
	for (int i = 2; i <= 30; i ++)
	{
		a[i] = a[i-1] + a[i-2];
	}
	for (int i = 0; i < n; i ++)
	{
		cin >> b;
		cout << a[b-1] << endl;
	}
	return 0;
}