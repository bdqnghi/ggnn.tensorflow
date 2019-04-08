
int rYear(int year)
{
	if( (year%4==0 && year%100!=0) || (year%400==0))
		return 366;
	else
		return 365;
}
int MonthDay(int year,int month)
{
	int day;
	switch(month)
	{
	case 2:
		if( rYear(year)-365 == 0)
			day=28;
		else if( rYear(year)-365 == 1)
			day=29;
		break;
	case 1: ;
	case 3: ;
	case 5: ;
	case 7: ;
	case 8: ;
	case 10: ;
	case 12: day=31;break;
	default : day=30;break;
	}
	return day;
}

int main(void)
{
	int year1,month1,day1;
	int year2,month2,day2;
	int num=0;
	cin>>year1>>month1>>day1;
	cin>>year2>>month2>>day2;
	for(int i=year1;i<year2;i++)
	{
		num += rYear(i);
	}
	for(int j=1;j<month2;j++)
	{
		num += MonthDay(year2,j);
	}
	for(int k=1;k<month1;k++)
	{
		num -= MonthDay(year1,k);
	}
	num += day2;
	num -= day1;
	cout<< num <<endl;
	return 0;
}
