int main()
{
	int year,month,date,t,y,m,d,s;
	scanf("%d %d %d",&year,&month,&date);
	t=(year-1)/400;
	year=year-t*400;
    t=(year-1)/4;
	y=(t*366+(year-1-t)*365)%7;
	if (year>300) y=(y-3)%7;
	else if (year>200) y=(y-2)%7;
	else if (year>100) y=(y-1)%7;
	switch(month)
	{
	 case 1:m=0;break;
	 case 2:m=3;break;
	 case 3:m=3;break;
	 case 4:m=6;break;
	 case 5:m=1;break;
	 case 6:m=4;break;
	 case 7:m=6;break;
	 case 8:m=2;break;
	 case 9:m=5;break;
	 case 10:m=0;break;
	 case 11:m=3;break;
	 case 12:m=5;break;
	}
	if((year%4==0&&year%100!=0||year%400==0)&&month>2) m=(m+1)%7;
	d=date%7;
	s=(m+y+d)%7;
	switch (s)
	{
	case 0: printf("Sun.\n");break;
    case 1: printf("Mon.\n");break;
	case 2: printf("Tue.\n");break;
    case 3: printf("Wed.\n");break;
	case 4: printf("Thu.\n");break;
	case 5: printf("Fri.\n");break;
	case 6: printf("Sat.\n");break;
							
	}

		
		return 0;
}