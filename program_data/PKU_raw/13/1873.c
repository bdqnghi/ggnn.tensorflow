
int main()
{
	int n, i, j, k = 1, r = 1, number[20001], number1[20001] = {0};
	cin >> n;
	for (i = 1; i != n + 1; i++)
	{
		cin >> number[i];
		for (j = 1, k = 1; j <= i; j++)
		{
			if (number[i] == number1[j])
			{
				k = 0;
				break;
			}
		}
		if (k == 1)
		{
			if (i == 1)
			{
				cout << number[1];
				number1[1] = number[1];
				r++;
			}
			else
			{
				cout << " " << number[i];
				number1[r] = number[i];
				r++;
			}
		}
	}
	return 0;
}

