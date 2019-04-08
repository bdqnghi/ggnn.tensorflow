

char result[33] = {0};

void Multiply()
{
	int i = 0, up = 0;
	int len = strlen(result);
	for (i = 0; i < len; i++)
	{
		int temp = result[i] - '0';
		temp *= 2;
		result[i] = temp % 10 + up + '0';
		up = temp / 10;
		if (i == len - 1 && up != 0)
			result[i + 1] = up + '0';
	}
}

int main()
{
	int n;
	result[0] = '1';
	cin >> n;
	int i;
	if (n == 0)
		cout << result << endl;
	else
	{
		for (i = 1; i <= n; i++)
			Multiply();
		for (i = strlen(result) - 1; i >= 0; i--)
			cout << result[i];
	}
	return 0;
}