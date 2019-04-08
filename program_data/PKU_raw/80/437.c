int main()
{
	int i;
	int days=0;
	int monp[12]={31,28,31,30,31,30,31,31,30,31,30,31},monr[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int year1,year2,mon1,mon2,day1,day2;
	cin>>year1>>mon1>>day1;
	cin>>year2>>mon2>>day2;	
	if(year1<year2)
	{
		if((year1%4==0&&year1%100!=0)||(year1%400==0))
		{
			for(i=mon1-1;i<12;i++)
			{
				days=days+monr[i];
			}
		}
		else
		{
			for(i=mon1-1;i<12;i++)
			{
				days=days+monp[i];
			}
		}
		days=days-day1;
		for(i=year1+1;i<=year2-1;i++)
		{
			if((i%4==0&&i%100!=0)||(i%400==0))
				days=days+366;
			else days=days+365;
		}
		if((year2%4==0&&year2%100!=0)||(year2%400==0))
		{
			for(i=0;i<mon2-1;i++)
				days=days+monr[i];
		}
		else 
		{
			for(i=0;i<mon2-1;i++)
				days=days+monp[i];
		}
		days=days+day2;
	}
	else if(year1==year2)
	{
		for(i=mon1-1;i<mon2-1;i++)
		{
			if((year1%4==0&&year1%100!=0)||(year1%400==0))
			{
				days=days+monr[i];
			}
			
			else {days=days+monp[i];}
			
		}
		days=days-day1+day2;
	}
			cout<<days;
return 0;
}