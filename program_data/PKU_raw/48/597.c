int i, j, a[10][10] = {0}, b[10][10] = {0}, c, k, l;
void f(int n)
{
	if (n == 0)
	{
		for (j = 1; j <= 9; j++)
		{
			cout << a[j][1];
			for (l = 2; l <= 9; l++)
			{
				cout << " " << a[j][l];
			}
			cout << endl ;
		}
		return;
	}
	for (i = 0; i <= 80 ;i++)
	{
		if (b[i/9+1][i%9+1] != 0)
		{
			c = b[i/9+1][i%9+1];
			a[i/9+2][i%9+2] += c;
			a[i/9+2][i%9+1] += c;
			a[i/9+1][i%9+2] += c;
			a[i/9][i%9] += c;
			a[i/9+2][i%9] += c;
			a[i/9][i%9+2] += c;
			a[i/9+1][i%9] += c;
			a[i/9][i%9+1] += c;
			a[i/9+1][i%9+1] += b[i/9+1][i%9+1];
		}
	}
	for (k = 0; k <= 99; k++)
	{
		b[k/10][k%10] = a[k/10][k%10];
	}
		f(n-1);
}
int main()
{
	int d;
	cin >> a[5][5] >>d;
	b[5][5] = a[5][5];
	f(d);
	return 0;
}