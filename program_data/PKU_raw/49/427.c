//*****************************
//*??? :????         *
//*??   :???             *
//*??   :2011?11?         *
//*****************************
void c(char []);
int main ()
{
	char a[501];
	cin.getline(a,501);
	c(a);
	return 0;
}
void c(char a[])
{
	int i, j, k, m, t = 0, g;
	m = strlen(a);
	for (i = 2; i <= m; i++)
	{
		for (j = 0; j < m; j++)
		{
			g = 1;
			for (k = 0; k <i; k++)
			{
				if (a[k + j] != a[j + i - 1 - k]) g = 0;
			}
			if (g == 1)
			{
				for (t = 0; t < i; t++)
				{
					if (t == i - 1)
						cout << a[t + j] << endl;
					else cout << a[t + j];
				}
			}
		}
	}
}





