int main()
{
	int by,bm,bd;
	cin >> by >> bm >> bd;
	int ey, em ,ed;
	cin >> ey >> em >> ed;
	int sum = 0;
	for (int i = by + 1; i < ey; i++)
	{
		int leap = (i % 400 == 0) || (i % 100 != 0 && i % 4 == 0);
		sum = sum + (leap == 1 ? 366 : 365);
	}
	int temp = by == ey ? em : 12;
	for (int i = bm; i <= temp; i++)
	{
		int leapb = (by % 400 == 0) || (by % 100 != 0 && by % 4 == 0);
		if (i == 2)
		{
			if (leapb)
				sum += 29;
			else
				sum += 28;
		}
		switch (i)
		{
			
			case 1:sum += 31; break;
			case 3:sum += 31; break;
			case 5:sum += 31; break;
			case 7:sum += 31; break;
			case 8:sum += 31; break;
			case 10:sum += 31; break;
			case 12: sum += 31; break;
			case 4:sum += 30; break;
			case 6:sum += 30; break;
			case 9:sum += 30; break;
			case 11: sum += 30; break;
		}
	}
	sum -= bd;
	temp = by == ey ? bm : 1;
	for (int i = temp; i <= em - 1; i++)
	{
		int leape = (ey % 400 == 0) || (ey % 100 != 0 && ey % 4 == 0);
		if (i == 2)
		{
			if (leape)
				sum += 29;
			else
				sum += 28;
		}
		switch (i)
		{
			case 1:sum += 31; break;
			case 3:sum += 31; break;
			case 5:sum += 31; break;
			case 7:sum += 31; break;
			case 8:sum += 31; break;
			case 10:sum += 31; break;
			case 12: sum += 31; break;
			case 4:sum += 30; break;
			case 6:sum += 30; break;
			case 9:sum += 30; break;
			case 11: sum += 30; break;
		}
	}
	sum += ed;
	if (by == ey && bm == em)
	{
		int leape = (ey % 400 == 0) || (ey % 100 != 0 && ey % 4 == 0);
		if (bm == 2)
		{
			if (leape)
				sum -= 29;
			else
				sum -= 28;
		}
		switch (bm)
		{
			case 1:sum -= 31; break;
			case 3:sum -= 31; break;
			case 5:sum -= 31; break;
			case 7:sum -= 31; break;
			case 8:sum -= 31; break;
			case 10:sum -= 31; break;
			case 12: sum -= 31; break;
			case 4:sum -= 30; break;
			case 6:sum -= 30; break;
			case 9:sum -= 30; break;
			case 11: sum -= 30; break;
		}
	}

	cout << sum << endl;
	return 0;
}

