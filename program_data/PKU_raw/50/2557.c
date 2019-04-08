int main()
{
	int w, i, days, k;
	cin >> w;
	for (i = 1 ; i <= 12 ; i++)
	{
		switch (i)
		{
		case 1: days = 0; break;
		case 2: days = 31; break;
		case 3: days = 31 + 28; break;
		case 4: days = 31 + 28 + 31; break;
		case 5: days = 31 + 28 + 31 + 30; break;
		case 6: days = 31 + 28 + 31 + 30 + 31; break;
		case 7: days = 31 + 28 + 31 + 30 + 31 + 30; break;
		case 8: days = 31 + 28 + 31 + 30 + 31 + 30 + 31; break;
		case 9: days = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31; break;
		case 10: days = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30; break;
		case 11: days = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31; break;
		case 12: days = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30; break;
		}
		days = days + 13 - 1;
		k = days % 7;
		k = (k + w ) % 7;
		if (k == 5) cout << i << endl;
	}
	return 0;
}
		