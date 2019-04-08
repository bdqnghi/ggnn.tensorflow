void main()
{
	int sy,sm,sd,ey,em,ed,i,days,x,y;
	int a[13];
	days=x=y=0;
	scanf("%d%d%d",&sy,&sm,&sd);
	scanf("%d%d%d",&ey,&em,&ed);
	a[1]=a[3]=a[5]=a[7]=a[8]=a[10]=a[12]=31;
	a[4]=a[6]=a[9]=a[11]=30;
    if ((sy % 4 == 0 && sy % 100 != 0) || (sy % 400 == 0))
		a[2]=29;
    else a[2]=28;
	for(i=1;i<sm;i++)
           x+=a[i];
	x+=sd;
    if ((ey % 4 == 0 && ey % 100 != 0) || (ey % 400 == 0))
		a[2]=29;
    else a[2]=28;
	for(i=1;i<em;i++)
           y+=a[i];
	y+=ed;
    for(i=sy;i<ey;i++)
	{
		if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
                days+=366;
		else days+=365;
	}
	days=days+y-x;
	printf("%d",days);
}