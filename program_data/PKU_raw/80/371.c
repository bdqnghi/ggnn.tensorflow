//???????????
//2010?11?29?
//1000012753 ???
int countday(int year, int month, int day)
{
	int count;
	 switch (month)
	{
	case 1:
		count = day;
		break;
	case 2:
		count = (31 + day);
		break;
	case 3:
		count = (60 + day);
		break;
	case 4:
		count = (91 + day);
		break;
	case 5:
		count = (121 + day);
		break;
	case 6:
		count = (152 + day);
		break;
	case 7:
		count = (182 + day);
		break;
	case 8:
		count = (213 + day);
		break;
	case 9:
		count = (244 + day);
		break;
	case 10:
		count = (274 + day);
		break;
	case 11:
		count = (305 + day);
		break;
	case 12:
		count = (335 + day);
		break;
	}
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return count;
	else
	{
		if (month <= 2)
			return count;
		else
			return (count - 1);
	}
}
int countyear(int year)
{
	int i, countyear = 0;
	for (i = 1; i <= year; ++i)
	{
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
			countyear++;
	}
	return (countyear * 366 + (year - countyear) * 365);
}
int main()
{
	int y1, y2, m1, m2, d1, d2, count1, count2;
	cin >> y1 >> m1 >> d1;
	cin >> y2 >> m2 >> d2;
	count1 = countday(y1, m1, d1);
	count2 = countday(y2, m2, d2);
	count1 += countyear(y1 - 1);
	count2 += countyear(y2 - 1);
	cout << count2 - count1 << endl;
	return 0;
}
