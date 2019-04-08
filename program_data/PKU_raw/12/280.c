int main()
{
	int a[15] = {0}; 
	int j=1, i, m, k;
	cin >> a[0];
    do
	{
		m = 0;
		k = 0;
		for (i=1;i<15;i++)
		{
			cin >> a[i];
			if (a[i] == 0 )
				break;
			else
				j++;
		}
		for (i=0;i<=j-1;i++)
		{
			for (k=0;k<=j-1;k++)
			{
				if (a[k] == 2*a[i])
					m++;
			}
		}
		cout << m << endl;
		cin >> a[0];
		if (a[0] == 0)
			cin >> a[0];
		j = 1;
	}while (a[0] != -1);
	return 0;
}