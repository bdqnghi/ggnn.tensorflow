void main()
{
	int year,y,mon,w,date,day,t;
	scanf("%d%d%d",&year,&mon,&date);
	y=year-1;
	day=y+(y/400)*97;
	y=y%400;
	day+=(y/100)*24;
	y=y%100;
	day+=(y/4);
	if((year%400==0)||((year%100!=0)&&(year%4==0)))
	{
		t=29;
	}
	else t=28;
	switch(mon)
	{
	case 12:day+=30;
	case 11:day+=31;
	case 10:day+=30;
	case 9:day+=31;
	case 8:day+=31;
	case 7:day+=30;
	case 6:day+=31;
	case 5:day+=30;
	case 4:day+=31;
	case 3:day+=t;
	case 2:day+=31;
	default:day+=0;

	}
	day+=date;
	w=day%7;
	switch(w)
	{
	    case 0:printf("Sun.");break;
		case 1:printf("Mon.");break;
		case 2:printf("Tue.");break;
		case 3:printf("Wes.");break;
		case 4:printf("Thu.");break;
		case 5:printf("Fri.");break;
		default:printf("Sat.");

	}

    
}