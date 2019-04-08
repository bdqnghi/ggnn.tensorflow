//********************************
//*?????(15-11) ?????   **
//*?????? 1300012934 **
//*???2013.11.28  **
//********************************
int k, l, n;
void put (int p, int q)
{
	int j;
	for (j = p; j <= q; j++)
	{
		l = l - j;
		n--;
		if (n < 0)
		{
			l += j;
			n++;
			break;
		}
		else
		{
			if (l < 0)
			{
				l += j;
				n++;
				break;
			}
			if (l == 0)
			{
				k++;
				l += j;
				n++;
				break;
			}
			if (l > 0)
			{
			    put (j, l);
				l += j;
				n++;
			}
		}
	}

}
int main()
{
	int t, m;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		k = 0;
		cin >> m >> n;
		l = m;
		put (1, m);
		cout << k << endl;
	}

	return 0;
}
