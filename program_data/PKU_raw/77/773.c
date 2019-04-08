char a[100];
void f(char a[], int n)
{
	int flag = 0, i, h = 0, k, sum = 1, m;
	for (i = 1; i <= n - 1; i ++)
	{
		switch (a[i])
		{
		case '(': 
			{
				m = 1; 
				break;
			}
		case ')': 
			{
				m = -1; 
				break;
			}
		case '*': 
			{
				m = 0; 
				break;
			}
		}
		sum = sum + m;
		switch (sum)
		{
		case 2: 
			{
				sum = sum - 1; 
				k = i;
				h = 1;
				break;
			}
		case 1:
			break;
		case 0:
			{
				flag = 1;
				if (h == 1)
				{
					cout << k << " " << i << endl;
					a[k] = '*';
					a[i] = '*';
				} 
				else
				{
					cout << "0 " << i << endl;
                }
			}
		}
		if (flag == 1)
			break;
	}
}

int main()
{
	int n, q = 0;
	cin >> a;
	n = strlen(a);
	for (q = 1; q <= n-1; q ++)
	{
		if (a[q] == a[0])
			a[q] = '(';
		else
			a[q] = ')';
	}
	for (q = 1; q <= (n/2); q ++)
		f(a, n);
	return 0;
}