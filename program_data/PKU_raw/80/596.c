int main()
{
	int year1,year2,month1,month2,day1,day2,a,b,year,days,i;
	scanf("%d%d%d\n",&year1,&month1,&day1);
	scanf("%d%d%d",&year2,&month2,&day2);
	if((year1%4==0&&year1%100!=0)||(year1%400==0))
	{
		switch(month1)
		{
		case 1:
			a=day1;
			break;
		case 2:
			a=31+day1;
			break;
		case 3:
			a=60+day1;
			break;
		case 4:
			a=91+day1;
			break;
		case 5:
			a=121+day1;
			break;
		case 6:
			a=152+day1;
			break;
		case 7:
			a=182+day1;	
			break;	
		case 8:
			a=213+day1;	
			break;	
		case 9 :
			a=244+day1;	
			break;	
		case 10:
			a=274+day1;	
			break;	
		case 11:
			a=305+day1;
			break;		
		case 12:
			a=335+day1;
			break;
		}
	}
	else
	{
		switch (month1)
		{
		case 1:
			a=day1;
			break;
		case 2:
			a=31+day1;
			break;
		case 3:
			a=59+day1;
			break;
		case 4:
			a=90+day1;
			break;
		case 5:
			a=120+day1;
			break;
		case 6:
			a=151+day1;
			break;
		case 7:
			a=181+day1;
			break;		
		case 8:
			a=212+day1;	
			break;	
		case 9:
			a=243+day1;
			break;		
		case 10 :
			a=273+day1;	
			break;	
		case 11:
			a=304+day1;	
			break;	
		case 12:
			a=334+day1;
			break;
		}
	}
	if((year2%4==0&&year2%100!=0)||(year2%400==0))
	{
		switch (month2)
		{
		case 1:
			b=day2;
			break;
		case 2:
			b=31+day2;
			break;
		case 3:
		    b=60+day2;
			break;
		case 4:
			b=91+day2;
			break;
		case 5:
			b=121+day2;
			break;
		case 6:
			b=152+day2;
			break;
		case 7:
			b=182+day2;	
			break;	
		case 8:
			b=213+day2;	
			break;	
		case 9:
			b=244+day2;	
			break;	
		case 10 :
			b=274+day2;	
			break;	
		case 11:
			b=305+day2;	
			break;	
		case 12:
			b=335+day2;
			break;
		}
	}
	else
	{
		switch (month2)
		{
		case 1:
			b=day2;
			break;
		case 2:
			b=31+day2;
			break;
		case 3:
			b=59+day2;
			break;
		case 4:
			b=90+day2;
			break;
		case 5:
			b=120+day2;
			break;
		case 6:
			b=151+day2;
			break;
		case 7:
			b=181+day2;
			break;		
		case 8:
			b=212+day2;	
			break;	
		case 9:
			b=243+day2;
			break;		
		case 10:
			b=273+day2;
			break;		
		case 11:
			b=304+day2;
			break;		
		case 12:
			b=334+day2;
			break;
		}
	}
	year=0;
	for(i=year1;i<year2;i++)
	{
		if ((i%4==0&&i%100!=0)||(i%400==0))
			year=year+366;
		else
			year=year+365;
	}
	days=b-a+year;
	printf("%d",days);
	return 0;
}
