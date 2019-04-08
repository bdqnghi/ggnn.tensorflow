int main()
{
	int year,month,day,a,i=1;
	while(i<=5)
	{
	scanf("%d %d %d",&year,&month,&day);
	if (((year%4==0&&year%100!=0)||year%400==0)==1)
	{
		switch(month)
		{
		case 1: a=day;break;
		case 2: a=31+day;break;
		case 3: a=31+29+day;break;
		case 4: a=31+29+31+day;break;
		case 5: a=31+29+31+30+day;break;
        case 6: a=31+29+31+30+31+day;break;
        case 7: a=31+29+31+30+31+30+day;break;
        case 8: a=31+29+31+30+31+30+31+day;break;
        case 9: a=31+29+31+30+31+30+31+31+day;break;
        case 10: a=31+29+31+30+31+30+31+31+30+day;break;
        case 11: a=31+29+31+30+31+30+31+31+30+31+day;break;
	    case 12: a=31+29+31+30+31+30+31+31+30+31+30+day;break;
		default : printf("error\n");
		}
	}
	else
	{
		switch(month)
		{
		case 1: a=day;break;
		case 2: a=31+day;break;
		case 3: a=31+28+day;break;
		case 4: a=31+28+31+day;break;
		case 5: a=31+28+31+30+day;break;
        case 6: a=31+28+31+30+31+day;break;
        case 7: a=31+28+31+30+31+30+day;break;
        case 8: a=31+28+31+30+31+30+31+day;break;
        case 9: a=31+28+31+30+31+30+31+31+day;break;
        case 10: a=31+28+31+30+31+30+31+31+30+day;break;
        case 11: a=31+28+31+30+31+30+31+31+30+31+day;break;
	    case 12: a=31+28+31+30+31+30+31+31+30+31+30+day;break;
		default : printf("error\n");
		}
	}
	printf("%d\n",a);
	i=i+1;
	}
	return 0;
}