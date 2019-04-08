int main()
{
	int startyear,startmonth,startday,endyear,endmonth,endday,month[11],j,sumday,sum=0,startdays=0,enddays=0;
	month[0]=31;
	month[1]=28;
	month[2]=31;
	month[3]=30;
	month[4]=31;
	month[5]=30;
	month[6]=31;
	month[7]=31;
	month[8]=30;
	month[9]=31;
	month[10]=30;
	month[11]=31;
	scanf("%d%d%d%d%d%d",&startyear,&startmonth,&startday,&endyear,&endmonth,&endday);
	for(j=1;j<=startmonth-1;j++)
	startdays=startdays+month[j-1];
	startdays=startdays+startday;
	if(((startyear%4==0&&startyear%100!=0)||(startyear%400==0))&&(startmonth>2)) startdays=startdays+1;
	for(j=1;j<=endmonth-1;j++)
	enddays=enddays+month[j-1];
	enddays=enddays+endday;
	if(((endyear%4==0&&endyear%100!=0)||(endyear%400==0))&&(endmonth>2)) enddays=enddays+1;
	if(startyear==endyear) sumday=enddays-startdays;
	else
	{
		for(j=startyear;j<=endyear-1;j++)
		if((j%400!=0&&j%100==0)||(j%4!=0)) sum=sum+365;
		else sum=sum+366;
		sumday=sum+enddays-startdays;
	}
	printf("%d",sumday);
	return 0;
}