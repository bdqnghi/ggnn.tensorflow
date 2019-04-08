int times (int,int);
int main ()
{
	int n, i, m,N, c;
	cin >> N;
	for (i = 1; i <= N ; i ++)
	{
		cin >> m >> n;
		c = times (m, n);
		cout << c << endl;
	}
	return 0;
}
int times (int x, int y)
{
	int time;
	if (x <= y)
	{
		y = x;
	}
	if (x == 1)
		return 1;
	if (y == 1)
		return 1;
	if (x == 0)
		return 1;
	if (1)
	{
		time = times (x , y - 1) + times (x - y, y);
		return time;
	}
}
	