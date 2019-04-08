
int fenjie(int , int);

int fenjie(int q1, int n1)
{
	int s1, i1;
	if (q1 > n1)
		return 0;
	else 
	{
		s1 = 0;
		for (i1 = q1; i1 <= n1; i1++)
		{
			if ((i1 >= 2) && (n1%i1 == 0) && (n1/i1 >= i1))
			{
				s1++;
				s1 = s1 + fenjie(i1, n1 / i1);
			}
		}
		return s1;
	}
}

int main()
{
	int m, i, n;
	cin >> m;
	for (i = 1; i <= m; i++)
	{
		cin >> n;
		cout << fenjie(1,n)+1 << endl;
	}
	return 0;
}
