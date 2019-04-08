//*****************************
//*?????? 1300012809   **
//*???2013.11.16          **
//*?????2?N??        **
//*****************************
int main()
{
	int n, i, j, changdu;
	changdu = 1;
	int a[1005] = {0}, jieguo[1005] = {0};
	cin >> n;
	for (i = 0; i <= n; i++)
	{
		if (i == 0) a[0] = 1;
		if (i == 1) a[0] = 2;
		if (i != 0 && i != 1)
		{
			if (a[changdu-1] >= 5 ) changdu += 1;
			for (j = 0; j < changdu; j++)
			{
				a[j] = a[j]*2;
			}
			for (j = 0; j < changdu; j++)
			{
				a[j+1] = a[j] / 10 + a[j+1];
				a[j] = a[j] % 10 ;
			}

		}
	}
	for (j = changdu-1; j >= 0; j--) cout << a[j];
	cout << endl;

	

	return 0;
}