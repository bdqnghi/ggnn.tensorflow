void main()
{
	int y1,y2,m1,m2,d1,d2;
	int sum1,sum2,x1,x2,final;
	scanf("%d%d%d",&y1,&m1,&d1);
	scanf("%d%d%d",&y2,&m2,&d2);
	if((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
	{ switch(m1)
	{
	            case 1:x1=d1;break;
				case 2:x1=31+d1;break;
				case 3:x1=31+29+d1;break;
				case 4:x1=31+29+31+d1;break;
				case 5:x1=31+29+31+30+d1;break;
				case 6:x1=31+29+31+30+31+d1;break;
				case 7:x1=31+29+31+30+31+30+d1;break;
			    case 8:x1=31+29+31+30+31+30+31+d1;break;
				case 9:x1=31+29+31+30+31+30+31+31+d1;break;
				case 10:x1=31+29+31+30+31+30+31+31+30+d1;break;
				case 11:x1=31+29+31+30+31+30+31+31+30+31+d1;break;
				case 12:x1=31+29+31+30+31+30+31+31+30+31+30+d1;break;
	}
		sum1=365*(y1-1)+x1+(y1-1)/4-y1/100+y1/400; 
	}
	else
	{
         switch(m1)
	{
	            case 1:x1=d1;break;
				case 2:x1=31+d1;break;
				case 3:x1=31+28+d1;break;
				case 4:x1=31+28+31+d1;break;
				case 5:x1=31+28+31+30+d1;break;
				case 6:x1=31+28+31+30+31+d1;break;
				case 7:x1=31+28+31+30+31+30+d1;break;
			    case 8:x1=31+28+31+30+31+30+31+d1;break;
				case 9:x1=31+28+31+30+31+30+31+31+d1;break;
				case 10:x1=31+28+31+30+31+30+31+31+30+d1;break;
				case 11:x1=31+28+31+30+31+30+31+31+30+31+d1;break;
				case 12:x1=31+28+31+30+31+30+31+31+30+31+30+d1;break;
	}
		 sum1=365*(y1-1)+x1+y1/4-y1/100+y1/400;
	}
	if((y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0))
	{
       switch(m2)
	{
	            case 1:x2=d2;break;
				case 2:x2=31+d2;break;
				case 3:x2=31+29+d2;break;
				case 4:x2=31+29+31+d2;break;
				case 5:x2=31+29+31+30+d2;break;
				case 6:x2=31+29+31+30+31+d2;break;
				case 7:x2=31+29+31+30+31+30+d2;break;
			    case 8:x2=31+29+31+30+31+30+31+d2;break;
				case 9:x2=31+29+31+30+31+30+31+31+d2;break;
				case 10:x2=31+29+31+30+31+30+31+31+30+d2;break;
				case 11:x2=31+29+31+30+31+30+31+31+30+31+d2;break;
				case 12:x2=31+29+31+30+31+30+31+31+30+31+30+d2;break;
	}
		sum2=365*(y2-1)+x2+(y2-1)/4-y2/100+y2/400;
	}
	else
	{
         switch(m2)
	{
	            case 1:x2=d2;break;
				case 2:x2=31+d2;break;
				case 3:x2=31+28+d2;break;
				case 4:x2=31+28+31+d2;break;
				case 5:x2=31+28+31+30+d2;break;
				case 6:x2=31+28+31+30+31+d2;break;
				case 7:x2=31+28+31+30+31+30+d2;break;
			    case 8:x2=31+28+31+30+31+30+31+d2;break;
				case 9:x2=31+28+31+30+31+30+31+31+d2;break;
				case 10:x2=31+28+31+30+31+30+31+31+30+d2;break;
				case 11:x2=31+28+31+30+31+30+31+31+30+31+d2;break;
				case 12:x2=31+28+31+30+31+30+31+31+30+31+30+d2;break;
	}
		 sum2=365*(y2-1)+x2+y2/4-y2/100+y2/400;
	}
     final=sum2-sum1;
	 printf("%d\n",final);
}