int main()
{
	int syear,smonth,sday,eyear,emonth,eday,cha=0;
	cin>>syear>>smonth>>sday>>eyear>>emonth>>eday;
	int sum1=0,sum2=0;
	switch(smonth)
	{
	case 1:sum1+=0;break;
	case 2:sum1+=31;break;
	case 3:sum1+=31+28;break;
	case 4:sum1+=31+28+31;break;
	case 5:sum1+=31+28+31+30;break;
	case 6:sum1+=31+28+31+30+31;break;
	case 7:sum1+=31+28+31+30+31+30;break;
	case 8:sum1+=31+28+31+30+31+30+31;break;
	case 9:sum1+=31+28+31+30+31+30+31+31;break;
	case 10:sum1+=31+28+31+30+31+30+31+31+30;break;
	case 11:sum1+=31+28+31+30+31+30+31+31+30+31;break;
	case 12:sum1+=31+28+31+30+31+30+31+31+30+31+30;break;
	default: break;
	}
	switch(emonth)
	{
	case 1:sum2+=0;break;
	case 2:sum2+=31;break;
	case 3:sum2+=31+28;break;
	case 4:sum2+=31+28+31;break;
	case 5:sum2+=31+28+31+30;break;
	case 6:sum2+=31+28+31+30+31;break;
	case 7:sum2+=31+28+31+30+31+30;break;
	case 8:sum2+=31+28+31+30+31+30+31;break;
	case 9:sum2+=31+28+31+30+31+30+31+31;break;
	case 10:sum2+=31+28+31+30+31+30+31+31+30;break;
	case 11:sum2+=31+28+31+30+31+30+31+31+30+31;break;
	case 12:sum2+=31+28+31+30+31+30+31+31+30+31+30;break;
	default: break;
	}
	int sum=0,year;
	for(year=syear+1;year<eyear;year++)
		if((year%4==0&&year%100!=0)||(year%400==0))
			sum++;
	if(eyear-syear>=1)
	   cha=cha+sum+365*(eyear-syear-1);
	sum1=sum1+sday;sum2=sum2+eday;
	if(((syear%4==0&&syear%100!=0)||(syear%400==0))&&smonth>=3)
		sum1=sum1;
	if(((syear%4==0&&syear%100!=0)||(syear%400==0))&&smonth<3)
		sum1=sum1-1;
	if(((eyear%4==0&&eyear%100!=0)||(eyear%400==0))&&emonth>=3)
		sum2=sum2+1;
	if(((eyear%4==0&&eyear%100!=0)||(eyear%400==0))&&emonth<3)
		sum2=sum2;
	if(eyear-syear>=1)
	cha=cha+365-sum1+sum2;
	if(eyear-syear==0)
		cha=sum2-sum1;
	cout<<cha<<endl;
	return 0;
}





