int f(int m,int n);
int g(int m,int n)
{
	if (m == 0)
		return 1;
	if (m == 1)
		return 1;
	return f(m,n - 1) + f(m - n,n);
}
int f(int m,int n)
{   
	if (n == 1)
		return 1;
	if (m < n)
		return g(m,m);
	return f(m,n - 1) + f(m - n,n);
}
int main ()
{
	int m,n,t,i;
	cin >> t;
	for (i = 1;i <= t;i++)
	{
		cin >> m;
		cin >> n;
		cout << f(m,n) << endl;
	}
	return 0;
}


