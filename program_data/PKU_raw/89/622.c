//* * * * * * * * * * * * * * * * * * * * * * * * 
//*??????????                         *
//*??????????.cpp                     *
//*?????  1000012839                       *
//*???2010.12.10                             *
//* * * * * * * * * * * * * * * * * * * * * * * * 


int main()
{
	int n;
	int celebrity[10000] = {0};
	int a[90000][2];
	int i, j, k, flag, count;

	cin >> n;
	for (i = 0; i < n; i++)
		celebrity[i] = 1;
	i = 0;
	while (1)
	{
		cin >> a[i][0] >> a[i][1];
		if (a[i][0] == 0 && a[i][1] == 0)
			break;
		else
			i++;
	} 
	flag = 0;
	for (k = 0; k < n; k++)
	{
		for (j = 0; j <= i - 1; j++)
		{
			if (a[j][0] == k)
				celebrity[k] = 0;
		}
	}
	for (k = 0; k < n; k++)
	{
		if (celebrity[k] == 1)
		{
			count = 0;
			for (j = 0; j <= i - 1; j++)
				if (a[j][1] == k)
					count++;
			if (count == n - 1)
			{
				flag = 1;
				cout << k << endl;
			}
		}
	}
	if (!flag)
		cout << "NOT FOUND" << endl;
	return 0;
}





