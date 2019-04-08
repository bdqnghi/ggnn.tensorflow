int main()
{
	char a[101];
	memset(a, 0 , sizeof(a));
	int i, j, n, flag = 0;
	cin >> n;
	a[100] = 1;
	for(i = 0 ; i < n ; i++)
	{
		j = 100;
		do
		{
			a[j] = 2 * a[j];
			j--;
		}while(!(a[j] == 0 && a[j - 1] == 0 && a[j - 2] == 0 ));
		j = 100;
		do
		{
			if(a[j] >= 10)
			{
				a[j] = (int)a[j] % 10;
				a[j - 1] += 1;
			}
			j--;
		}while(!(a[j] == 0 && a[j - 1] == 0 && a[j - 2] == 0 ));
	}
	for(i = 0 ; i <= 100 ; i++)
	{
		if(a[i] == 0 && flag == 0)
		{
			continue;
		}
		else
		{
			flag = 1;
			cout << (int)a[i];
		}
	}
	return 0;
}
