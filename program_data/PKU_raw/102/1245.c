int main ()
{
	int n, i, m, w, j;
	double height, temp;
	double man[50];
	double woman[50];
	char xb[10];
	cin >> n;
	m = 0;
	w = 0;
	for (i = 1; i <= n; i++)
	{
		cin >> xb;
		cin >> height;
		if (xb[0] == 'm') 
		{
			m++;
			man[m] = height;
		}
		else 
		{
			w++;
			woman[w] = height;
		}
	}
	for (i = 1; i <= m - 1; i++)
	{
		for (j = 1; j <= m - i; j++)
		{
			if (man[j] > man[j + 1]) 
			{
				temp = man[j];
				man[j] = man[j + 1];
				man[j + 1] = temp;
			}
		}
	}
	for (i = 1; i <= w - 1; i++)
	{
		for (j = 1; j <= w - i; j++)
		{
			if (woman[j] < woman[j + 1])
			{
				temp = woman[j];
				woman[j] = woman[j + 1];
				woman[j + 1] = temp;
			}
		}
	}
	cout << fixed << setprecision(2) <<man[1];
	for (i = 2; i <= m; i++)
	{
		cout << fixed << setprecision(2) << " " << man[i];
	}
	for (i = 1; i <= w; i++)
	{
		cout << fixed << setprecision(2) << " " << woman[i];
	}
	cout << endl;
	return 0;
}