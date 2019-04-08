
int fibo(int, int, int);

int main()
{
	int n, a;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{	
		cin >> a;
		cout << fibo(a, 1, 1) << endl;
	}
	return 0;
}

int fibo(int a, int b, int e)
{
	if (a <= 2)
		return e;
	else
		fibo(a - 1, e, b + e);
}
