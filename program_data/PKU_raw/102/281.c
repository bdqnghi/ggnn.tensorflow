
int main()
{
	char sex[40][6];
	float height[40], Female[40], Male[40], temp1, temp2;
	int i, p, j = 0, k = 0, n;

	cin >> n;
	for (i = 0; i < n; i ++)
	{
		cin >> sex[i];
		cin >> height[i];
	}

	for (i = 0; i < n; i ++)
	{
		if (sex[i][0] == 'f')
		{
			Female[j] = height[i];
			j ++;
		}
		else if (sex[i][0] == 'm')
		{
			Male[k] = height[i];
			k ++;
		}
	}
	// ??????



	for (i = 0; i < k - 1; i ++)
	{
		for (p = 0; p < k - 1 - i; p ++)
		{
			if (Male[p] > Male[p+1])
			{
				temp1 = Male[p];
				Male[p] = Male[p+1];
				Male[p+1] = temp1;
			}
		}
	}
	for (i = 0; i < j - 1; i ++)
	{
		for (p = 0; p < j - 1 - i; p ++)
		{
			if (Female[p] < Female[p+1])
			{
				temp2 = Female[p];
				Female[p] = Female[p+1];
				Female[p+1] = temp2;
			}
		}
	}
	// ??,?????

	for (i = 0; i < k; i ++)
	{
		cout << fixed << setprecision(2) << Male[i] << " ";			
	}
	for (i = 0; i < j; i ++)
	{
		if (i < j - 1)
			cout << fixed << setprecision(2) << Female[i] << " ";
		else
			cout << fixed << setprecision(2) << Female[i];
	}
	// ???????????



	return 0;
}
