void main()
{
	int year,month,day,daytal=0,day1,i;
	int weekday,r;
	scanf("%d%d%d",&year,&month,&day);
	r=(year-1)/4+(year-1)/400-(year-1)/100;
	
		daytal=daytal+((year-1)%7)*(365%7);
	daytal=daytal+r;
	if(year%400==0||((year%100!=0)&&(year%4==0)))
	{
		switch(month)
		{
		case 1:
			day1=0;
			break;
		case 2:
			day1=31;
			break;
		case 3:
			day1=60;
			break;
		case 4:
			day1=91;
			break;
		case 5:
			day1=121;
			break;
		case 6:
			day1=152;
			break;
		case 7:
			day1=182;
			break;
		case 8:
			day1=213;
			break;
		case 9:
			day1=244;
			break;
		case 10:
			day1=274;
			break;
		case 11:
			day1=305;
			break;
		case 12:
			day1=335;
			break;
		}
		day1=day1+day;
		daytal=daytal+day1;
		weekday=daytal%7;
		switch(weekday)
		{
		case 0:
			printf("Sun.\n");
			break;
		case 1:
			printf("Mon.\n");
			break;
		case 2:
			printf("Tue.\n");
			break;
		case 3:
			printf("Wed.\n");
			break;
		case 4:
			printf("Thu.\n");
			break;
		case 5:
			printf("Fri.");
			break;
		case 6:
			printf("Sat.\n");
			break;
		}
	}
	else 
	{
        switch(month)
		{
		case 1:
			day1=0;
			break;
		case 2:
			day1=31;
			break;
		case 3:
			day1=59;
			break;
		case 4:
			day1=90;
			break;
		case 5:
			day1=120;
			break;
		case 6:
			day1=151;
			break;
		case 7:
			day1=181;
			break;
		case 8:
			day1=212;
			break;
		case 9:
			day1=243;
			break;
		case 10:
			day1=273;
			break;
		case 11:
			day1=304;
			break;
		case 12:
			day1=334;
			break;
		}
		day1=day1+day;
		daytal=daytal+day1;
		weekday=daytal%7;
		switch(weekday)
		{
		case 0:
			printf("Sun.\n");
			break;
		case 1:
			printf("Mon.\n");
			break;
		case 2:
			printf("Tue.\n");
			break;
		case 3:
			printf("Wed.\n");
			break;
		case 4:
			printf("Thu.\n");
			break;
		case 5:
			printf("Fri.");
			break;
		case 6:
			printf("Sat.\n");
			break;
		}
	}
}