int main()
{
	char sex[41][7], flag[7] = {'m', 'a', 'l', 'e'};
	double maleheight[40], femaleheight[40], t;
	int n, i, j, m = 1, f = 1;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
        cin >> sex[i];
		if (strcmp(sex[i], flag) == 0)
		{
			cin >> maleheight[m];
			m++;
		}
		else
		{
			cin >> femaleheight[f];
			f++;
		}
	}
	m--;
	f--;
	for (i = 1; i < m; i++)
	{
		for (j = i + 1; j <= m; j++)
		{
			if (maleheight[i] > maleheight[j])
			{
				t = maleheight[i];
				maleheight[i] = maleheight[j];
				maleheight[j] = t;
			}
		}
	}
	for (i = 1; i < f; i++)
	{
		for (j = i + 1; j <= f; j++)
		{
			if (femaleheight[i] < femaleheight[j])
			{
				t = femaleheight[i];
				femaleheight[i] = femaleheight[j];
				femaleheight[j] = t;
			}
		}
	}
	for (i = 1; i <= m; i++)
	{
		cout << fixed << setprecision(2) << maleheight[i] << " ";
	}
	for (i = 1; i <= f; i++)
	{
		cout << fixed << setprecision(2) << femaleheight[i];
		if (i != f)
		{
			cout << " ";
		}
		else
		{
			cout <<endl;
		}
	}
	return 0;
}