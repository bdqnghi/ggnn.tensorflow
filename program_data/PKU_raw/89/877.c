int main()
{
	int n,a[10000][2] = {0},i,k[2],tf = 1;
	cin >> n;
	while (1)
	{
		cin >> k[0] >> k[1];
		if ((k[0] == 0)&&(k[1] == 0))
			break;
		a[k[0]][0]++;
		a[k[1]][1]++;
	}
	for (i = 0;i < n;i++)
	{
		if ((*(*(a + i)) == 0)&&(*(*(a + i) + 1) == n - 1))
		{
			cout << i << endl;
			tf = 0;
		}
	}
	if (tf == 1)
		cout << "NOT FOUND" << endl;
	return 0;
}