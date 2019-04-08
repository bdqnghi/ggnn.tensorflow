
int n, k, amount;

int Amount(int amount, int step)
{
	if (amount % (n-1) == 0)
    {
		amount = n * amount / (n-1) + k;
	    step++;
	}
	else
	    return 0;
	if (step < n)
		return Amount(amount, step);
	if (step == n)
		return amount;
}

int main()
{
	int x, step = 1;
	cin >> n >> k;
	for (int i = 1; ; i++)
	{
	    amount = n * i + k;
		x = Amount(amount, step);
		if (x == 0)
			continue;
		else
		{
			cout << x << endl;
			break;
		}
	}
	return 0;
}

	