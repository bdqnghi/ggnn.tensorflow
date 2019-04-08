int main()
{
	int y,the_number=0,u,k,s,t,i,h,v,l,p,q,c,w,e,f;
	int z=0;
	int year1,month1,day1,year2,month2,day2;
	int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};                       //the number of days of every month
	scanf("%d %d %d %d %d %d",&year1,&month1,&day1,&year2,&month2,&day2);
	y=year2-year1;
    if(y==0)                                                                     //the dates are in the same year
	{
		if(month2-month1==0)
			the_number=day2-day1;
		else
		{
		    if(month1>2||month2<=2)
			{
			    for(i=1;i<=(month2-month1)-1;i++)
				   the_number=the_number+month[month1+i];
			    the_number=the_number+month[month1]-day1+day2;
			}
		    else
			{
			    for(q=1;q<=month2-month1-1;q++)
				   the_number=the_number+month[month1+q];
			    the_number=the_number+month[month1]-day1+day2+theleapyeardata(year1);
			}
		}
	}
	else                                                                         //the dates are in differentyears
	{
		if(month1>2&&month2<=2)
		{
			for(p=1;p<=y-2;p++)
				z=z+theleapyeardata(year1+p);
			for(l=1;l<=12-month1;l++)
				the_number=the_number+month[month1+l];
			for(w=1;w<=month2-1;w++)
				the_number=the_number+month[w];
			the_number=the_number+month[month1]-day1+day2+365*(year2-year1-1)+z;
		}
		else
		{
			if(month1<=2&&month2>2)
			{
				for(h=0;h<=y;h++)                 //the number of leapyears
				   z=z+theleapyeardata(year1+h);
			    for(v=1;v<=12-month1;v++)          //the first year without the first month
				   the_number=the_number+month[month1+v];
				for(c=1;c<=month2-1;c++)          //the last year without the last month
					the_number=the_number+month[c];
			    the_number=the_number+month[month1]-day1+day2+365*(year2-year1-1)+z;
			}
			else
			{
				if(month1<=2&&month2<=2)
				{
			        for(s=1;s<=y;s++)
				       z=z+theleapyeardata(year1+s-1);
			        for(t=1;t<=12-month1;t++)
			       	   the_number=the_number+month[month1+t];
					for(e=1;e<=month2-1;e++)
                       the_number=the_number+month[e];
			        the_number=the_number+month[month1]-day1+day2+365*(year2-year1-1)+z;
				}
				else
				{
			        for(u=1;u<=y;u++)
				       z=z+theleapyeardata(year1+u);
			        for(k=1;k<=12-month1;k++)
			           the_number=the_number+month[month1+k];
					for(f=1;f<=month2-1;f++)
						the_number=the_number+month[f];
			        the_number=the_number+month[month1]-day1+day2+365*(year2-year1-1)+z;
				}
			}
		}
	}
	printf("%d\n",the_number);
	return 0;
}

int theleapyeardata(int year)
{
    int z;
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		z=1;
	else z=0;
	return(z);
}