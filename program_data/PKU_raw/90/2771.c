int ans(int x, int y)
{
	if (y == 1)return 1;
	if (x == y)return (ans(x, y - 1) + 1);
	if (x < y)return ans(x, x);
	if (x > y)return ans(x, y - 1) + ans(x - y, y);
}
int main()
{
	int t, m[100], n[100];
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> m[i] >> n[i];
		cout << ans(m[i], n[i]) << endl;
	}
	return 0;
}