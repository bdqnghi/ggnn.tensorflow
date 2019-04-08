

int main()
{
	char a[1001];
	a[0] = '2';
	int b, i, j, k = 0, k1 = 0;
	cin >> b;
	if (b == 0)
		cout << "1" << endl;
	else
	{
		for (i = 1; i < 1001; i++)
			a[i] = '0';
		for (i = 1; i < b; i++)
		{
			for (j = 0; j <1001; j++)
			{
				k = (a[j] - '0') * 2 / 10;
				a[j] = (a[j] - '0') * 2 % 10 + k1 + '0'; 
				k1 = k;
			}
		}
		k = 0;
		for(i = 1000; i >= 0; i--)
		{
			if (a[i] !='0')
				k = 1;
			if (k == 1)
				cout << a[i];
		}
		cout << endl;
				
	}
	return 0;
}