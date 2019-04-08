int i, b = 2;
char a[500] = {0};
int shuchu(char a[],int i)
{
	int s, j, k, l;
	for (j = 0; j < i; j++)
		if (a[j]==a[i])
		{
			if (i - j + 1 != b)
			continue;
			s = 1;
			for (k = 1; k < (i - j + 1) / 2; k++)
			{
				if ( a[j+k] != a[i-k] )
				{
					s = 0;
					break;
				}
			}
			if (s == 0)
				continue;
			if (s == 1)
			{
				for (l = j; l <= i; l++)
					cout << a[l];
				cout <<endl;
			}
		}
		return 0;
}

int main()
{
	cin >> a;
	for (b = 2; b <= 99; b++)
	for (i = 1; a[i] != 0; i++)
	{
		shuchu(a,i);
	}
	return 0;
}