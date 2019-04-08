char a[100];
int b[100] = {0};
void f(int i)
{
	int j, k;
	if (i == 0)
		a[100] = '1';
	else
	{
		a[100] = '1';
		for (j = i; j >= 1; j--)
		{
            for (k = 100; k >= 0; k--)
			{
				a[k] = (a[k] - '0') * 2 + '0';
				if (b[k] == 1)
					a[k]++;
				if (a[k] - 10 >= '0')
				{
					a[k] -= 10;
					b[k - 1]++;
				}
			}
			memset(b, 0, sizeof(b));
		}
	}
	for (j = 0; j <= 1000; j++)
	{
		if (a[j] != '0')
		{
			for (k = j; k <= 100; k++)
				cout << a[k];
			cout << endl;
			break;
		}
		} 
}
int main()
{
	int i;
	cin >> i;
	memset(a, '0', sizeof(a));
	f(i);
	
	return 0;

}