int B[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int A[12]={31,29,31,30,31,30,31,31,30,31,30,31};
int runnian(int year)
{
	if((year%4==0&&year%100!=0)||(year%400==0))
		return 1;
	else
		return 0;
}
int count1(int startmonth,int startday,int endmonth,int endday)
{
	int result=0,i;
	if(startmonth<=endmonth)
	{
		for(i=startmonth;i<endmonth;i++)
		{
			result=result+A[i-1];
		}
		result=result+endday-startday;
	}
	else
	{
		for(i=startmonth;i>endmonth;i--)
		{
			result=result-A[i-2];
		}
		result=result+endday-startday;
	}
	return result;
}
int count2(int startmonth,int startday,int endmonth,int endday)
{
    int result=0,i;
	if(startmonth<=endmonth)
	{
		for(i=startmonth;i<endmonth;i++)
		{
			result=result+B[i-1];
		}
		result=result+endday-startday;
	}
	else
	{
		for(i=startmonth;i>endmonth;i--)
		{
			result=result-B[i-2];
		}
		result=result+endday-startday;
	}
	return result;
}
int main()
{
	int startYear,startMonth,startDay;
	int endYear,endMonth,endDay;
	int i;
	int sum=0;
	int temp;
	scanf("%d%d%d",&startYear,&startMonth,&startDay);
	scanf("%d%d%d",&endYear,&endMonth,&endDay);
	if(startYear==endYear)
	{
		if(runnian(startYear))
		{
			sum=count1(startMonth,startDay,endMonth,endDay);
		}
		else
		{
			sum=count2(startMonth,startDay,endMonth,endDay);
		}
	}
	else
	{
		if(startYear>endYear)
		{
			temp=endYear;
			endYear=startYear;
			startYear=temp;
            temp=endMonth;
			endMonth=startMonth;
			startMonth=temp;
            temp=endDay;
			endDay=startDay;
			startDay=temp;
		}
	}
	if(startYear<endYear)
	{
		for(i=startYear;i<endYear;i++)
		{
			if(runnian(i))
			{
				sum=sum+366;
			}
			else
			{
				sum=sum+365;
			}
		}
        if(runnian(endYear))
		{
			sum=sum+count1(startMonth,startDay,endMonth,endDay);
		}
		else
		{
			sum=sum+count2(startMonth,startDay,endMonth,endDay);
		}
	}
	printf("%d",sum);
	return 0;
}