

int ans;

void dfs(int, int);

int main()
{
	int n, num;
	cin >> n;
	while (n--) {
		cin >> num;
		ans = 0;
		dfs(num, 2);
		cout << ans <<endl;		
	}
	return 0;
}

void dfs(int x, int f)
{
	if (x == 1) {
		++ans;
		return ;
	}
	for (int i = f; i <= x; ++i) 
		if (x % i == 0) 
			dfs(x / i, i);
	return ;
}