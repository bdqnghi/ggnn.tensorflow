int p(int a,int b,int c)
{
	int i,day=0;
	for(i=1;i<a;i++)
	{
		if((i%4==0&&i%100!=0)||(i%400==0))
			day+=366;
		else day+=365;
	}
	for(i=1;i<b;i++)
	{
		switch(i)
		{
		case 1:day+=31;break;
		case 2:if((a%4==0&&a%100!=0)||(a%400==0))day+=29;
			else day+=28;break;
		case 3:day+=31;break;
		case 4:day+=30;break;
		case 5:day+=31;break;
		case 6:day+=30;break;
		case 7:day+=31;break;
		case 8:day+=31;break;
		case 9:day+=30;break;
		case 10:day+=31;break;
		case 11:day+=30;break;
		case 12:day+=31;break;
		}
	}
	day+=c;
	return(day);
}
void main()
{
	int a,b,c,d,e,f,x;
	scanf("%d %d %d",&a,&b,&c);
	scanf("%d %d %d",&d,&e,&f);
	x=p(d,e,f)-p(a,b,c);
	printf("%d",x);
}

