int main()
{
	float temp, male[40], female[40];
	int n, i, j, p, q;
	char sex[8];
	cin >> n;
	for (i = 0, p = 0, q = 0; i < n; i++)
	{
		cin >> sex >> temp;
		if (strcmp(sex, "male") == 0)
		{
			male[p] = temp;
			p++;
		}
		else
		{
			female[q] = temp;
			q++;
		}
	}
	for (i = 0; i < p - 1; i++)
		for (j = 0; j < p - 1 - i; j++)
		{
			if (male[j] > male[j + 1])
			{
				temp = male[j];
				male[j] = male[j + 1];
				male[j + 1] = temp;
			}
		}
	for (i = 0; i < q - 1; i++)
		for (j = 0; j < q - 1 - i; j++)
		{
			if (female[j] < female[j + 1])
			{
					temp = female[j];
					female[j] = female[j + 1];
					female[j + 1] = temp;
			}
		}
	cout << fixed << setprecision(2) << male[0];
	for (i = 1; i < p; i++)
		cout << fixed << setprecision(2) << " " << male[i];
	for (i = 0; i < q; i++)
		cout << fixed << setprecision(2) << " " << female[i];
	return 0;
}