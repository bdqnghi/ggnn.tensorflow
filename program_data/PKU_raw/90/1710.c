int main()
{
	int fang(int x, int y);
	int n, i, a, b;
	cin >> n;
	for(i = 1; i <= n; i++)
	{
		cin >> a >> b;
		cout << fang(a, b) << endl;
	}
	return 0;
}
int fang(int x, int y)
{
	if(x == 0 || y == 0)
		return 0;
	if(x < y)
	    return fang(x, x);
	if(x == y)
		return fang(x, y - 1) + 1;
	if(x > y)
		return fang(x, y - 1) + fang(x - y, y);
}