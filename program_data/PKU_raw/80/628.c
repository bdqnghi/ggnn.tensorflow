
int main()
{
	int sum=0,startYear ,startMonth,startDay,endYear,endMonth,endDay,i;
	cin>>startYear>>startMonth>>startDay>>endYear>>endMonth>>endDay;
	int runmonth[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int pinmonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if (startYear==endYear)
	{
		if(startYear%4==0&&startYear%100!=0||startYear%400==0)
		{
			if(startMonth==endMonth)
				sum=sum+endDay-startDay;
			else
			{
				for(i=startMonth+1;i<endMonth;i++)
					sum=sum+runmonth[i-1];
				sum=runmonth[startMonth-1]-startDay+endDay;
			}
		}
		else
		{
			if(startMonth==endMonth)
				sum=sum+endDay-startDay;else
			{
				for(i=startMonth+1;i<endMonth;i++)
					sum=sum+pinmonth[i-1];
				sum=pinmonth[startMonth-1]-startDay+endDay;
			}

		}
	}
	else
	{
		for(i=startYear+1;i<endYear;i++)
		{
			if(i%4==0&&i%100!=0||i%400==0)
				sum=sum+366;
			else
				sum=sum+365;
		}
		if(startYear%4==0&&startYear%100!=0||startYear%400==0)
			//????????
		{
			for(i=startMonth+1;i<=12;i++)
				sum=sum+runmonth[i-1];
			sum=sum+runmonth[startMonth-1]-startDay;
		}
		else
		{
			for(i=startMonth+1;i<=12;i++)
				sum=sum+pinmonth[i-1];
			sum=sum+pinmonth[startMonth-1]-startDay;
		}
		if(endYear%4==0&&endYear%100!=0||endYear%400==0)
		{
			for(i=0;i<endMonth-1;i++)
			sum=sum+runmonth[i];
			sum=sum+endDay;
		}
		
		else
		{
			for(i=0;i<endMonth-1;i++)
				sum=sum+pinmonth[i];
			sum=sum+endDay;
		}
	}
	cout<<sum<<endl;
	return 0;
}