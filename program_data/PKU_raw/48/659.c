/**
* @file 1.cpp
* @author ??? 1100012944
* @date 2011-11-23
* @description
* ???????????????
*/
int day, num0;
int germf(int x, int y, int t)
{
	if ( t == 0 && x == 5 && y == 5 )
		return num0;
	else if ( t == 0 && x >= 0 && x <= 10 && y >= 0 && y <= 10 )
		return 0;
	else if ( x >= 5 - day && x <= 5 + day && y >= 5 - day && y <= 5 + day )
		return (germf(x - 1, y - 1, t - 1) +
		        germf(x - 1, y, t - 1) +
				germf(x - 1, y + 1, t - 1) +
				germf(x, y - 1, t - 1) +
				germf(x, y + 1, t - 1) +
				germf(x + 1, y - 1, t - 1) +
				germf(x + 1, y, t - 1) +
				germf(x + 1, y + 1, t - 1) +
				2 * germf(x, y, t - 1));
	else
		return 0;
}
int main()
{
	int i, j;
	cin >> num0 >> day;
	for ( i = 1; i <= 9; i++)
	{
		cout << germf(i, 1, day);
		for ( j = 2; j <= 9; j ++)
			cout <<" "<< germf(i,j, day);
		cout << endl;
	}
	return 0;
}

