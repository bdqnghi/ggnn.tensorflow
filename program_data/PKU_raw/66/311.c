

int leap(int a)
{
	if(a%4!=0)
		return 0;
	else
	{
		if(a%100!=0)
			return 1;
		else
		{
			if(a%400==0)
				return 1;
			else
				return 0;
		}
	}
}

void main()
{
	int y,y0,y1,y2,m,d,sum=0;
	scanf("%d%d%d",&y,&m,&d);
	y0=y-1;
	y0=y0%400;
	if(y>0)
	{	
		y1=y0%4;
		y2=y0/4;
		sum=sum+y2*5+y1-y0/100;
	}
	if(leap(y)==0)
	{
		switch(m)
		{
		case 1:break;
		case 2:sum=sum+3;break;
		case 3:sum=sum+3;break;
		case 4:sum=sum+6;break;
		case 5:sum=sum+1;break;
		case 6:sum=sum+4;break;
		case 7:sum=sum+6;break;
		case 8:sum=sum+2;break;
		case 9:sum=sum+5;break;
		case 10:break;
		case 11:sum=sum+3;break;
		case 12:sum=sum+5;break;
		}
	}
	else
	{
		switch(m)
		{
		case 1:break;
		case 2:sum=sum+3;break;
		case 3:sum=sum+4;break;
		case 4:break;
		case 5:sum=sum+2;break;
		case 6:sum=sum+5;break;
		case 7:break;
		case 8:sum=sum+3;break;
		case 9:sum=sum+6;break;
		case 10:sum=sum+1;break;
		case 11:sum=sum+4;break;
		case 12:sum=sum+6;break;
		}
	}
	sum=sum+d%7;
	sum=sum%7;
	switch(sum)
	{
    case 1:printf("Mon.\n");break;
	case 2:printf("Tue.\n");break;
	case 3:printf("Wed.\n");break;
	case 4:printf("Thu.\n");break;
	case 5:printf("Fri.\n");break;
	case 6:printf("Sat.\n");break;
	case 0:printf("Sun.\n");break;
	}
}



