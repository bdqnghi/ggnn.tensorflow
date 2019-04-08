
char a[501];
int len, i = 0, t = 2, p = 0, j = 0, n = 1;

void back(char m[])
{
	len = strlen(m);
	do
	{
		for (j = 0;j <= len - t;j++)
		{
			for (i = j;i < j + t;i++)
			{
				if (m[i] == m[j+t-n])
				{
					if (i + 1 >= j + t -n)
					{
						for (i = j;i < j + t;i++)
							cout << m[i];
						cout << '\n';
						break;
					}
				}
				else
					break;
				n++;
			}
			n = 1;
		}
		t++;
	}while (t <= len);
}
int main()
{
	cin >> a;
	back(a);
	return 0;
}

