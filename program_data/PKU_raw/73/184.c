
int main()
{
	int a[5][5], i, j, k, flag = 0;
	int lineMax = 0, columnMin = 0, ione = 0, jone = 0 , itwo = 0;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
		{
			cin >> a[i][j];
		}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (j == 0)
			{
				lineMax = a[i][0];
				ione = i;
			}
			else
				if (lineMax < a[i][j])
				{
					lineMax = a[i][j];
					jone = j;
					ione = i;
				}
		}

		for (k = 0; k < 5; k++)
		{
			if (k == 0)
				columnMin = a[0][jone];
			else
				if (columnMin > a[k][jone])
				{
					columnMin = a[k][jone];
					itwo = k;
				}
		}
		if (itwo == ione)
		{
			cout << itwo + 1 << " " << jone + 1 << " " << a[itwo][jone] << endl;
		    flag = 1;
		}
		lineMax = 0; columnMin = 0; ione = 0; jone = 0; itwo = 0;
	}
	if (flag == 0)
		cout << "not found" << endl;
	return 0;
}