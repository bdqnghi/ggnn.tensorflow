
int main()
{
	int n, i, j, number;
	char input[500][40] = {0};
	int lenth[500] = {0}, lenth0 = 0;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> input[i];
		lenth[i] = strlen(input[i]);
	}
	i = 0, number = 0;
	while (1)
	{
		lenth0 += lenth[number] + 1;
		if (lenth0 <= 81)
		{
			number++;
		}
		if (lenth0 > 81 || number == n)
		{
			for (j = i; j < number - 1; j++)
			{
				cout << input[j] << " ";
			}
			cout << input[number - 1] << endl;
			i = number;
			lenth0 = 0;
		}
		if (i == n)
			break;
	}
	return 0;
}