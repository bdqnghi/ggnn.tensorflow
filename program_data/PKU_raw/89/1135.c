struct shehui
{
	int x;
}a[10000];
int main()
{
	int n, i, j, count = 0; 
	cin >> n;
	do
	{
		cin >> i >> j;
		a[j].x++;
	}while (i != 0 || j != 0);
	for (i = 0; i < n; i++)
	{
		if (a[i].x == n - 1)
		{
			count++;
			cout << i << endl;
		}
	}
	if (count == 0)
		cout << "NOT FOUND" << endl;
	return 0;
}
