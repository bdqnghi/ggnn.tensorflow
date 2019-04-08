int main()
{
	int year,month,day,leap,y;
	scanf("%d%d%d",&year,&month,&day);
	
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
				leap=1;
			else
				leap=0;
		}
		else
			leap=1;
	}
	else
		leap=0;

	if(leap==1)
	{
		switch(month)
		{
		case 1:printf("%d",day);break;
		case 2:printf("%d",31+day);break;
		case 3:printf("%d",29+31+day);break;
		case 4:printf("%d",31+29+31+day);break;
		case 5:printf("%d",30+31+29+31+day);break;
		case 6:printf("%d",31+30+31+29+31+day);break;
		case 7:printf("%d",30+31+30+31+29+31+day);break;
		case 8:printf("%d",31+30+31+30+31+29+31+day);break;
		case 9:printf("%d",31+31+30+31+30+31+29+31+day);break;
		case 10:printf("%d",30+31+31+30+31+30+31+29+31+day);break;
		case 11:printf("%d",31+30+31+31+30+31+30+31+29+31+day);break;
		case 12:printf("%d",30+31+30+31+31+30+31+30+31+29+31+day);break;
		}
	}
	else
	{
		switch(month)
		{
		case 1:printf("%d",day);break;
		case 2:printf("%d",31+day);break;
		case 3:printf("%d",28+31+day);break;
		case 4:printf("%d",31+28+31+day);break;
		case 5:printf("%d",30+31+28+31+day);break;
		case 6:printf("%d",31+30+31+28+31+day);break;
		case 7:printf("%d",30+31+30+31+28+31+day);break;
		case 8:printf("%d",31+30+31+30+31+28+31+day);break;
		case 9:printf("%d",31+31+30+31+30+31+28+31+day);break;
		case 10:printf("%d",30+31+31+30+31+30+31+28+31+day);break;
		case 11:printf("%d",31+30+31+31+30+31+30+31+28+31+day);break;
		case 12:printf("%d",30+31+30+31+31+30+31+30+31+28+31+day);break;
		}
	}
	return 0;
}


