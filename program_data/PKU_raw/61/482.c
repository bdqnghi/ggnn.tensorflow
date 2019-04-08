
int main ()
{
	int f[21];
	f[0] = 1;
	f[1] = 1;
	f[2] = 1;
	for (int i = 3; i <= 20; i ++)
	{
		f[i] = f[i-1] + f[i-2];
	}
	int n;
	cin >> n;
	for (int i = 0; i < n; i ++)
	{
		int a;
		cin >> a;
		cout << f[a] << endl;
	}
		
	return 0;
}