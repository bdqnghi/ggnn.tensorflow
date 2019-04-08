//*****************************
//*??? : ???????????? *
//*??   : ???                   *
//*??   : 2011?10?               *
//*****************************
int main ()
{
	int t, i, j, g = 0, k, m, count = 0;
	char a[1000];
	cin >> t;
	cin.get();
    for (k = 1; k <= t; k++)
	{
		cin.getline(a, 10000, '\n');
		m = strlen(a);
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < m; j++)
			{
				if (a[i] == a[j])
				{
					count++;
				}
			}
			if (count == 1)
			{
				cout << a[i] << endl;
				g = 1;
				count = 0;
				break;
			}
			count = 0;
			g = 0;
		}
		if (g ==0) cout << "no" <<endl;
	}
	return 0;
}

