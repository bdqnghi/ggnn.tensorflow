int main()
{
	int m, primeA, primeB;
	int i, k;
	cin >> m;
	if (m >= 6 && m <=10000 && m % 2 == 0)
	{//if
	for (primeA = 3; primeA <= m - 1; primeA +=2)
	{
		primeB = m - primeA;
		if (primeA <= primeB)
		{
			for (i = 3; i <= (int)sqrt(m); i++)
			{
				if (primeA % i == 0 && primeA != i)
				{
					break;
				}
			}
			if (i == (int)sqrt(m) + 1)
			{
				for (k = 3; k <= (int)sqrt(m); k++)
				{
					if (primeB % k == 0 && primeB != k)
					{
						break;
					}
				}
			if (k == (int)sqrt(m) + 1)
				cout << primeA << " " << primeB << endl;
			}
		}
	}
	}//if
	return 0;
}