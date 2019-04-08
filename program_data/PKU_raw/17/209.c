int main()
{
	char a[120], a_cout[120] = {0}, b;
	int num[120] = {0};
	int i, j, k;
	while (cin.get(a[0]))
	{
		num[0] = 0;
		for (i = 1; i < 120; i++)
		{
			a[i] = 0;
			num[i] = 0;
		}
	for (i = 0; ; i++)
	{
        if (i != 0)
			cin.get(a[i]);
		if (a[i] == '\n')
			break;
		else
		{
			if (a[i] == '(')
			{
				num[i] = 1;
			}
			if (a[i] == ')')
			{
				num[i] = 2;
			}
		}
	}
	for (j = 0; j < i; j++)
	{
		if (a[j] == ')')
		{
			for (k = j - 1; k >= 0; k--)
			{
				if (a[k] == '(' && num[k] != 0)
				{
					num[k] = 0;
					num[j] = 0;
					break;
				}
			}
		}
	}
	for (j = 0; j < i; j++)
	{
		cout << a[j];
	}
    cout << endl;
	for (j = 0; j < i; j++)
	{
		if (num[j] == 0)
			cout << " ";
		if (num[j] == 1)
			cout << "$";
		if (num[j] == 2)
			cout << "?";
	}
	cout <<endl;
	}
	return 0;
}






				

