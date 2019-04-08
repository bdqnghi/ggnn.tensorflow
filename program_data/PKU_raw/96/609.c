int main()
{
	char str[101];
	int num[100], i, sum, rem = 0;
	cin.getline(str,101);
	for(i = 0; str[i] != '\0'; i++)
	{
		num[i] = str[i] - '0';
	}
	rem = num[0];
	for(i = 1; str[i] != '\0'; i++)
	{
		sum = rem * 10 + num[i];
		if (i != 1 || sum > 12)
			cout << sum / 13;
		rem = sum % 13;
	}
	if (i == 1 || (i == 2 && sum <= 12))
		cout << '0';
	cout << endl;
	cout << rem << endl;
	return 0;
}