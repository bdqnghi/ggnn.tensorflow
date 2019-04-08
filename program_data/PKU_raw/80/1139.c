int main()
{
	int days[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
	

	int syear,smonth,sday,eyear,emonth,eday;

	cin>>syear>>smonth>>sday>>eyear>>emonth>>eday;

	int r;
	int i,year,end;
	int num=0;

	if((syear % 4 == 0 && syear % 100 != 0) || (syear % 400 == 0))
		r=1;
	else
		r=0;

	if(eyear!=syear)
	{
			num+=days[r][smonth]-sday;
	}
	else
	{
		if(emonth!=smonth)
			num+=days[r][smonth]-sday;
	}
	if(eyear==syear)
		end=emonth-1;
	else
		end=12;

	for(i=smonth+1;i<=end;i++)
		num+=days[r][i];

	for(year=syear+1;year<eyear;year++)
	{
		if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			r=1;
		else
			r=0;
		num+=365+r;
	}

	if((eyear % 4 == 0 && eyear % 100 != 0) || (eyear % 400 == 0))
			r=1;
		else
			r=0;


	i=1;
	if(eyear==syear)
		i=smonth+1;
	for(;i<emonth;i++)
		num+=days[r][i];

	if(eyear!=syear)
	{
		num+=eday;
	}
	else
	{
		if(emonth == smonth)
		num+=(eday-sday);
		else
			num+=eday;
	}
	cout<<num<<endl;
	return 0;
}


		