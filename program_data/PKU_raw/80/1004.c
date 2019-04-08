//**********************************
//*??  ???????????*****
//*????? 1300012753     ******* 
//*???2013.11.02          ******* 
//**********************************
int main()
{
	int syear, smonth, sday, eyear, emonth, eday;
	cin >> syear >> smonth >> sday >> eyear >> emonth >> eday; 
	int sum = 0;
	int month1[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int month2[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	if((syear % 4 == 0 && syear % 100 != 0) || (syear % 400 == 0))
	month1[2] = 29;
	if((eyear % 4 == 0 && eyear % 100 != 0) || (eyear % 400 == 0))
	month2[2] = 29;
	if (syear == eyear && smonth == emonth)
	{
		sum += eday - sday;
	}
	else if(syear == eyear && smonth != emonth)
	{
		sum += month1[smonth] - sday + 1;
		for(int month = smonth + 1; month < emonth; month++)
		sum += month1[month];
		sum += eday - 1;
	}
	else
	{
		sum += month1[smonth] - sday + 1;
	    for(int month = smonth + 1; month <= 12; month++)
	    {
		    sum += month1[month];
	    }
	    for (int year = syear + 1; year < eyear; year++)
	    {
		    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		    sum += 366;
		    else
		    sum += 365;
	    }
	    for(int month = 1; month < emonth; month++)
	    {
		    sum += month2[month];
	    }
	    sum += eday - 1;
	}
	cout << sum;
	return 0;
}