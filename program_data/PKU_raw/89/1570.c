
int main()
{
	int n;
	int a[10000], b[10000], sumA[10000] = {0}, sumB[10000] = {0}, flag = 0;
	cin >> n;
	int s = 0;
	cin >> a[s] >> b[s];
	while (a[s] != 0 || b[s] != 0)
	{
        sumA[a[s]]++;
        sumB[b[s]]++;
		s++;
		cin >> a[s] >> b[s];
	}
	for (int i = 0; i < n; i++)
	{
		if (sumA[i] == 0 && sumB[i] != 0)
		{
			cout << i << endl;
			flag = 1;
		}
	}
	if (!flag)
	{
		cout << "NOT FOUND" << endl;
	}

	return 0;
}
