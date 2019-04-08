void main()
{
	int year1,year2,month1,month2,day1,day2,a,b,c,d,tempyear,tempmonth,tempday;
	d = 0;
	scanf("%d %d %d",&year1,&month1,&day1);
	scanf("%d %d %d",&year2,&month2,&day2);
	int montha[12]={0,31,60,91,121,152,182,213,244,274,305,335};
	int monthb[12]={0,31,59,90,120,151,181,212,243,273,304,334};
    if(year1==year2)
	{
		if (month1 == month2)
		{
			printf("%d",day2-day1);
		}
		else
		{
			if ((year1%4==0)&&(year1%100!=0)||(year1%400==0))
				printf("%d",montha[month2-1]-montha[month1-1]+day2-day1);
			else
				printf("%d",monthb[month2-1]-monthb[month1-1]+day2-day1);
		}
	}
	else
	{
		a = year1+1;
		b = year2;
		c = 0;
		while(a<b)
		{
			if ((a%4==0)&&(a%100!=0)||(a%400==0))
				c+=366;
			else
				c+=365;
			a++;
		}

		if (year1 > year2)
		{
			d = 1;

			tempyear=year1;
			year1=year2;
			year2=tempyear;

			tempmonth=month1;
			month1=month2;
			month2=tempmonth;

			tempday=day1;
			day1=day2;
			day2=tempday;
		}
		if ((year1%4==0)&&(year1%100!=0)||(year1%400==0))
			c+=366-(montha[month1-1]+day1);
		else
			c+=365-(monthb[month1-1]+day1);

		if ((year2%4==0)&&(year2%100!=0)||(year2%400==0))
			c+=(montha[month2-1]+day2);
		else
			c+=(monthb[month2-1]+day2);

		if (d == 0) printf("%d",c);
		else printf("%d",0-c);
	}
}