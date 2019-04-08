void main()
{
	int a,b,c,d,e,f,x,y,z,r,s;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);a=a-1;
	x=366*(a/4-a/100+a/400-1)+365*(a-(a/4-a/100+a/400)+1);a=a+1;
	if((a%4==0&&a%100!=0)||(a%400==0))
	{
		switch(b)
		{
		case 1:y=0;break;
		case 2:y=31;break;
		case 3:y=31+29;break;
		case 4:y=31+29+31;break;
		case 5:y=31+29+31+30;break;
	    case 6:y=31+29+31+30+31;break;
		case 7:y=31*3+29+30*2;break;
		case 8:y=31*4+29+30*2;break;
		case 9:y=31*5+29+30*2;break;
	    case 10:y=31*5+29+30*3;break;
		case 11:y=31*6+29+30*3;break;
		default:y=31*6+29+30*4;
		}
	}
	else
	{
		switch(b)
		{
		case 1:y=0;break;
		case 2:y=31;break;
		case 3:y=31+28;break;
		case 4:y=31+28+31;break;
		case 5:y=31+28+31+30;break;
	    case 6:y=31+28+31+30+31;break;
		case 7:y=31*3+28+30*2;break;
		case 8:y=31*4+28+30*2;break;
		case 9:y=31*5+28+30*2;break;
	    case 10:y=31*5+28+30*3;break;
		case 11:y=31*6+28+30*3;break;
		default:y=31*6+28+30*4;
		}
	}
	z=x+y+c;d=d-1;
	x=366*(d/4-d/100+d/400-1)+365*(d-(d/4-d/100+d/400)+1);d=d+1;
	if((d%4==0&&d%100!=0)||(d%400==0))
	{
		switch(e)
		{
		case 1:y=0;break;
		case 2:y=31;break;
		case 3:y=31+29;break;
		case 4:y=31+29+31;break;
		case 5:y=31+29+31+30;break;
	    case 6:y=31+29+31+30+31;break;
		case 7:y=31*3+29+30*2;break;
		case 8:y=31*4+29+30*2;break;
		case 9:y=31*5+29+30*2;break;
	    case 10:y=31*5+29+30*3;break;
		case 11:y=31*6+29+30*3;break;
		default:y=31*6+29+30*4;
		}
	}
	else
	{
		switch(e)
		{
		case 1:y=0;break;
		case 2:y=31;break;
		case 3:y=31+28;break;
		case 4:y=31+28+31;break;
		case 5:y=31+28+31+30;break;
	    case 6:y=31+28+31+30+31;break;
		case 7:y=31*3+28+30*2;break;
		case 8:y=31*4+28+30*2;break;
		case 9:y=31*5+28+30*2;break;
	    case 10:y=31*5+28+30*3;break;
		case 11:y=31*6+28+30*3;break;
		default:y=31*6+28+30*4;
		}
	}
	r=x+y+f;
	s=r-z;printf("%d",s);
}