int main()
{
	int year1,month1,day1;
	int year2,month2,day2;
	cin>>year1>>month1>>day1;
	cin>>year2>>month2>>day2;
	int days=0;
	int d1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int d2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	if(year1==year2)
	{
		if((year1%4==0&&year2%100!=0)||year1%400==0)
		{
				if(month1==month2)
				 days+=day2-day1;
				else
				{
				days+=d2[month1-1]-day1+d2[month2-1]-day2;
				for(int i=month1;i<month2-1;i++)
				days+=d2[i];
				}
		 }
	    else 
		{	
			if(month1==month2)
		    days+=day2-day1;
		    else	
			{
			    days+=d1[month1-1]-day1+d1[month2-1]-day2;
                 for(int i=month1;i<month2-1;i++)
				days+=d1[i];
			}
		}
	}
	else
	{
		if((year1%4==0&&year1%100!=0)||year1%400==0)
		{
			days+=d2[month1-1]-day1;
            for(int i=month1;i<12;i++)
				days+=d2[i];
		}
		else 
				{
			days+=d1[month1-1]-day1;
            for(int i=month1;i<12;i++)
				days+=d1[i];
				}
		if((year2%4==0&&year2%100!=0)||year2%400==0)
		{
			days+=day2;
            for(int i=month2-2;i>=0;i--)
				days+=d2[i];
		}
		else 
				{
			days+=day2;
            for(int i=month2-2;i>=0;i--)
				days+=d1[i];
				}
		for(int i=year1+1;i<year2;i++)
		{
			if((i%4==0&&i%100!=0)||i%400==0)
				days+=366;
			else days+=365;

	}
	}
	cout<<days<<endl;
	
	return 0;
}




