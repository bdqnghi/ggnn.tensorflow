int a;
int fj(int x, int y);
int main()
{
	int n;
	cin >> n;
	int i;
	for (i = 1; i <= n; i++)
	{
	   cin >> a;
	   cout << fj(a, 2) << endl;
	}
	return 0;
}
int fj(int x, int y)
{
	int xnumber = 1;
	int i;
	int b = sqrt(x);
	if (x == 1) return 0;
	else 
		for (i = y; i <= b; i++)
		{
			if (x % i == 0) xnumber = xnumber + fj(x / i, i);
		}
		return xnumber;
}