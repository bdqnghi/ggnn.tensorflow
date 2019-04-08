int god(int y,int m,int d);
int main(void)
{
	int year1,month1,day1,year2,month2,day2;
	scanf("%d%d%d%d%d%d",&year1,&month1,&day1,&year2,&month2,&day2);
		printf("%d",god(year2,month2,day2)-god(year1,month1,day1));
				
	getchar();
	return 0;
}
int god(int y,int m,int d)
{
	int sum =0,ctr;
	for(ctr=1;ctr<y;ctr++)
	{
		if((ctr % 4 == 0 && ctr % 100 != 0) || (ctr % 400 == 0))
			sum+=366;
		else
			sum+=365;
	}
	switch(m)
	{
	case 12:
		sum+=30;
	case 11:
		sum+=31;
	case 10:
		sum+=30;
	case 9:
		sum+=31;
	case 8:
		sum+=31;
	case 7:
		sum+=30;
	case 6:
		sum+=31;
	case 5:
		sum+=30;
	case 4:
		sum+=31;
	case 3:
		{
		if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
			sum+=29;
		else sum+=28;
		   }
	case 2:sum+=31;
	case 1:
	default:sum+=d;
		break;
	}
												
   	return sum;
}

	