void main()
{
	int startYear,startMonth,startDay,endYear,endMonth,endDay,y,a,n,m,b,b2,x;
	scanf("%d%d%d%d%d%d",&startYear,&startMonth,&startDay,&endYear,&endMonth,&endDay);
    y=startYear;
	a=0;
	while(y<=endYear)
		{
		int f;
		   if((y%4==0&&y%100!=0)||(y%100==0&&y%400==0))
			   f=1;
			else f=0;
		   if(f==1)
			   a=a+1;
		 y=y+1;
	}
	if ((startYear%4==0&&startYear%100!=0)||(startYear%100==0&&startYear%400==0))
	a=a-1;
	if ((endYear%4==0&&endYear%100!=0)||(endYear%100==0&&endYear%400==0))
	a=a-1;
	n=a*366;
	if ((startYear%4==0&&startYear%100!=0)||(startYear%100==0&&startYear%400==0))
    {
	 if(startMonth==1)
		   b=0;
	   else if(startMonth==2)
		   b=31;
	   else if(startMonth==3)
		   b=60;
	   else if(startMonth==4)
		   b=91;
	   else if(startMonth==5)
	       b=121;
	   else if(startMonth==6)
		   b=152;
	   else if(startMonth==7)
		   b=182;
	   else if(startMonth==8)
		   b=213;
	   else if(startMonth==9)
		   b=244;
	   else if(startMonth==10)
	       b=274;
	   else if(startMonth==11)
		   b=305;
	   else 
		   b=335;  
	   }
	else
	{
	if(startMonth==1)
		   b=0;
	   else if(startMonth==2)
		   b=31;
	   else if(startMonth==3)
		   b=59;
	   else if(startMonth==4)
		   b=90;
	   else if(startMonth==5)
	       b=120;
	   else if(startMonth==6)
		   b=151;
	   else if(startMonth==7)
		   b=181;
	   else if(startMonth==8)
		   b=212;
	   else if(startMonth==9)
		   b=243;
	   else if(startMonth==10)
	       b=273;
	   else if(startMonth==11)
		   b=304;
	   else 
		   b=334;
	   b=b+1;
	}


	if ((endYear%4==0&&endYear%100!=0)||(endYear%100==0&&endYear%400==0))
	{
	   if(endMonth==1)
		   b2=0;
	   else if(endMonth==2)
		   b2=31;
	   else if(endMonth==3)
		   b2=60;
	   else if(endMonth==4)
		   b2=91;
	   else if(endMonth==5)
	       b2=121;
	   else if(endMonth==6)
		   b2=152;
	   else if(endMonth==7)
		   b2=182;
	   else if(endMonth==8)
		   b2=213;
	   else if(endMonth==9)
		   b2=244;
	   else if(endMonth==10)
	       b2=274;
	   else if(endMonth==11)
		   b2=305;
	   else 
		   b2=335;
	   }
	else
	{
	if(endMonth==1)
		   b2=0;
	   else if(endMonth==2)
		   b2=31;
	   else if(endMonth==3)
		   b2=59;
	   else if(endMonth==4)
		   b2=90;
	   else if(endMonth==5)
	       b2=120;
	   else if(endMonth==6)
		   b2=151;
	   else if(endMonth==7)
		   b2=181;
	   else if(endMonth==8)
		   b2=212;
	   else if(endMonth==9)
		   b2=243;
	   else if(endMonth==10)
	       b2=273;
	   else if(endMonth==11)
		   b2=304;
	   else 
		   b2=334;
	}

	x=366-b-startDay+b2+endDay+366*a+(endYear-startYear-1-a)*365;
    printf("%d",x);
}
