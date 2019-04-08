int counts = 1;
int ty(int, int);
int main()
{
	int i, m, n, c;
	cin >> m;
	for(i = 1 ; i <= m ; i++)
	{
		cin >> n;
		counts = 1;
		c = ty(n, 2);
		cout << c << endl;
	}
	return 0;
}

int ty(int n, int j)
{
	int i, flag = 0;
	if(n == 1)
	{
		return 0;
	}
	if(n == 2)
	{
		return 1;
	}
	for(i = j ; i <= (int)sqrt(n) ; i++)
	{
		if(n % i == 0)
		{
			counts++;
			ty(n / i, i);
		}
	}
	return counts;
}
