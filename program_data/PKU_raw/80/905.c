// ???????.cpp 


int main()
{
	int y1, m1, d1, y2, m2, d2;
	int i, num = 0, k;
	cin >> y1 >> m1 >> d1;
	cin >> y2 >> m2 >> d2;
	k = ((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0));
	for (i = y1; i < y2; i++)
		num = num + 365 + ((i % 4 == 0  && i % 100 != 0) || (i % 400 == 0));
	for (i = 1; i < m1; i++)
	{
		switch (i)
		{
		case 1: num = num - 31; break;
		case 2: num = num - (28 + k); break;
		case 3: num = num - 31; break;
		case 4: num = num - 30; break;
		case 5: num = num - 31; break;
		case 6: num = num - 30; break;
		case 7: num = num - 31; break;
		case 8: num = num - 31; break;
		case 9: num = num -30; break;
		case 10: num = num - 31; break;
		case 11: num = num - 30; break;
		}
	}
	num = num - d1 + d2;
	k = ((y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0));
	for (i = 1; i < m2; i++)
	{
		switch (i)
		{
		case 1: num = num + 31; break;
		case 2: num = num + (28 + k); break;
		case 3: num = num + 31; break;
		case 4: num = num + 30; break;
		case 5: num = num + 31; break;
		case 6: num = num + 30; break;
		case 7: num = num + 31; break;
		case 8: num = num + 31; break;
		case 9: num = num + 30; break;
		case 10: num = num + 31; break;
		case 11: num = num + 30; break;
		}
	}
	cout << num << endl;
	return 0;
}


