
int main()
{
	int mon[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
		days[12] = {0}, w;
	cin >> w;
	for (int i = 1; i < 12; i++)
	{
		days[i] = days[i - 1] + mon[i - 1];
	}
	for (int j = 0; j < 12; j++)
	{
		if ( (days[j] + 13 - 1) % 7 + w == 5 || (days[j] + 13 - 1) % 7 + w == 12)
		{
			cout << j + 1 << endl;
		}
	}
	return 0;
}
