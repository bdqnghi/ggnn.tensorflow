int main()
{
	int a,b,c,e,f,g,h,i,j,d1,d2,o;
	scanf("%d  %d %d %d %d %d",&a,&b,&c,&e,&f,&g);   //?????
	h=0;
	j=0;
	for(i=a+1;i<e;i++)   //??????????????????????
	{
		if((i%4==0&&i%100!=0)||i%400==0)  h=h+1;
		j=j+1;
	}
	b-=1;
	f-=1;
	if((a%4==0&&a%100!=0)||a%400==0)   //?????????????????????????
	{
		switch(b)
		    {
		    case 0: d1=0;break;
			case 1: d1=31;break;
			case 2: d1=29+31;break;
			case 3: d1=31*2+29;break;
			case 4: d1=30+31*2+29;break;
			case 5: d1=31*3+30+29;break;
			case 6: d1=30*2+31*3+29;break;
			case 7: d1=31*4+30*2+29;break;
			case 8: d1=31*5+30*2+29;break;
            case 9: d1=31*5+30*3+29;break;
            case 10: d1=31*6+30*3+29;break;
            case 11: d1=31*6+30*4+29;break;
		    default: printf("error\n");
			}
	}
	else
	{
		switch(b)
			{
			case 0: d1=0;break;
			case 1: d1=31;break;
			case 2: d1=28+31;break; 
			case 3: d1=31*2+28;break;
			case 4: d1=30+31*2+28;break;
			case 5: d1=31*3+30+28;break;
			case 6: d1=30*2+31*3+28;break;
			case 7: d1=31*4+30*2+28;break;
			case 8: d1=31*5+30*2+28;break;
			case 9: d1=31*5+30*3+28;break;
			case 10: d1=31*6+30*3+28;break;
            case 11: d1=31*6+30*4+28;break;
			default: printf("error\n");
			}
	}
	if((e%4==0&&e%100!=0)||e%400==0)   //???????
	{
		switch(f)
			{
			case 0: d2=0;break;
			case 1: d2=31;break;
			case 2: d2=29+31;break;
			case 3: d2=31*2+29;break;
			case 4: d2=30+31*2+29;break;
			case 5: d2=31*3+30+29;break;
			case 6: d2=30*2+31*3+29;break;
			case 7: d2=31*4+30*2+29;break;
			case 8: d2=31*5+30*2+29;break;
			case 9: d2=31*5+30*3+29;break;
			case 10: d2=31*6+30*3+29;break;
            case 11: d2=31*6+30*4+29;break;
		    default: printf("error\n");
		    }
	}
	else
	{
		switch(f)
			{
			case 0: d2=0;break;
			case 1: d2=31;break;
			case 2: d2=28+31;break;
			case 3: d2=31*2+28;break;
			case 4: d2=30+31*2+28;break;
			case 5: d2=31*3+30+28;break;
			case 6: d2=30*2+31*3+28;break;
			case 7: d2=31*4+30*2+28;break;
			case 8: d2=31*5+30*2+28;break;
			case 9: d2=31*5+30*3+28;break;
			case 10: d2=31*6+30*3+28;break;
            case 11: d2=31*6+30*4+28;break;
	        default: printf("error\n");
			}
	}
	if(a==e) o=d2+g-d1-c;  //???????????????????
	else 
		{ if((a%4==0&&a%100!=0)||a%400==0) o=365*j+h+d2+g+(366-d1-c);  //??????????????
		else o=365*j+h+d2+g+(365-d1-c);}  
	printf("%d",o);
}