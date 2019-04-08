
int main()
{
	int year1,month1,date1,year2,month2,date2;                             //1?????2????//
	int year_2;                                                            //faciliate caculation//
	int year,month,date;
	scanf("%d%d%d\n%d%d%d",&year1,&month1,&date1,&year2,&month2,&date2);
	year_2=year2;
	if(date1<=date2) date=date2-date1;
	else 		
	{
		month2=month2-1; 
		        if((month2<=7&&month2%2!=0)||(month2>7&&month2%2==0))     //????????????//
                date=date2-date1+31;
	            else if(month2!=2) 
			    date=date2-date1+30;
                     else if((year2%4==0&&year2%100!=0)||(year2%400==0))           //????//
						  date=date2-date1+29;
					      else date=date2-date1+28;
	}
	if(month2>=month1) month=month2-month1;
	else             
	{
		month=month2-month1+12;
		year_2=year2-1;
	}
	year=year_2-year1;

	/*???????????year??month??date?*/

	int day,monthday,yearday;                     //????????????????????????????//
	int monthday1=0,monthday2=0;
	day=0;
    monthday=0;
	int judgeyear2;                               //faciliate caculation//
	int i;
	if(month1+month>=12) judgeyear2=year_2;
	else judgeyear2=year2;
	for(i=1;i<=month1-1;i++)                         /*????????????*/
        if(i<=12)                                                                   //??+31???+30//
			if((i<=7&&i%2!=0)||(i>7&&i%2==0)) monthday1=monthday1+31;
			else 
				if(i==2) 
				{
				    if((year1%4==0&&year1%100!=0)||(year1%400==0))           //????//
			                  monthday1=monthday1+29;
	                else monthday1=monthday1+28;
				}
				 else monthday1=monthday1+30;
	for(i=1;i<=month1+month-1;i++)                                      /*????????????*/
		if(i>12)
			if(((i-12)<=7&&(i-12)%2!=0)||((i-12)>7&&(i-12)%2==0)) monthday2=monthday2+31;
			else 
				if((i-12)==2)
				{
				    if((year2%4==0&&year2%100!=0)||(year2%400==0))           //????//
			                  monthday2=monthday2+29;
	                else monthday2=monthday2+28;
				}
				 else monthday2=monthday2+30;
		else
			if((i<=7&&i%2!=0)||(i>7&&i%2==0)) monthday2=monthday2+31;
			else 
				if(i==2)
				{
				    if((judgeyear2%4==0&&judgeyear2%100!=0)||(judgeyear2%400==0))           //????//
			                  monthday2=monthday2+29;
	                else monthday2=monthday2+28;
				}
				 else monthday2=monthday2+30;
	monthday=monthday2-monthday1;
	yearday=365*year;                                        /*??????365????????????????*/
    int j;
	year2=year_2;
	for(j=year1;j<=year2-1;j++)
	    if((j%4==0&&j%100!=0)||(j%400==0))
			yearday=yearday+1;
		else continue;
	day=date+monthday+yearday;

	printf("%d\n",day);

	return 0;

    
}
