main()
{
	int runnian(int year);
	int tianshu(int moon, int yy);

	int y1,y2,m1,m2,d1,d2,days,i,j;
	scanf("%d %d %d",&y1,&m1,&d1);
	scanf("%d %d %d",&y2,&m2,&d2);
	days=0;
    for (i=y1;i<y2;i++)
	{
		if (runnian(i)==0) days=days+365;
		else
			days=days+366;
	}
	for (j=1;j<m1;j++)
		days=days-tianshu(j,y1);
	days=days-d1;
	for (j=1;j<m2;j++)
		days=days+tianshu(j,y2);
	days=days+d2;
	printf("%d\n",days);
}
int runnian(int year)
{
	int flag;
	flag=0;/*???*/
	if (year%4==0)
		if (year%100==0)
			if (year%400==0&&year%3200!=0)
				flag=1;
			else
			flag=0;
		else
		flag=1;
	else 
	flag=0;
	return(flag);
}
int tianshu(int moon, int yy)
{
	int dd;
	dd=0;
	if ((moon==1)||(moon==3)||(moon==5)||(moon==7)||(moon==8)||(moon==10)||(moon==12)) dd=31;
	else
		if (moon==4||moon==6||moon==9||moon==11) dd=30;
		else
			if (runnian(yy)==1) dd=29;
			else
				dd=28;
	return (dd);
}
