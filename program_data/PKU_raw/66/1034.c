int main()
{
	int a,b,c,d,e,f,g,h,i,j,k,l;
	scanf("%d %d %d",&a,&b,&c);
	d=(a-1)/4;
	e=(a-1)/100;
	f=(a-1)/400;
	k=(a-1)/3200;
	l=(a-1)/88981;
	g=365*(a-1)+d-e+f-k+l;
	if(a%4==0)
	{
		if(a%100==0)
		{
			if(a%400==0)
			{
				switch(b)
				{
			case 1:
				h=c-1;
				break;
			case 2:
				h=c+30;
				break;
			case 3:
				h=c+59;
				break;
			case 4:
				h=c+90;
				break;
			case 5:
				h=c+120;
				break;
			case 6:
				h=c+151;
				break;
			case 7:
				h=c+181;
				break;
			case 8:
				h=c+212;
				break;
			case 9:
				h=c+243;
				break;
			case 10:
				h=c+273;
				break;
			case 11:
				h=c+304;
				break;
			case 12:
				h=c+334;
				break;
				}
			}
			else
			{
				switch(b)
				{
			case 1:
				h=c-1;
				break;
			case 2:
				h=c+30;
				break;
			case 3:
				h=c+58;
				break;
			case 4:
				h=c+89;
				break;
			case 5:
				h=c+119;
				break;
			case 6:
				h=c+150;
				break;
			case 7:
				h=c+180;
				break;
			case 8:
				h=c+211;
				break;
			case 9:
				h=c+242;
				break;
			case 10:
				h=c+272;
				break;
			case 11:
				h=c+303;
				break;
			case 12:
				h=c+333;
				break;
				}
			}
		}
		else
		{
            switch(b)
			{
			case 1:
				h=c-1;
				break;
			case 2:
				h=c+30;
				break;
			case 3:
				h=c+59;
				break;
			case 4:
				h=c+90;
				break;
			case 5:
				h=c+120;
				break;
			case 6:
				h=c+151;
				break;
			case 7:
				h=c+181;
				break;
			case 8:
				h=c+212;
				break;
			case 9:
				h=c+243;
				break;
			case 10:
				h=c+273;
				break;
			case 11:
				h=c+304;
				break;
			case 12:
				h=c+334;
				break;
			}
		}
	}
	else
	{
		switch(b)
		{
		    case 1:
				h=c-1;
				break;
			case 2:
				h=c+30;
				break;
			case 3:
				h=c+58;
				break;
			case 4:
				h=c+89;
				break;
			case 5:
				h=c+119;
				break;
			case 6:
				h=c+150;
				break;
			case 7:
				h=c+180;
				break;
			case 8:
				h=c+211;
				break;
			case 9:
				h=c+242;
				break;
			case 10:
				h=c+272;
				break;
			case 11:
				h=c+303;
				break;
			case 12:
				h=c+333;
				break;
		}
	}
	i=g+h;
	j=i%7;
	switch(j)
	{
	case 0:
		printf("Mon.\n");
		break;
	case 1:
		printf("Tue.\n");
		break;
	case 2:
		printf("Wed.\n");
		break;
	case 3:
		printf("Thu.\n");
		break;
	case 4:
		printf("Fri.\n");
		break;
	case 5:
		printf("Sat.\n");
		break;
	case 6:
		printf("Sun.\n");
	}
	return 0;
}