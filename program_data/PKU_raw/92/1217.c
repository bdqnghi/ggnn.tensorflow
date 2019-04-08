int ans = 0;
int n;
int horses1[1001], horses2[1001];
void cal ()
{
	int pos;
	if (horses1[n -1] == -1) return;
	for (int i = 0 ; i < n ; i ++)
	{
		if (horses1[i] != -1)
		{
			pos = i;
			break;
		}
	}
	if (horses1[pos] > horses2[pos])
	{
		ans += 200;
		horses1[pos] = -1;
		horses2[pos] = -1;
		cal ();
		return;
	}
	if (horses1[pos] < horses2[pos])
	{
		ans -= 200;
		horses1[pos] = -1;
		for (int i = n - 1 ; i >= 1 ; i --)
			horses2[i] = horses2[i - 1];
		horses2[0] = -1;
		cal ();
		return;
	}
	if (horses1[n - 1] > horses2[n - 1])
	{
		ans += 200;
		for (int i = n - 1 ; i >= 1 ; i --)
			horses1[i] = horses1[i - 1];
		horses1[0] = -1;
		for (int i = n - 1 ; i >= 1 ; i --)
			horses2[i] = horses2[i - 1];
		horses2[0] = -1;
		cal ();
		return;
	}
	if (horses1[n - 1] < horses2[n - 1])
	{
		ans -= 200;
		horses1[pos] = -1;
		for (int i = n - 1 ; i >= 1 ; i --)
			horses2[i] = horses2[i - 1];
		horses2[0] = -1;
		cal ();
		return;
	}
	if (horses1[n - 1] == horses2[n - 1])
	{
		if (horses1[pos] < horses2[n - 1])
			ans -= 200;
		horses1[pos] = -1;
		for (int i = n - 1 ; i >= 1 ; i --)
			horses2[i] = horses2[i - 1];
		horses2[0] = -1;
		cal ();
		return;
	}
}
int main ()
{
	while (1)
	{
		cin >> n;
		if (n == 0) break;
		for (int i = 0 ; i < n ; i ++)
			cin >> horses1[i];
		for (int i = 0 ; i < n ; i ++)
			cin >> horses2[i];
		sort (horses1, horses1 + n);
		sort (horses2, horses2 + n);
		cal ();
		cout << ans << endl;
		ans = 0;
		/*
		for (int i = 0 ; i < n ; i ++)
			cout << horses1[i] << ' ';
		cout << endl;
		for (int i = 0 ; i < n ; i ++)
			cout << horses2[i] << ' ';
		cout << endl;
		*/
	}
	return 0;
}