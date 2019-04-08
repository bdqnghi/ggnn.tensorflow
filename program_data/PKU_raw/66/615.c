void main()
{
	int a,b,c,d=0,i,t;
	scanf("%d %d %d",&a,&b,&c);
	if(((a-1)%400)==0)
		d=0;
		else
	{
	for(i=1;i<=((a-1)%400);i++)
	{
		if((i%4)==0)
		{
			if((i%100)==0)
			{
				if((i%400)==0)
					d=d+366;
				else
					d=d+365;
			}
			else
				d=d+366;
		}
		else
			d=d+365;
	}
	}
	switch(b)
	{
	case 1:d=d+c-1;break;
	case 2:d=d+30+c;break;
	case 3:d=d+58+c;break;
	case 4:d=d+89+c;break;
	case 5:d=d+119+c;break;
	case 6:d=d+150+c;break;
	case 7:d=d+180+c;break;
	case 8:d=d+211+c;break;
	case 9:d=d+242+c;break;
	case 10:d=d+272+c;break;
	case 11:d=d+303+c;break;
	case 12:d=d+333+c;break;
	}
	if(((i%4)==0)&&(b>2))
	{
			if((i%100)==0)
			{
				if((i%400)==0)
					d=d+1;
			}
			else
				d=d+1;
	}
  t=d%7;
  switch(t)
  {
  case 0:printf("Mon.");break;
  case 1:printf("Tue.");break;
  case 2:printf("Wed.");break;
  case 3:printf("Thu.");break;
  case 4:printf("Fri.");break;
  case 5:printf("Sat.");break;
  case 6:printf("Sun.");break;
  }
}		