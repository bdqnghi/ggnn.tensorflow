
int main()
{
	int n, male1 = 0, female1 = 0, i, j;
	float height[41], male[41], female[41], t;
	char a[41][7];
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> a[i] >> height[i];
		if (strcmp(a[i], "male") == 0)
		{
			male1 += 1;
			male[male1] = height[i];
		}
		else
		{
			female1 += 1;
			female[female1] = height[i];
		}
	}
	for (i = 1; i < male1; i++)
		for (j = 1; j <= male1 - i; j++)
			if (male[j] > male[j +1])
			{
				t = male[j];
				male[j] = male [j + 1];
				male[j + 1] = t;
			}
	for (i = 1; i < female1; i++)
		for (j = 1; j <= female1 - i; j++)
			if (female[j] < female[j + 1])
			{
				t = female[j];
				female[j] = female[j + 1];
				female[j + 1] = t;
			}
	for (i = 1; i <= male1; i++)
		cout << fixed << setprecision(2) << male[i] << " ";
	for (i = 1; i < female1; i++)
		cout << fixed << setprecision(2) << female[i] << " ";
	cout << female[female1] << endl;

	return 0;
}
