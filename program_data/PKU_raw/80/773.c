	int main()
	{
		int day[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int i,x1,x2,x3,y1,y2,y3,d1=0,d2=0,d;
	scanf("%d %d %d\n%d %d %d",&x1,&x2,&x3,&y1,&y2,&y3);
	if((x1%4==0&&x1%100!=0)||(x1%400==0))
	day[2]=29;
	else
    day[2]=28;
	for(i=1;i<=(x2-1);i++)
	{d1=d1+day[i];}
	d1=d1+x3;
    if((y1%4== 0&&y1%100!=0)||(y1%400==0))
	day[2]=29;
	else
	day[2]=28;
    for(i=1;i<=(y2-1);i++)
	{d2=d2+day[i];}
	d2=d2+y3;
	for(i=1;i<=(x1-1);i++)
	{if((i%4==0&&i%100!=0)||(i%400==0))
	d1=d1+366;
	else
	d1=d1+365;}
  for(i=1;i<=(y1-1);i++)
	{if((i%4==0&&i%100!=0)||(i%400==0))
	d2=d2+366;
	else
	d2=d2+365;}
     if(d1>=d2)
      d=d1-d2;
      else
      d=d2-d1;
   printf("%d",d);
   return 0;
	}