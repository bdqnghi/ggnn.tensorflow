int main()
{
	int	n;
	cin >> n;
	double	a[n + 1], c[n + 1];
	int	i;
	double	b[n + 1];
	memset(a, 0, sizeof(a));
	memset(c, 0, sizeof(c));
	memset(b, 0, sizeof(b));
	for (i = 1; i <= n; i ++)
	{
		cin >> a[i];
		cin >> c[i];
		b[i] = (double)(c[i] / a[i]); 
	}
	for (i = 2; i <= n; i ++)
	{
		if (b[i] - b[1] < (-0.05))
		{
			cout << "worse" << endl;
		}
			else if (b[i] - b[1] > (0.05))
			{
				cout << "better" << endl;
			}
				else
				{
					cout << "same" << endl;
				}
	}	
return 0;
}