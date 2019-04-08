
int main()
{
	int startyear,endyear,startmonth,endmonth,startday,endday,i,answer;
	long int sumdays1=0,sumdays2=0;
	scanf("%d%d%d",&startyear,&startmonth,&startday);
	scanf("%d%d%d",&endyear,&endmonth,&endday);
	for(i=1;i<startyear;i++)
	{
		if((i%4==0&&i%100!=0)||(i%400==0))
		{
			sumdays1+=366;
		}
		else
		{
			sumdays1+=365;
		}
	}
	if((startyear%4==0&&startyear%100!=0)||(startyear%400==0))
	{
		switch(startmonth)
		{
		case 1:sumdays1+=0;
			break;
		case 2:sumdays1+=31;
			break;
		case 3:sumdays1+=60;
			break;
		case 4:sumdays1+=91;
			break;
		case 5:sumdays1+=121;
			break;
		case 6:sumdays1+=152;
			break;
		case 7:sumdays1+=182;
			break;
		case 8:sumdays1+=213;
			break;
		case 9:sumdays1+=244;
			break;
		case 10:sumdays1+=274;
			break;
		case 11:sumdays1+=305;
			break;
		case 12:sumdays1+=335;
			break;
		}
	}
	else
	{
		switch(startmonth)
		{
		case 1:sumdays1+=0;
			break;
		case 2:sumdays1+=31;
			break;
		case 3:sumdays1+=59;
			break;
		case 4:sumdays1+=90;
			break;
		case 5:sumdays1+=120;
			break;
		case 6:sumdays1+=151;
			break;
		case 7:sumdays1+=181;
			break;
		case 8:sumdays1+=212;
			break;
		case 9:sumdays1+=243;
			break;
		case 10:sumdays1+=273;
			break;
		case 11:sumdays1+=304;
			break;
		case 12:sumdays1+=334;
			break;
		}
	}
	sumdays1+=startday;
	for(i=1;i<endyear;i++)
	{
		if((i%4==0&&i%100!=0)||(i%400==0))
		{
			sumdays2+=366;
		}
		else
		{
			sumdays2+=365;
		}
	}
	if((endyear%4==0&&endyear%100!=0)||(endyear%400==0))
	{
		switch(endmonth)
		{
		case 1:sumdays2+=0;
			break;
		case 2:sumdays2+=31;
			break;
		case 3:sumdays2+=60;
			break;
		case 4:sumdays2+=91;
			break;
		case 5:sumdays2+=121;
			break;
		case 6:sumdays2+=152;
			break;
		case 7:sumdays2+=182;
			break;
		case 8:sumdays2+=213;
			break;
		case 9:sumdays2+=244;
			break;
		case 10:sumdays2+=274;
			break;
		case 11:sumdays2+=305;
			break;
		case 12:sumdays2+=335;
			break;
		}
	}
	else
	{
		switch(endmonth)
		{
		case 1:sumdays2+=0;
			break;
		case 2:sumdays2+=31;
			break;
		case 3:sumdays2+=59;
			break;
		case 4:sumdays2+=90;
			break;
		case 5:sumdays2+=120;
			break;
		case 6:sumdays2+=151;
			break;
		case 7:sumdays2+=181;
			break;
		case 8:sumdays2+=212;
			break;
		case 9:sumdays2+=243;
			break;
		case 10:sumdays2+=273;
			break;
		case 11:sumdays2+=304;
			break;
		case 12:sumdays2+=334;
			break;
		}
	}
	sumdays2+=endday;
	answer=sumdays2-sumdays1;
	printf("%d",answer);
	return 0;
}