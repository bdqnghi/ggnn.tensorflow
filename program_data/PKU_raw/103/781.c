
int main()
{
	char currChar, lastChar;
	int lastCount = 1;
	cin >> lastChar;
	if (lastChar <= 'z' && lastChar >= 'a')
		lastChar += 'A' - 'a';
	while (cin >> currChar)
	{
		if (currChar <= 'z' && currChar >= 'a')
			currChar += 'A' - 'a';
		if (currChar != lastChar)
		{
			cout << '(' << lastChar << ',' << lastCount << ')';
			lastCount = 1;
			lastChar = currChar;
		}
		else
			lastCount++;
	}
	cout << '(' << lastChar << ',' << lastCount << ')';
	return 0;
}