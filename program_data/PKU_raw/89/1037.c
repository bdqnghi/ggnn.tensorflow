int main ()
{
	int n, i, g = 0;
	cin >> n;
	int a1[1000000], a2[1000000], num[1000000] = {0};
	for (i = 0; i <= n * (n - 1); i++)
	{
		cin >> a1[i] >> a2[i];
		if (a1[i] == 0 && a2[i] == 0) break;
		num[a2[i]]++;
	}
	int *p=num;
	for (; p < num + n; p++)
	{
		if (*p == n - 1)
		{
			g = 1;
			cout << p - num;
		}	
	}
	if (g == 0) cout << "NOT FOUND";
	return 0;
}

