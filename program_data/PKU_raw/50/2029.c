
int main()
{
	int m[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int w;
	cin >> w;
	int days = 13;
	for (int i = 1; i <= 12; i++)
	{
		days += m[i - 1];
		if ((days - 1 + w) % 7 == 5)
			cout << i << endl;
	}
	return 0;
}