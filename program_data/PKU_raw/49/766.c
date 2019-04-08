int main()
{
	char a[501], b[501];
	char c;
	int i, l, j, k, m, q, n = 0, p;
	cin.getline(a, 501);
	l = strlen(a);
	for (i = 0; i < l; i++)
		b[l - 1 - i] = a[i];
	for (j = 2; j <= l; j++)
	{
		for (m = 0; m <= l - j; m++)
		{
			n = 0;
			p = m;
			q = l - p - j;
			for (k = 1; k <= j; k++)
			{
				if (a[p] == b[q])
				{
					p++;
					q++;
					n++;
				}
				else
					break;
			}
			if (n == j)
			{
				i = 0;
				while(i < n)
				{	
					cout << a[m + i];
					i++;
				}
				cout << endl;
			}				
				
		}
	}
	return 0;
}