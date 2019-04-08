int main()
{
	int mon[13];
	mon[1]=31;mon[2]=28;mon[3]=31;mon[4]=30;mon[5]=31;mon[6]=30;mon[7]=31;mon[8]=31;mon[9]=30;mon[10]=31;mon[11]=30;mon[12]=31;
	int lmon[13];
	lmon[1]=31;lmon[2]=29;lmon[3]=31;lmon[4]=30;lmon[5]=31;lmon[6]=30;lmon[7]=31;lmon[8]=31;lmon[9]=30;lmon[10]=31;lmon[11]=30;lmon[12]=31;
	int y1,y2,m1,m2,d1,d2,days=0,i;
	cin>>y1>>m1>>d1;
	cin>>y2>>m2>>d2;
	if(y2==y1&&((y1%4==0&&y1%100!=0)||(y1%400==0)))
	{
		if(m1!=m2)
		{
			for(i=m1+1;i<m2;i++)
				days=lmon[i]+days;
			days=lmon[m1]-d1+days;
			days=days+d2;
			cout<<days;
			return 0;
		}
		else
			cout<<d2-d1;
	}
	else if(y1==y2)
	{
		if(m1!=m2)
		{
			for(i=m1+1;i<m2;i++)
				days=mon[i]+days;
			days=mon[m1]-d1+days;
			days=days+d2;
			cout<<days;
			return 0;
		}
		else
			cout<<d2-d1;
	}
	else
	{
		for(i=y1+1;i<y2;i++)
			if((i%4==0&&i%100!=0)||(i%400==0))
				days=days+366;
			else
				days=days+365;
		if((y1%4==0&&y1%100!=0)||(y1%400==0))
		{
			for(i=m1+1;i<13;i++)
				days=lmon[i]+days;
			days=lmon[m1]-d1+days;
		}
		else if(!((y1%4==0&&y1%100!=0)||(y1%400==0)))
		{
			for(i=m1+1;i<13;i++)
				days=mon[i]+days;
			days=mon[m1]-d1+days;
		}
		if((y2%4==0&&y2%100!=0)||(y2%400==0))
		{
			for(i=1;i<m2;i++)
				days=lmon[i]+days;
			days=days+d2;
		}
		else if(!((y2%4==0&&y2%100!=0)||(y2%400==0)))
		{
			for(i=1;i<m2;i++)
				days=mon[i]+days;
			days=days+d2;
		}
		cout<<days;
	}
	return 0;
}