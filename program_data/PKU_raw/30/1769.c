int res[102];
int n;
int main()
{
	cin >> n;
	memset(res, 0, sizeof(n));
	for(int i = 1; i <= 100; i++)
	{
		if(i % 10 == 7 || i % 7 == 0 || i / 10 == 7)
			res[i] = res[i - 1];
		else
			res[i] = res[i-1] + i * i;
	}
	cout << res[n] <<endl;
	return 0;
}