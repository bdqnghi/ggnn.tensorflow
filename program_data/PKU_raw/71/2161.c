

int run_check(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 1;
	return 0;
}

int t[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int y, a, b, s = 0;
		cin >> y >> a >> b;
		if (a > b) swap(a, b);
		if (run_check(y))
			t[2]++;
		for (int j = a; j < b; j++)
			s += t[j];
		if(s % 7) cout << "NO\n";
		else cout << "YES\n";
		if (run_check(y))
			t[2]--;
	}
	
    return 0;
}
