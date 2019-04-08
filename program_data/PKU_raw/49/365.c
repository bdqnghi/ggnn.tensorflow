int main()
{
	int i, j, k, l, m, flag;
	char a[501];
	for (m = 1; m > 0; m++)
	{
		if (a[m-1]== '\n')
			break;
		a[m] = cin.get();
	}
	for (j = 2; j <= m; j++)
	{
		for (i = 1; i <= m - 1; i++)
		{
			flag = 1;
			for (k = 0; k < j; k++)
			{
				if (a[i + k] != a[i + j - k - 1])
					flag = 0;
			}
			if (flag)
			{
				for (l = 0; l<j; l++)
				{
					if(l == j-1)
						cout << a[i + l]<<endl;
					else
						cout << a[i + l];
				}
			}
		}
	}
	return 0;
}