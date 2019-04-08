int main()
{
	int a,b,c,d,e,f,m,n,i,h;
	int day1,day2,day3,day;
	scanf("%d %d %d\n%d %d %d",&a,&b,&c,&d,&e,&f);
	if((a%4==0&&a%100!=0)||(a%400==0))
		m=1;
	else
		m=2;
	if((d%4==0&&d%100!=0)||(d%400==0))
		n=1;
	else
		n=2;
	for(i=a,h=0;i<=d;i++)
	{
		if((i%4==0&&i%100!=0)||(i%400==0))
			h=h+1;
		else
			;
	}
	if(m==2&&n==2)
		day1=(d-a-h)*365+h*366;
	if(m==1&&n==2)
	{if((b==2&&c==29)||b>2)
			day1=(d-a-h+1)*365+(h-1)*366;
		else
            day1=(d-a-h)*365+h*366;
	}
	if(m==2&&n==1)
	{
		if((e==2&&f==29)||e>2)
            day1=(d-a-h)*365+h*366;
		else
            day1=(d-a-h+1)*365+(h-1)*366;
	}
	if(m==1&&n==1)
	{
		if(((b==2&&c<29)||b==1)&&((e==2&&f==29)||e>2))
			day1=(d-a-h)*365+h*366;
		else
			if(((b==2&&c==29)||b>2)&&((e==2&&c<29)||e==1))
				day1=(d-a+2)*366+(h-2)*365;
			else
				day1=(d-a-h+1)*365+(h-1)*366;
	}
	if(b<e)
	{m=b;n=e;}
	else
		if(b>e)
		{m=e;n=b;}
		else
			m=n=a;
    for(day2=0;m<=n-1;m++)
		switch(m)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:day2=day2+31;break;
		case 4:
		case 6:
		case 9:
		case 11:day2=day2+30;break;
		case 2:day2=day2+28;break;
		}
	if(b>e)
		day2=-day2;
	day3=f-c;
	day=day1+day2+day3;
	printf("%d\n",day);
	return 0;
}