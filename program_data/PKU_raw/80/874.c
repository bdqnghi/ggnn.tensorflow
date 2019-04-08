/*
 * 1.cpp
 *
 *  Created on: 2013-1-13
 *      Author: Administrator
 */
int main()
{
	int yday[2] = {365, 366};
	int leap = 0, day1 = 0, day2 = 0, i;
	int mday[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
			{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
	int y1, m1, d1, y2, m2, d2;
	cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
	leap = (y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0);
	for(i = 1; i < m1; i++)
	{
		day1 += mday[leap][i];
	}
	day1 += d1;
	for(i = y1; i < y2; i++)
	{
		leap = (i % 4 == 0 && i % 100 != 0) || (i % 400 == 0);
		day2 += yday[leap];
	}
	leap = (y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0);
	for(i = 1; i < m2; i++)
	{
		day2 += mday[leap][i];
	}
	day2 += d2;
	day2 = day2 - day1;
	cout << day2 << endl;

}
