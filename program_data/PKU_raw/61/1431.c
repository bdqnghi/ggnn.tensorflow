
int main()
{
	int n;
	int a;
	int i,f[21];

	cin >> n;
	while(n--)
	{
		cin >> a;
		f[1] = 1;
		f[2] = 1;
		if(a >=3)
		{
			for(i = 3; i <=a; i++)
				f[i] = f[i-1] + f[i-2];
		}
		cout << f[a] << endl;
	}
}
