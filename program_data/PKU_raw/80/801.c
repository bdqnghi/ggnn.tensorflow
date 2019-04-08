/*****************8??????????? *****************
??
???????????????.
??2010-1-1?2010-1-3 ???2??
year=1,2,...,3000.
???
????(year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)?
???2???29??
????
???
startYear startMonth startDay
???
endYear endMonth endDay
????
????????????????
????
2008 1 1
2009 1 1
????
366
**********************************************************
proframmer Qiu HEzi
version 1.0
cret date 2012.12.27
**********************************************************/
int main()
{
	int startYear , startMonth , startDay ;
	int endYear , endMonth , endDay;
	//?? ?         1    2   3  4  5  6  7  8  9 10 11 12
	int nmonth[13]={0,31 ,28 ,31,30,31,30,31,31,30,31,30,31};
	int rmonth[13]={0,31 ,29 ,31,30,31,30,31,31,30,31,30,31};
	cin>>startYear>>startMonth>>startDay>>endYear>>endMonth>>endDay;
	int sum=0;
	for(int year=startYear ; year<endYear ; year++)
		if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			sum+=366;
		else
			sum+=365;
	if ((startYear % 4 == 0 && startYear% 100 != 0) || (startYear % 400 == 0))
	{
		for (int i=1 ; i<startMonth ; i++)
			sum-=rmonth[i];
		sum-=startDay;
	}
	else
	{
		for (int i=1 ; i<startMonth ; i++)
			sum-=nmonth[i];
		sum-=startDay;
	}
	if ((endYear % 4 == 0 && endYear% 100 != 0) || (endYear % 400 == 0))
	{
		for (int i=1 ; i<endMonth ; i++)
			sum+=rmonth[i];
		sum+=endDay;
	}
	else
	{
		for (int i=1 ; i<endMonth ; i++)
			sum+=nmonth[i];
		sum+=endDay;
	}
	cout<<sum;
	return 0;
}