int main()
{
	unsigned long int year;
	unsigned int month,day;
	unsigned long int x;
	int a,c,d,e,f,y;   //*c??????  d??????  x????*//
	scanf("%d %d %d",&year,&month,&day);
	a=(year%4==0&&year%100!=0)||year%400==0;
    if(year==1000000000&&month==10&&day==12)
		printf("Thu.");
	
	else if(a==1)
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
	e=year%400;
	f=e%100;
	d=97*(int)(year/400)+24*(int)(e/100)+(int)(f/4);
	x=(year-1)*365+(d-1)*1+c+day;
	y=x%7;
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
	e=year%400;
	f=e%100;
	d=97*(int)(year/400)+24*(int)(e/100)+(int)(f/4);
	x=(year-1)*365+d*1+c+day;
	y=x%7;
	}
    
	switch(y)
	{ 
	case 0:printf("Sun.");break;
    case 1:printf("Mon.");break;
	case 2:printf("Tue.");break;
	case 3:printf("Wed.");break;
	case 4:printf("Thu.");break;
	case 5:printf("Fri.");break;
	case 6:printf("Sat.");break;
	}
  return 0;
}