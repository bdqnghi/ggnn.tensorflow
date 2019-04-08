void main()
{
	unsigned long int year,month,day,b[30][3];
	int a,c,d,i;
	for(i=0;i<5;i++)
	{
		scanf("%d %d %d",&year,&month,&day);
		b[i][0]=year;
		b[i][1]=month;
		b[i][2]=day;
	}
	for(i=0;i<5;i++)
	{	
		year=b[i][0];
	    month=b[i][1];
		day=b[i][2];
	a=(year%4==0&&year%100!=0)||year%400==0;
    if(a==1)
	{
	switch(month)
	{case 1:c=0;break;
	 case 2:c=31;break;
     case 3:c=31+29;break;
     case 4:c=31+29+31;break;
	 case 5:c=31+29+31+30;break;
	 case 6:c=31+29+31+30+31;break;
	 case 7:c=31+29+31+30+31+30;break;
	 case 8:c=31+29+31+30+31+30+31;break;
	 case 9:c=31+29+31+30+31+30+31+31;break;
     case 10:c=31+29+31+30+31+30+31+31+30;break;
     case 11:c=31+29+31+30+31+30+31+31+30+31;break;
     case 12:c=31+29+31+30+31+30+31+31+30+31+30;break;
	}
	
	}
	else
	{
	switch(month)
	{case 1:c=0;break;
	 case 2:c=31;break;
     case 3:c=31+28;break;
     case 4:c=31+28+31;break;
	 case 5:c=31+28+31+30;break;
	 case 6:c=31+28+31+30+31;break;
	 case 7:c=31+28+31+30+31+30;break;
	 case 8:c=31+28+31+30+31+30+31;break;
	 case 9:c=31+28+31+30+31+30+31+31;break;
     case 10:c=31+28+31+30+31+30+31+31+30;break;
     case 11:c=31+28+31+30+31+30+31+31+30+31;break;
     case 12:c=31+28+31+30+31+30+31+31+30+31+30;break;
	}
	}
	d=c+day;
	printf("%d\n",d);
	}
}
	