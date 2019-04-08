
int main()
{
	int m,d,w;
	long int D,y;
	scanf("%ld %d %d",&y,&m,&d);
	y--;
	D=365*(y%280000)+(y%280000)/4-y/100+y/400+d;
	switch(m)
	{
	case 2:D=D+31;break;
	case 3:D=D+31+28;break;
	case 4:D=D+31+28+31;break;
	case 5:D=D+31+28+31+30;break;
	case 6:D=D+31+28+31+30+31;break;
	case 7:D=D+31+28+31+30+31+30;break;	
	case 8:D=D+31+28+31+30+31+30+31;break;
	case 9:D=D+31+28+31+30+31+30+31+31;break;
	case 10:D=D+31+28+31+30+31+30+31+31+30;break;
	case 11:D=D+31+28+31+30+31+30+31+31+30+31;break;
	case 12:D=D+31+28+31+30+31+30+31+31+30+31+30;
	}
	y++;
	if(y%400==0)
	{
		if(m>2)
			D++;
	}
	else if(y%4==0&&y%100!=0)
	{
		if(m>2)
			D++;
	}
	w=D%7;
	switch(w)
	{
	case 0:printf("Sun.");break;
	case 1:printf("Mon.");break;
	case 2:printf("Tue.");break;
	case 3:printf("Wed.");break;
	case 4:printf("Thu.");break;
	case 5:printf("Fri.");break;
	case 6:printf("Sat.");
	}
	return 0;
}


