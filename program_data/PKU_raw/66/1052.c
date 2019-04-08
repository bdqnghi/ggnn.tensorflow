int	run(int a)
{
	if((a % 400 == 0) || ((a % 100 != 0) && (a % 4 == 0)))
	{return 1;}
	else
	{return 0;}
}
int main()
{
	int year, mon, day;
	cin >> year;
	cin >> mon;
	cin >> day;
	int	m1[13] = {0,0,3,3,6,1,4,6,2,5,0,3,5};
	int	m2[13] = {0,0,3,4,0,2,5,0,3,6,1,4,6};
	char	date[8][5] = {"0", "Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat.", "Sun."};
	
	int	i;
	int	sum = 0;
	int	k = (int)(year /2000);
	if(year % 2000 == 0)
	{
		year = year - (k - 1) * 2000;
	}
	else
	{
		year = year - k * 2000;
	}
	


	for (i = 1; i < year; i ++)
	{
		if(sum > 7){sum = sum - 7;}
		sum = sum + 1 + run(i);
	}

	if(run(year))
	{
		sum = sum + m2[mon];
	}
	else
	{
		sum = sum + m1[mon];
	}

	sum = sum + day;
	
	while(sum > 7)
	{sum = sum - 7;}
	cout << date[sum] << endl;
return 0;
}
