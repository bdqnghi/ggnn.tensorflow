
int main()
{
	int w, n = 0; 
	cin >> w; 
	int a[365];
	memset(a, 0, sizeof(a));
	int b[12] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
	
	for (int i = 0; i < 51; i++)
	{
		int n = 7 * i + 13 - w;
		a[n] = 1; 
	}
	
	for (int i = 0; i < 12; i++)
	{
		n += b[i];
		a[n+13] += 1; 
		if (a[n+13] == 2)
		cout << i + 1 << endl;
	}
	return 0;
}