
int fac(int);

int main()
{
	int n, y, times;
	cin >> times;
	for (int i = 0; i < times; i++)
	{
	    cin >> n;
	    y = fac(n);
	    cout << y << endl;
	}
	
	return 0;
}

int fac(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return fac(n - 1) + fac(n - 2);
}