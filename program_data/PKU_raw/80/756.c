void main()
{
	int startyear,startmonth,startday,endyear,endmonth,endday,i;
	long day1=0,day2=0;
	scanf("%d %d %d",&startyear,&startmonth,&startday);
    scanf("%d %d %d",&endyear,&endmonth,&endday);
    for(i=0;i<startyear;i++)
	{
		if((i%4==0&&i%100!=0)||(i%400==0)) day1+=366;
		else day1+=365;
	}
	for(i=1;i<startmonth;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12) day1+=31;
		else
		{
			if(i==4||i==6||i==9||i==11) day1+=30;
			else
			{
				if(((startyear % 4 == 0 && startyear % 100 != 0) || (startyear % 400 == 0))&&i==2) day1+=29;
				else day1+=28;	
			}
		}
	}
	day1+=startday;
	 for(i=0;i<endyear;i++)
	{
		if((i%4==0&&i%100!=0)||(i%400==0)) day2+=366;
		else day2+=365;
	}
	for(i=1;i<endmonth;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12) day2+=31;
		else
		{
			if(i==4||i==6||i==9||i==11) day2+=30;
			else
			{
				if(((endyear % 4 == 0 && endyear % 100 != 0) || (endyear % 400 == 0))&&i==2) day2+=29;
				else day2+=28;	
			}
		}
	}
	day2+=endday;
	printf("%ld\n",day2-day1);
}