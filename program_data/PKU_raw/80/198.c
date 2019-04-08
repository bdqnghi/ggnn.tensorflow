main()
{
	int year1,year2,m1,m2,d1,d2,days=0,total1=0,total2=0,i;
	scanf("%d %d %d",&year1,&m1,&d1);
	scanf("%d %d %d",&year2,&m2,&d2);
	for(i=1;i<m1;i++)
	{
		if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
			total1=total1+31;
		if(i==4 || i==6 || i==9 || i==11)
			total1=total1+30;
		if(i==2)
		{
			if((year1%4==0 && year1%100!=0) || year1%400==0)
				total1=total1+29;
			else total1=total1+28;
		}
	}
	total1=total1+d1;
	/*printf("%d\n",total1);*/
	for(i=1;i<m2;i++)
	{
		if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
			total2=total2+31;
		if(i==4 || i==6 || i==9 || i==11)
			total2=total2+30;
		if(i==2)
		{
			if((year2%4==0 && year2%100!=0) || year2%400==0)
				total2=total2+29;
			else total2=total2+28;
		}
	}
	total2=total2+d2;
	/*printf("%d\n",total2);*/
	for(i=year1;i<year2;i++)
	{
		if((i%4==0 && i%100!=0) || i%400==0)
			days=days+366;
		else days=days+365;
	}
	if(total1<=total2)
		days=days+total2-total1;
	else days=days-(total1-total2);
	printf("%d",days);
}

