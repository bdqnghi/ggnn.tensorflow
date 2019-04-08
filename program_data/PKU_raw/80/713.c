int main() 
{
	int startYear,startMonth,startDay,endYear,endMonth,endDay;                           //??????????? 
	scanf("%d%d%d%d%d%d",&startYear,&startMonth,&startDay,&endYear,&endMonth,&endDay);   //??????????? 
	int sum=0,sumYear=0,sumMonth=0,sumDay=0;                                             //???????????????? 
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};                                     //????12?????
	int b[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};                                     //????12?????
	int i;
    //?????????? 
	{
	    if(startDay<endDay)
	        {
			    for(i=startDay;i<endDay;i++) sumDay+=1;
	        }
	    else if(startDay>endDay)
	        {
			    for(i=startDay;i>endDay;i--) sumDay-=1;
		    }
    }
    //?????????? 
	{
		if(startMonth<endMonth)
		    {
				if((endYear%4==0&&endYear%100!=0)||(endYear%400==0))    
				    {
						for(i=startMonth;i<endMonth;i++) sumMonth+=b[i];                //?????????????? 
					}
				else 
				    for(i=startMonth;i<endMonth;i++) sumMonth+=a[i];
			}
		else if(startMonth>endMonth)
		    {
				if((endYear%4==0&&endYear%100!=0)||(endYear%400==0)) 
				    {
						for(i=startMonth;i>endMonth;i--) sumMonth-=b[i];
					}
				else 
				    for(i=startMonth;i>endMonth;i--) sumMonth-=a[i];
			}
	} 
	//??????????
	{
		if(startYear<endYear)
		   {
				for(i=startYear;i<endYear;i++) 
				{
					if((i%4==0&&i%100!=0)||(i%400==0)) sumYear+=366;
					else sumYear+=365;
				}
		   }
	}
	sum=sumDay+sumMonth+sumYear;
	printf("%d",sum);
	return 0;
}