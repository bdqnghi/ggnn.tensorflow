void main()
{
	int y1,m1,d1;
	int y2,m2,d2;
	int days=0,month,year;
	scanf("%d%d%d%d%d%d",&y1,&m1,&d1,&y2,&m2,&d2);
    for(year=y1+1;year<y2;year++)
	{
		if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) days=days+366;
		else days=days+365;
	}
	if(((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))&&m1<=2) days=days+1;
	for(month=m1;month<=12;month++)
	{
    switch(month)
	{
	case 1: days=days+31;break;
	case 2: days=days+28;break;
	case 3: days=days+31;break;
	case 4: days=days+30;break;
	case 5: days=days+31;break;
	case 6: days=days+30;break;
	case 7: days=days+31;break;
	case 8: days=days+31;break;
	case 9: days=days+30;break;	
	case 10: days=days+31;break;
	case 11: days=days+30;break;
	case 12: days=days+31;break;
	}
	}
	days=days-d1;
    if(((y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0))&&m2>2) days=days+1;
	for(month=1;month<m2;month++)
	{
    switch(month)
	{
	case 1: days=days+31;break;
	case 2: days=days+28;break;
	case 3: days=days+31;break;
	case 4: days=days+30;break;
	case 5: days=days+31;break;
	case 6: days=days+30;break;
	case 7: days=days+31;break;
	case 8: days=days+31;break;
	case 9: days=days+30;break;	
	case 10: days=days+31;break;
	case 11: days=days+30;break;
	case 12: days=days+31;break;
	}
	}
    days=days+d2;
	if(y1==y2)
	{
		if((y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0)) days=days-366;
		else days=days-365;
	}
    printf("%d\n",days);
}
