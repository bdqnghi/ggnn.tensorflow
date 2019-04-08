int main()
{
	int m, primeA, primeB;
	int i, k;
	cin >> m;
	for (primeA = 3; primeA <= m - 1; primeA +=2)
	{
		primeB = m - primeA;
		for (i = 2; i <= (int)sqrt(m); i++)
		{
			if (primeA % i == 0 && primeA != i)
			{
				break;
			}
		}
		for (k = 2; k <= (int)sqrt(m); k++)
		{
			if (primeB % k == 0)
			{
				break;
			}
		}
		if ((i == (int)sqrt(m) + 1) && (k == (int)sqrt(m) + 1) && (primeA <= primeB))
			cout << primeA << " " << primeB << endl;
	}
	return 0;
}