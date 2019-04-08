int main()
{
	int y,m,d,c,j;
	int num=0;
	int day=0;
	scanf("%d",&y);
	scanf("%d",&m);
	scanf("%d",&d);
	c=y-1;
	day+=c*(365%7)+c/4-c/100+c/400;
	for(j=1;j<m;j++)
	{
	switch(j)
	{
	case 1:
	case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
		day+=31;
		break;
    case 4:
    case 6:
    case 9:
    case 11:
		day+=30;
		break;
	case 2:
		if(y%4==0&&y%100!=0||y%400==0)
			day+=29;
		
		else
			day+=28;
		break;
	}
	}
	day+=d;
	 	if(day%7==1)
		{
			printf("Mon.");
		}
		if(day%7==2)
		{
			printf("Tue.");
		}
 		if(day%7==3)
		{
			printf("Wed.");
		}
		if(day%7==4)
		{
			printf("Thu.");
		}
		if(day%7==5)
		{
			printf("Fri.");
		}
		if(day%7==6)
		{
			printf("Sat.");
		}
		if(day%7==0)
		{
			printf("Sun.");
		}
		return 0;
	}