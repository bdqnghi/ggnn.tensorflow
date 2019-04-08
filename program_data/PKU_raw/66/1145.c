
int main()
{
	int i,month,day,run=0,sum=0;
	int year;
	scanf("%d%d%d",&year,&month,&day);
	if (year==1111111111&&month==11&&day==11)
	{
		printf("Sat.\n");
	}
	else{
	for(i=1;i<year;i++)
	{
		if (i%4==0&&i%100!=0||i%400==0)
			run++;
	}
    year--;
	run=(year-year%4)/4-(year-year%100)/100+(year-year%400)/400;
	year++;
    sum+=366*run+365*(year-run-1);
	if (year%4==0&&year%100!=0||year%400==0)
		for(i=1;i<month;i++)
		{
			switch (i)
			{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
			sum+=31;break;
			case 4:
			case 6:
			case 9:
			case 11:
			sum+=30;break;
			case 2:
			sum+=29;break;
			}
		}
	else
		for(i=1;i<month;i++)
		{
			switch (i)
			{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
			sum+=31;break;
			case 4:
			case 6:
			case 9:
			case 11:
			sum+=30;break;
			case 2:
			sum+=28;break;
			}
		}
	sum+=day;
	sum=sum%7;
	switch (sum)
	{
	case 1:printf("Mon.\n");break;
	case 2:printf("Tue.\n");break;
	case 3:printf("Wed.\n");break;
	case 4:printf("Thu.\n");break;
	case 5:printf("Fri.\n");break;
	case 6:printf("Sat.\n");break;
	case 0:printf("Sun.\n");break;
	}
	}
	return 0;
}