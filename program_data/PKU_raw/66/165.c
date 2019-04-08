int main()
{
	unsigned int year,month,day,a,all,w,q;
	scanf("%d%d%d",&year,&month,&day);
	if((year%4==0&&year%100!=0)||(year%400==0))
	{
		switch(month)
		{
		case 1:a=366;break;
		case 2:a=335;break;
		case 3:a=306;break;
		case 4:a=275;break;
		case 5:a=245;break;
		case 6:a=214;break;
		case 7:a=184;break;
		case 8:a=153;break;
		case 9:a=122;break;
		case 10:a=92;break;
		case 11:a=61;break;
		case 12:a=31;break;
		}
		all=366-a+day;
		
	}
	else
	{
		switch(month)
		{
		case 1:a=365;break;
		case 2:a=334;break;
		case 3:a=306;break;
		case 4:a=275;break;
		case 5:a=245;break;
		case 6:a=214;break;
		case 7:a=184;break;
		case 8:a=153;break;
		case 9:a=122;break;
		case 10:a=92;break;
		case 11:a=61;break;
		case 12:a=31;break;
		}
		all=365-a+day;
		
	}

w= (year-1)+ (year-1)/4 - (year-1)/100 + (year-1)/400 + all ;
q=w%7;
switch(q)
	{
	case 1:printf("Mon.\n");break;
	case 2:printf("Tue.\n");break;
	case 3:printf("Wed.\n");break;
	case 4:printf("Thu.\n");break;
	case 5:printf("Fri.\n");break;
	case 6:printf("Sat.\n");break;
	case 0:printf("Sun.\n");break;
	}
return 0;
}

