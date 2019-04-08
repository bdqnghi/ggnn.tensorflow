
int main()
{
	char a[100];
	int ans[100] = {0};
	cin >> a;
	int t = a[0] - '0', c = 0, d = 0;
	for (int i = 1; a[i] != 0; i++)
	{
		ans[i] = (10 * t + (a[i] - '0')) / 13;
		t = (10 * t + a[i] - '0') % 13;
		c++;
	}
	if (ans[1] == 0 && ans[2] != 0)
	{
		for (int i = 2;i <= c; i++)
		{
			cout << ans[i];
		}
		cout << endl;
	}
	else if (ans[1] == 0 && ans[2] == 0) cout << 0 << endl;
	else 
	{
		for (int i = 1;i <= c; i++)
		{
			cout << ans[i];
		}
		cout << endl;
	}
	cout << t << endl;
	return 0;
}
