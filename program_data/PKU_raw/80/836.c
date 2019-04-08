
int judge_year(int year)  //?????????
{
	if(year%400==0)
		return 1;
	if(year%100==0)
		return 0;
	if(year%4==0)
		return 1;
	return 0;
}

int main()
{
	int i;
	int sumdays=0;
	int monthdays[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int startYear, startMonth, startDay;
	int endYear, endMonth, endDay;
	scanf("%d %d %d",&startYear,&startMonth,&startDay);
	scanf("%d %d %d",&endYear,&endMonth,&endDay);
	if(judge_year(startYear))  //???
	{
		monthdays[2]=29;  //????????
	}
	if(startYear==endYear)  //????
	{
		if(startMonth==endMonth)   //????
		{
			sumdays=endDay-startDay;
			printf("%d",sumdays);
			return 0;
		}
		else
		{
			for(i=startMonth+1;i<endMonth;i++)
			{
				sumdays+=monthdays[i];
			}
			sumdays+=monthdays[startMonth]-startDay;
			sumdays+=endDay;
			printf("%d",sumdays);
			return 0;
		}
	}
	//?????
	//??????????
	for(i=startYear+1;i<endYear;i++)
	{
		sumdays+=judge_year(i)+365;
	}
	//????????
	for(i=startMonth+1;i<=12;i++)
	{
		sumdays+=monthdays[i];
	}
	sumdays+=monthdays[startMonth]-startDay;
	//??????
	//????????
	if(judge_year(endYear))
		monthdays[2]=29;
	else
		monthdays[2]=28;
	for(i=1;i<endMonth;i++)
	{
		sumdays+=monthdays[i];
	}
	sumdays+=endDay;
	printf("%d",sumdays);
	return 0;
}
