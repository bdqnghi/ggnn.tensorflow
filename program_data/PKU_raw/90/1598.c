

int f2(int m,int n)
{
	int N1;
	if (m == 0 || n == 0)
		return 0;
	if (n == 1 || m == 1)
		return 1;
	if (m < n)
		return f2(m,m);
	if (n == m)
		return f2(m,n-1) + 1;
	if(m > n)
		return f2(m,n-1)+f2(m-n,n); 
}

int main()
{
	int t,m,n,N,i;
	cin >> t;
	for (i = 1; i <= t;i++)
	{
		cin >> m >> n;
		N = f2(m,n);
		cout << N << endl;
	}
	cin.get();
	cin.get();	
	return 0;
}