//***************************
//??: ?????      *****
//??:??? 1200012772*****
//??:2012?11?9?    *****
//***************************
int main()
{
	int w = 0;
	cin >> w;
	int i = 0;
	int mon[13] = {0};
	mon [1] = 12;
	for (i = 2; i <= 12; i++)
	{
		switch (i)
		{
		case 2: 
		case 4:
		case 6:
		case 8:
		case 9:
		case 11: mon[i] = mon[i - 1] + 3; break;
		case 3:  mon[i] = mon[i - 1]; break;
		default: mon[i] = mon[i - 1] + 2; break;
		}
	}
	int w2 = 0;
	for (i = 1; i <= 12; i++)
	{
		w2 = w + mon[i] % 7;
		if (w2 > 7)
			w2 = w2 - 7;
		if (w2 == 5)
			cout << i << endl;
	}

	return 0;
}
		
