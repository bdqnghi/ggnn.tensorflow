
int main()
{
	int x, length = 1, i;
	char result[51];
	for (i = 1; i < 51; i++)
		result[i] = '0';
	result[0] = '1';
	for (cin >> x; x > 0; x--)
	{
		for (i = 0; i < length; i++)
			result[i] = result[i] * 2 - '0';
		for (i = 0; i < length - 1; i++)
			if (result[i] > '9')
			{
				result[i] -= 10;
				result[i + 1]++;
			}
		if (result[i] > '9')
		{
			result[i] -= 10;
			result[i + 1]++;
			length++;
		}
	}
	for (length--; length >= 0; length--)
		cout << result[length];
	return 0;
}