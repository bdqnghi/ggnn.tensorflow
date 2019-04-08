const int N = 1000000;
int cnt[N] = {0};
int main()
{
	int n;
	cin >> n ;
	int a, b;
	int ans = -1;
	while (true)
	{
		cin >> a >> b;
		if ( a == 0 && b == 0) break;
		cnt[b]++;
		if (cnt[b] == n-1)
			ans = b;
	}
	if (ans == -1)
		cout << "NOT FOUND" << endl;
	else
		cout << ans << endl;
}