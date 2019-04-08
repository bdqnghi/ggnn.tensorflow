int main()
{
	int w, i, sum, month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	cin >> w;
	sum = 13 + w;
	for (i = 0; i <= 11; i++)
	{
		sum += month[i];
		if (sum % 7 == 6)
		{
		    cout << i + 1 << endl;
		}
	}
	return 0;
}