
int main()
{
	int y,m,d,p;
	scanf ("%d%d%d", &y, &m, &d);
	if (y%4==0)
		if (y%100==0)
			if (y%400==0)
			{
				p=29;
			}
		    else
			{
			    p=28;
			}
		else
		{
			p=29;
		}
	else
	{
		p=28;
	} 		
	
	switch (m)
	{
	case 1:
		{printf("%d",d);
		break;
		}
	case 2:
		{printf("%d", d+31);break;}
	case 3:
		{printf("%d", d+31+p);break;}
	case 4:
		{printf("%d", d+31*2+p);break;}
	case 5:
		{printf("%d", d+31*2+p+30);break;}
	case 6:
		{printf("%d", d+31*3+p+30);break;}
	case 7:
		{printf("%d", d+31*3+p+30*2);break;}
	case 8:
		{printf("%d", d+31*4+p+30*2);break;}
    case 9:
		{printf("%d", d+31*5+p+30*2);break;}
	case 10:
		{printf("%d", d+31*5+p+30*3);break;}
	case 11:
		{printf("%d", d+31*6+p+30*3);break;}
	default:
		{printf("%d", d+31*6+p+30*4);}
	}
	
	return 0;
}
