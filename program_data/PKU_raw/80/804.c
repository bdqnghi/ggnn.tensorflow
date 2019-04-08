//********************************
//*???3.cpp   **
//*?????? 1200012768 **
//*???2013.1.3  **
//*??????????????  **
//********************************
int ydays[2] = {365, 366};
int mdays[2] = {28, 29};
int y1, m1, d1, y2, m2, d2;
int leap(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
		return 1;
	return 0;
}
int cal_num(int y, int m, int d)
{
	int num = 0;
	for (int i = 1; i < m; i++)
		switch(i)
		{	
			case 1: num += 31; break;
			case 2: {int is_leap = leap(y); num += mdays[is_leap]; break;}
			case 3: num += 31; break;
			case 4: num += 30; break;
			case 5: num += 31; break;
			case 6: num += 30; break;
			case 7: num += 31; break;
			case 8: num += 31; break;
			case 9: num += 30; break;
			case 10: num += 31; break;
			case 11: num += 30; break;
			default:;
		}
	return num + d;
}
int cal_days()
{
	if (y1 == y2)
		return cal_num(y2, m2, d2) - cal_num(y1, m1, d1);
	int is_leap = leap(y1);
	int days = ydays[is_leap] - cal_num(y1, m1, d1);
	for (int i = y1 + 1; i < y2; i++)
		is_leap = leap(i), days += ydays[is_leap];
	days += cal_num(y2, m2, d2);
	return days;
}
int main()
{
	cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
	cout << cal_days();
	return 0;
}
