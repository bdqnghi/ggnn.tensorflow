
int f(int, int);
int main()
{
	int x, n, i;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> x;
		cout << f(x, 2) << endl;
	}
	
	return 0;
}


int f(int x, int i)
{
	int ans = 0;
	if (x == 2)
	{
		return 1;
	}
	else 
	{
		for (; i <= sqrt(x); i++)
		{
			if (x % i == 0)
			{
				ans = ans + f(x / i, i);
			}
		}
		return ans + 1;
	}
}
		

