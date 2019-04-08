int main()
{
	int year2,year1,year,month,day,count,c;

	scanf("%d%d%d",&year,&month,&day);

	year2=((year-1)/4-(year-1)/100+(year-1)/400)*(366%7);

    year1=(year-1)*(365%7)+((year-1)/4-(year-1)/100+(year-1)/400);

    if((year%4==0&&year%100!=0)||(year%400==0))
	{           
		if(month>=8)
		{
			count=((month-1)/2+1)*31+29+(month-3-(month-1)/2)*30+year1+day;
		}
		else if(2<month&&month<8)
		{
			count=(month/2)*31+29+(month-month/2-2)*30+year1+day;
		}
		else
		{
			count=month/2*31+year1+day;
		}
	}
	else
	{
         if(month>=8)
		{
			count=((month-1)/2+1)*31+28+(month-3-(month-1)/2)*30+year1+day;
		}
		else if(2<month&&month<8)
		{
			count=(month/2)*31+28+(month-month/2-2)*30+year1+day;
		}
		else
		{
			
			count=month/2*31+year1+day;
		}
	}
	c=count%7;
        
	switch(c)
	{
	case 1:
			printf("Mon.");
		break;
	case 2:
			printf("Tue.");
        break;
	case 3:
		
			printf("Wed.");
		break;
	case 4:
			printf("Thu.");
		break;
	case 5:
			printf("Fri.");
		break;
	case 6:
            printf("Sat.");
		break;
	case 0:
            printf("Sun.");
		break;
	default:
		printf("%d",c);
	}
	return 0;
}