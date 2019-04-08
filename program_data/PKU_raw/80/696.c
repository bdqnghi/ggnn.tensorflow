//****************************************
//*??? 
//*????? 1100012996       *
//*???2011.10.26**
//****************************************
int main()
{
	int sy, sm, sd, ey, em, ed,len = 0;
	cin >> sy >> sm >> sd >> ey >> em >> ed;
	int i;
	int month[2][13] = { {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
	int run = 0;
	if ( sy != ey)
	{
	run = (sy % 4 == 0 && sy % 100 != 0 || sy % 400 == 0) ? 1 : 0;
	for (i = sm; i <= 12; i++)
	{
		len += month[run][i];
	}
	for (i = sy + 1; i < ey; i++)
	{
		run = (i % 4 == 0 && i % 100 != 0 || i % 400 == 0) ? 1 : 0;
		len +=(365 + run);
	}
	run = (ey % 4 == 0 && ey % 100 != 0 || ey % 400 == 0) ? 1 : 0;
	for (i = 1; i < em; i++)
	{
		len += month[run][i];
	}
	}
	else
	{
		run = (sy % 4 == 0 && sy % 100 != 0 || sy % 400 == 0) ? 1 : 0;
	for (i = sm; i < em; i++)
	{
		len += month[run][i];
	}
	}
		
	len = len - sd + ed;
	cout << len <<endl;
	return 0;
}

