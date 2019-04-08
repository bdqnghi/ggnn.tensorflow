
int main(int argc, char* argv[])
{
	int day,month,year;
	scanf("%d%d%d",&year,&month,&day);
	if((year%4==0 && year%100!=0)||(year%400==0))
	{
        switch(month)
		{
		    case 1:
				{
				    day=day;
				    break;
				}
		    case 2:
				{
				    day=day+31;
				    break;
				}
	        case 3:
				{
				    day=day+31+29;
				    break;
				}
			case 4:
				{
					day=day+31+29+31;
					break;
				}
			case 5:
				{
					day=day+31+29+31+30;
					break;
				}
			case 6:
				{
					day=day+31+29+31+30+31;
					break;
				}
			case 7:
				{
					day=day+31+29+31+30+31+30;
					break;
				}
			case 8:
				{
					day=day+31+29+31+30+31+30;
					break;
				}
			case 9:
				{
					day=day+31+29+31+30+31+30+31;
					break;
				}
			case 10:
				{
					day=day+31+29+31+30+31+30+31+30;
					break;
				}
			case 11:
				{
					day=day+31+29+31+30+31+30+31+30;
					break;
				}
			case 12:
				{
					day=day+31+29+31+30+31+30+31+30+31;
					break;
				}
		}
	}
	else
	{
		switch(month)
		{
		    case 1:
				{
					day=day;
					break;
				}
			case 2:
				{
					day=day+31;
					break;
				}
			case 3:
				{
					day=day+31+28;
					break;
				}
			case 4:
				{
					day=day+31+28+31;
					break;
				}
			case 5:
				{
					day=day+31+28+31+30;
					break;
				}
			case 6:
				{
					day=day+31+28+31+30+31;
					break;
				}
			case 7:
				{
					day=day+31+28+31+30+31+30;
					break;
				}
			case 8:
				{
					day=day+31+28+31+30+31+30+31;
					break;
				}
			case 9:
				{
					day=day+31+28+31+30+31+30+31+31;
					break;
				}
			case 10:
				{
					day=day+31+28+31+30+31+30+31+31+30;
					break;
				}
			case 11:
				{
					day=day+31+28+31+30+31+30+31+31+30+31;
					break;
				}
			case 12:
				{
					day=day+31+28+31+30+31+30+31+31+30+31+30;
					break;
				}
		}
	}
	printf("%d\n",day);
	return 0;
}