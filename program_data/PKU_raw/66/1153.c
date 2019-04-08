int main()
{
	int year,month,day;
	int a,m,b,n,s,c;
	scanf("%d %d %d",&year,&month,&day);
	a=(year-1)/4-(year-1)/100+(year-1)/400+(year-1)/3200+(year-1)/172800;
	m=7*31+29+4*30;
	b=year-1-a;
	n=m-1;
	if (year%4==0&&year%100!=0||year%400==0)
	{
		switch(month)
		{
		case 1:c=day;
			break;
		case 2:c=31+day;
			break;
		case 3:c=31+29+day;
			break;
		case 4:c=31*2+29+day;
			break;
		case 5:c=31*2+29+30+day;
			break;
		case 6:c=31*3+29+30+day;
			break;
		case 7:c=31*3+29+30*2+day;
			break;
		case 8:c=31*4+29+30*2+day;
			break;
		case 9:c=31*5+29+30*2+day;
			break;
		case 10:c=31*5+29+30*3+day;
			break;
		case 11:c=31*6+29+30*3+day;
			break;
		case 12:c=31*6+29+30*4+day;
			break;
		}
	}
	else
	{
		switch(month)
		{
		case 1:c=day;
			break;
		case 2:c=31+day;
			break;
		case 3:c=31+28+day;
			break;
		case 4:c=31*2+28+day;
			break;
		case 5:c=31*2+28+30+day;
			break;
		case 6:c=31*3+28+30+day;
			break;
		case 7:c=31*3+28+30*2+day;
			break;
		case 8:c=31*4+28+30*2+day;
			break;
		case 9:c=31*5+28+30*2+day;
			break;
		case 10:c=31*5+28+30*3+day;
			break;
		case 11:c=31*6+28+30*3+day;
			break;
		case 12:c=31*6+28+30*4+day;
			break;
		}
	}
	s=(a*m+b*n+c)%7;
	switch(s)
	{
	case 0:printf("Sun.");
    	break;
	case 1:printf("Mon.");
		break;
    case 2:printf("Tue.");
		break;
	case 3:printf("Wed.");
		break;
	case 4:printf("Thu.");
		break;
	case 5:printf("Fri.");
		break;
	case 6:printf("Sat.");
		break;
	}
	return 0;
}