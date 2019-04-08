






int leap(int year)
{
	
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 1;
	else return 0;

}






int main()
{
	
	int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int syear=0, eyear=0, smonth=0, emonth=0, sday=0, eday=0;
	int nleap=0;
	int nyears=0;
	int startYearDays=0;
	int endYearDays=0;
	int totaldays=0;
	cin>>syear>>smonth>>sday;
	cin>>eyear>>emonth>>eday;

	for(int i=syear; i<=eyear; i++)
	{
		if(leap(i))
			nleap++;
	
	}

	nyears=(eyear-syear)-1;

	for(int i=smonth+1; i<=12; i++)
	{
		startYearDays=startYearDays+month[i];
		
	}


	startYearDays=startYearDays+(month[smonth]-sday);


	//	cout<<startYearDays;

	//	cout<<endl;
	
//===================================== days in start year correct================================





	for(int i=1; i<=emonth-1; i++)
	{
		endYearDays=endYearDays+month[i];
	

	}


	endYearDays=endYearDays+eday;


//	cout<< endYearDays<<endl;




	totaldays=(nyears)*365+endYearDays+startYearDays+nleap;

	cout<<totaldays;


return 0;

}
