void main()
{
	int y1,m1,d1,y2,m2,d2,y,m,d,day1,day2,all1=0,all2=0,all3=0,all;
	int s[20]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d %d %d\n%d %d %d",&y1,&m1,&d1,&y2,&m2,&d2);

	day1=365*(y1-1)+(y1-1)/4-(y1-1)/100+(y1-1)/400;
	day2=365*(y2-1)+(y2-1)/4-(y2-1)/100+(y2-1)/400;
	
	all2=day2-day1;
	
	for(y=y1;y<2;y++)
		if((y%4==0 && y%100!=0)||y%400==0)
		{
			all2++;
		}

	for(m=1;m<m2;m++)
	{
		all3=all3+s[m];
	}
	all3=all3+d2;
	if((y2%4==0 && y2%100!=0)||y2%400==0)
	{
		if(m2>2)
			all3++;
	}

	for(m=1;m<m1;m++)
	{
		all1=all1+s[m];
	}
	all1=all1+d1;
	if((y1%4==0 && y1%100!=0)||y1%400==0)
	{
		if(m2>2)
			all3++;
	}

	all=all2+all3-all1;

	printf("%d",all);
}