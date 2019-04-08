int main()
{
	int i,t;
	int startyear,startMonth,startDay;
	int endyear,endMonth,endDay;
	int day,a,b,m=0,n=0;
	scanf("%d%d%d",&startyear,&startMonth,&startDay);
	scanf("%d%d%d",&endyear,&endMonth,&endDay);
    if((startyear%4==0 && startyear%100!=0) || (startyear%400==0))
	{
		switch(startMonth)
		{
		case 1:a=startDay-32;
			break;
		case 2:a=startDay-1;
			break;
		case 3:a=28+startDay;
			break;
		case 4:a=59+startDay;
			break;
		case 5:a=89+startDay;
			break;
		case 6:a=120+startDay;
			break;
		case 7:a=150+startDay;
			break;
		case 8:a=181+startDay;
			break;
		case 9:a=212+startDay;
			break;
		case 10:a=242+startDay;
			break;
		case 11:a=273+startDay;
			break;
		case 12:a=303+startDay;
			break;
		}
	}
		else
		{
	    switch(startMonth)
		{
		case 1:a=startDay-32;
			break;
		case 2:a=startDay-1;
			break;
		case 3:a=28+startDay-1;
			break;
		case 4:a=59+startDay-1;
			break;
		case 5:a=89+startDay-1;
			break;
		case 6:a=120+startDay-1;
			break;
		case 7:a=150+startDay-1;
			break;
		case 8:a=181+startDay-1;
			break;
		case 9:a=212+startDay-1;
			break;
		case 10:a=242+startDay-1;
			break;
		case 11:a=273+startDay-1;
			break;
		case 12:a=303+startDay-1;
			break;
		}
		}
	 if((endyear%4==0 && endyear%100!=0) || (endyear%400==0))
	{
		switch(endMonth)
		{
		case 1:b=endDay-32;
			break;
		case 2:b=endDay-1;
			break;
		case 3:b=28+endDay;
			break;
		case 4:b=59+endDay;
			break;
		case 5:b=89+endDay;
			break;
		case 6:b=120+endDay;
			break;
		case 7:b=150+endDay;
			break;
		case 8:b=181+endDay;
			break;
		case 9:b=212+endDay;
			break;
		case 10:b=242+endDay;
			break;
		case 11:b=273+endDay;
			break;
		case 12:b=303+endDay;
			break;
		}
	 }
		else
		{
	    switch(endMonth)
		{
		case 1:b=endDay-32;
			break;
		case 2:b=endDay-1;
			break;
		case 3:b=28+endDay-1;
			break;
		case 4:b=59+endDay-1;
			break;
		case 5:b=89+endDay-1;
			break;
		case 6:b=120+endDay-1;
			break;
		case 7:b=150+endDay-1;
			break;
		case 8:b=181+endDay-1;
			break;
		case 9:b=212+endDay-1;
			break;
		case 10:b=242+endDay-1;
			break;
		case 11:b=273+endDay-1;
			break;
		case 12:b=303+endDay-1;
			break;
		}
		}
		if(startyear>endyear)
		{
			t=endyear;
			endyear=startyear;
			startyear=t;
		}
		for(i=startyear;i<endyear;i++)
		{
			if((i%4==0 && i%100!=0) || (i%400==0))
				m=m+1;
		}
        if(startyear==endyear)
			n=0,m=0;
		else
		n=endyear-startyear-m;
		day=(366*m+365*n-a+b);
		printf("%d",day);
		return 0;
		}

