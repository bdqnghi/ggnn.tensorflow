void main()
{
	int year,mon,date,day=0;
	scanf("%d%d%d",&year,&mon,&date);
	switch(mon)
	{
	case 1:day=date;break;
	case 2:day=31+date;break;
	case 3:day=31+28+date;break;
	case 4:day=31+28+31+date;break;
	case 5:day=31+28+31+30+date;break;
	case 6:day=31+28+31+30+31+date;break;
	case 7:day=31+28+31+30+31+30+date;break;
	case 8:day=31+28+31+30+31+30+31+date;break;
	case 9:day=31+28+31+30+31+30+31+31+date;break;
	case 10:day=31+28+31+30+31+30+31+31+30+date;break;
    case 11:day=31+28+31+30+31+30+31+31+30+31+date;break;
	case 12:day=31+28+31+30+31+30+31+31+30+31+30+date;break;
	}
	if((year%4==0&&year%100!=0)||(year%400==0))
	{
		if(mon>2)
			day++;
	}
	printf("%d",day);



}