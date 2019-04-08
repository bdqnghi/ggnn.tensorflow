//***********************
//??????**
//???4.cpp**
//???2012.11.16**
//***********************

int main ()
{
	int i, j, n, k;
	char a[500];
	cin >> a;
	n = strlen(a);
    for (i = 2; i <= n; i ++)
	{
		for (j = 0; j <= n - i; j ++)
		{
			for (k = j; k <= j + i / 2; k ++)
			{
				if (a[k] == a[i + 2 * j - 1 - k])
					continue;
				else
					break;
			}
			if (k > j + i / 2)
			{
				for (k = j; k < j + i; k++)
					cout << a[k];
				cout << endl;
			}	
		}
	}
	return 0;
}

