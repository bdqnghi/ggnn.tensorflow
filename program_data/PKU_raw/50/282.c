int main()
{
	int day,month;
	scanf("%d",&day);day+=12;
	for(month=1;month<=12;month++)
	{
		switch(month-1)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
	    case 12:day+=31;break;
		case 2: day+=28;break;
	    case 0:break;
	    default: day+=30;break;
		}
		if(day%7==5) printf("%d\n",month);
	}
	return 0;
}
