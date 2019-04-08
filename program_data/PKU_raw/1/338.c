void fenjie(int, int, int);
int g_num, g_count;
int main()
{
	int n, i;
	cin >> n;
	for(i = 1; i <= n; i++ )
	{
		g_count = 0;
		cin >> g_num;
		fenjie(2, g_num, 1);
		cout << g_count << endl;
	}
	return 0;
}
void fenjie(int a, int num, int sum)
{
	while( a <= g_num )
	{
		sum *= a;
		if( sum == g_num )
			g_count++;
		if( sum < g_num )
			fenjie(a, g_num, sum);
		if( sum > g_num )
			return;
		sum /= a;
		a++;
	}
}