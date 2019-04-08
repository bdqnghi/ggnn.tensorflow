int main()
{
	int year,month,day;
	int xq,count;
	int a,b,c,d;
	scanf("%d%d%d",&year,&month,&day);
	year=year%400;
	if (year==0)
	{
		xq=6;
	}
	else
	{
		a=year/100;
		if (a==0)
			xq=6;
		if (a==1)
			xq=4;
		if (a==2)
			xq=2;
		if (a==3)
			xq=0;
		b=year%100;
		c=b%4;
		d=b/4;
		if (c!=0)
			xq=xq+5*d+c+1;
		if (c==0)
			xq=xq+5*d;



		xq=xq%7;
	}
	if (year%4!=0||year%100==0&&year%400!=0)
	{
          switch (month)
		  {
		  case 1:
			  count=day-1;
			  break;
		  case 2:
			  count=day+31-1;
			  break;
		  case 3:
			  count=day+31+28-1;
			  break;
		  case 4:
			  count=day+31+28+31-1;
			  break;
		  case 5:
			  count=day+31+28+31+30-1;
			  break;
		  case 6:
			  count=day+31+28+31+30+31-1;
			  break;
		  case 7:
			  count=day+31+28+31+30+31+30-1;
			  break;
		  case 8:
			  count=day+31+28+31+30+31+30+31-1;
			  break;
		  case 9:
			  count=day+31+28+31+30+31+30+31+31-1;
			  break;
		  case 10:
			  count=day+31+28+31+30+31+30+31+31+30-1;
			  break;
		  case 11:
			  count=day+31+28+31+30+31+30+31+31+30+31-1;
			  break;
		  case 12:
			  count=day+31+28+31+30+31+30+31+31+30+31+30-1;
			  break;
		  }
	}
	else
	{
		switch (month)
		  {
		  case 1:
			  count=day-1;
			  break;
		  case 2:
			  count=day+31-1;
			  break;
		  case 3:
			  count=day+31+29-1;
			  break;
		  case 4:
			  count=day+31+29+31-1;
			  break;
		  case 5:
			  count=day+31+29+31+30-1;
			  break;
		  case 6:
			  count=day+31+29+31+30+31-1;
			  break;
		  case 7:
			  count=day+31+29+31+30+31+30-1;
			  break;
		  case 8:
			  count=day+31+29+31+30+31+30+31-1;
			  break;
		  case 9:
			  count=day+31+29+31+30+31+30+31+31-1;
			  break;
		  case 10:
			  count=day+31+29+31+30+31+30+31+31+30-1;
			  break;
		  case 11:
			  count=day+31+29+31+30+31+30+31+31+30+31-1;
			  break;
		  case 12:
			  count=day+31+29+31+30+31+30+31+31+30+31+30-1;
			  break;
		  }
	}
	xq=xq+count%7;
	xq=xq%7;
	switch (xq)
	{
	case 0:
		printf("Sun.");
		break;
	case 1:
		printf("Mon.");
		break;
	case 2:
		printf("Tue.");
		break;
	case 3:
		printf("Wed.");
		break;
	case 4:
		printf("Thu.");
		break;
	case 5:
		printf("Fri.");
		break;
	case 6:
		printf("Sat.");
		break;
	}
		


	
	return 0;
}