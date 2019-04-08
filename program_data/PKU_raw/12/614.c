int main()
{
	int a[17] , i , j , k;
	for (i = 1 ; i <= 16 ; i++)
	{
		a[i] = 1;
	}
	int count = 0;
	while (cin >> a[1])
	{
		if (a[1] == -1)
		{
			break;
		}
		else
		{
            for (i = 2 ; a[i - 1] != 0 ; i++)
			{
			   cin >> a[i];
			}
		}
		i = i - 2;
	    for (j =1 ; j <= i ; j++)
		{
			for (k=1 ; k <= i ; k++)
			{
				if (a[k] == 2 * a[j])
				{
					count++;
					break;
				}
			}
		}
		cout << count << endl;
		count = 0;
	}
	return 0;
}
