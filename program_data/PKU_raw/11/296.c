int main(int argc, char* argv[])
{
	int year,month,day,x;
	scanf("%d%d%d",&year,&month,&day);
	switch(month)
	{
	case 1:x=day;break;
	case 2:x=31+day;break;
	case 3:x=31+28+day;break;
	case 4:x=31+28+31+day;break;
	case 5:x=31+28+31+30+day;break;
	case 6:x=31+28+31+30+31+day;break;
	case 7:x=31+28+31+30+31+30+day;break;
	case 8:x=31+28+31+30+31+30+31+day;break;
	case 9:x=31+28+31+30+31+30+31+31+day;break;
	case 10:x=31+28+31+30+31+30+31+31+30+day;break;
	case 11:x=31+28+31+30+31+30+31+31+30+31+day;break;
	case 12:x=31+28+31+30+31+30+31+31+30+31+30+day;break;
	}
    if(year%4==0)
		if(year%100==0)
			if(year%400==0)
				if(month>=3)
				{
				printf("%d",x+1);
				}
				else
				{
                printf("%d",x);
				}
			else
				printf("%d",x);
		else
			if(month>=3)
				{
				printf("%d",x+1);
				}
				else
				{
                printf("%d",x);
				}
	else
		printf("%d",x);


	return 0;
}