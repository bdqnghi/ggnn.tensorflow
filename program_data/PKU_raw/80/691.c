//??????????????
//?????startyear?????????????endyear
//?????11.4
//????wayne
int main()
{
	int syear,smonth,sday,eyear,emonth,eday,i;
	int sum=0;
	cin>>syear>>smonth>>sday
		>>eyear>>emonth>>eday;
	if (smonth>2)                               //??2??????????
	{
		switch (smonth)
		{
		case 3:  sum=sum+31+30+31+30+31+31+30+31+30+31-sday;break;
		case 4:  sum=sum+31+30+31+30+31+31+30+31+30-sday;break;
		case 5:  sum=sum+31+30+31+30+31+31+30+31-sday;break;
		case 6:  sum=sum+31+30+31+30+31+31+30-sday;break;
		case 7:  sum=sum+31+30+31+30+31+31-sday;break;
		case 8:  sum=sum+31+30+31+30+31-sday;break;
		case 9:  sum=sum+31+30+31+30-sday;break;
		case 10: sum=sum+31+30+31-sday;break;
		case 11: sum=sum+31+30-sday;break;
		case 12: sum=sum+31-sday;            //????break????????
		}
	}
	else if ((syear%4==0&&syear%100!=0)||(syear%400==0))    //???????????????
	{
        switch (smonth)
		{
		case 1: sum=sum+31+30+31+30+31+31+30+31+30+31+29+31-sday;break;
		case 2: sum=sum+31+30+31+30+31+31+30+31+30+31+29-sday;
		}
	}
	else 
	{
        switch (smonth)
		{
		case 1: sum=sum+31+30+31+30+31+31+30+31+30+31+28+31-sday;break;
		case 2: sum=sum+31+30+31+30+31+31+30+31+30+31+28-sday;
		}
	}
	for (i=syear+1;i<=eyear-1;i++)             //????????????????????365??366
	{
		if ((i%4==0&&i%100!=0)||(i%400==0))
			sum=sum+366;
		else 
			sum=sum+365;
	}
	if (emonth==1)
	{
		sum=sum+eday;
	}
	else if (emonth==2)                   //ednyear???????????????
	{
		sum=sum+31+eday;
	}
	else if ((eyear%4==0&&eyear%100!=0)||(eyear%400==0))
	{
	    switch (emonth)
		{
		case 12: sum=sum+31+29+31+30+31+30+31+31+30+31+30+eday;break;
		case 11: sum=sum+31+29+31+30+31+30+31+31+30+31+eday;break;
		case 10: sum=sum+31+29+31+30+31+30+31+31+30+eday;break;
		case 9:  sum=sum+31+29+31+30+31+30+31+31+eday;break;
		case 8:  sum=sum+31+29+31+30+31+30+31+eday;break;
		case 7:  sum=sum+31+29+31+30+31+30+eday;break;
		case 6:  sum=sum+31+29+31+30+31+eday;break;
		case 5:  sum=sum+31+29+31+30+eday;break;
		case 4:  sum=sum+31+29+31+sday;break;
		case 3:  sum=sum+31+29+sday;
		}
	}
	else 
	{
        switch (emonth)
		{
		case 12: sum=sum+31+28+31+30+31+30+31+31+30+31+30+eday;break;
		case 11: sum=sum+31+28+31+30+31+30+31+31+30+31+eday;break;
		case 10: sum=sum+31+28+31+30+31+30+31+31+30+eday;break;
		case 9:  sum=sum+31+28+31+30+31+30+31+31+eday;break;
		case 8:  sum=sum+31+28+31+30+31+30+31+eday;break;
		case 7:  sum=sum+31+28+31+30+31+30+eday;break;
		case 6:  sum=sum+31+28+31+30+31+eday;break;
		case 5:  sum=sum+31+28+31+30+eday;break;
		case 4:  sum=sum+31+28+31+eday;break;
		case 3:  sum=sum+31+28+eday;
		}
	}
	if (syear==eyear)                  //????????????????????
	{
		if ((eyear%4==0&&eyear%100!=0)||(eyear%400==0))
			sum=sum-366;
		else 
			sum=sum-365;
	}              
	cout<<sum<<endl;
	return 0;
}