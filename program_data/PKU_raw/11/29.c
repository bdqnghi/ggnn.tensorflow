
int main()
{
	int year,month,day,days,i;
	scanf("%d%d%d",&year,&month,&day);
	if(year%4==0&&year%100==!0)
	{
		switch(month)
		{
		case 1:days=day;
			break;
		case 2:days=31+day;
			break;
		case 3:days=31+29+day;
			break;
		case 4:days=31+29+31+day;
			break;
		case 5:days=31+29+31+30+day;
			break;
		case 6:days=31+31+29+31+30+day;
			break;
		case 7:days=30+31+31+29+31+30+day;
			break;
		case 8:days=31+30+31+31+29+31+30+day;
			break;
		case 9:days=31+31+30+31+31+29+31+30+day;
			break;
		case 10:days=30+31+31+30+31+31+29+31+30+day;
			break;
		case 11:days=31+30+31+31+30+31+31+29+31+30+day;
			break;
		case 12:days=30+31+30+31+31+30+31+31+29+31+30+day;
		default:
			;
		}
	}
	else
		{
		switch(month)
		{
		case 1:days=day;
			break;
		case 2:days=31+day;
			break;
		case 3:days=31+28+day;
			break;
		case 4:days=31+28+31+day;
			break;
		case 5:days=31+28+31+30+day;
			break;
		case 6:days=31+31+28+31+30+day;
			break;
		case 7:days=30+31+31+28+31+30+day;
			break;
		case 8:days=31+30+31+31+28+31+30+day;
			break;
		case 9:days=31+31+30+31+31+28+31+30+day;
			break;
		case 10:days=30+31+31+30+31+31+28+31+30+day;
			break;
		case 11:days=31+30+31+31+30+31+31+28+31+30+day;
			break;
		case 12:days=30+31+30+31+31+30+31+31+28+31+30+day;
		default:
			;
		}
	}
    printf("%d",days);
	return 0;
}