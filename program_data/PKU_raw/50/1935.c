int main()
{
	int month[12];
	int w, days = 0, i, flag = 0;
	cin >> w;
	for (i = 1; i <= 12; i++)
	{
		switch(i)
		{
			case 3: days += 28; break;
			case 5:
			case 7:
			case 10:
			case 12: days += 30; break;
			case 2: 
			case 4:
			case 6:
			case 8:
			case 9:
			case 11: days += 31; break;
		}
		month[i -1] = ((days + 12) % 7 + w) % 7;
		if (month[i - 1] == 5)
		{
			cout << i << endl;
		}
	}
	return 0;
}	