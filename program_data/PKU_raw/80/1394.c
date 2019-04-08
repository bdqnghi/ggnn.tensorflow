
int isLeapYear(int year)
{
	return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ;
}

int deltayear (int year1 , int year2)
{
	int i ,result;
	result = 0 ;
	for (i = year1 ; i < year2 ; i++)
	{		
       if (isLeapYear(i))
			result+=366;
		else
			result+=365;
	}
	return result ;
}

int deltamonth (int year1 , int year2 , int month1 , int month2)
{
	int m[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int i , result ;
	result = 0 ;
	if (isLeapYear(year1))
		m[1] = 29;
	for (i = 0 ; i < month1-1 ; i++)
		result-=m[i];
	if (isLeapYear(year1))
		m[1] = 28 ;
	if (isLeapYear(year2))
		m[1] = 29 ;
	for (i = 0 ; i < month2-1 ; i++)
		result+=m[i];
	if (isLeapYear(year2))
		m[1] = 28 ;
	return result ;
}

int deltaday (int day1 , int day2)
{
	int result ;
	result = 0 ;
	result-=day1;
	result+=day2;
	return result ;
}

int delta (int year1 , int month1 , int day1 , int year2 , int month2 , int day2)
{
	int result ;
	result = deltayear(year1,year2) + deltamonth(year1,year2,month1,month2) + deltaday(day1,day2) ;
	return result ;
}

int main ()
{
	int year1 , month1 , day1 ;
	int year2 , month2 , day2 ;
	int result ;
	scanf ("%d%d%d%d%d%d",&year1,&month1,&day1,&year2,&month2,&day2);
	result = delta (year1,month1,day1,year2,month2,day2);
	printf ("%d\n",result);
	return 0;
}
