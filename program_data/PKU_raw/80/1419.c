int main()
{
	int sy,sm,sd,ey,em,ed;
	int i,x=0;
	scanf("%d%d%d%d%d%d",&sy,&sm,&sd,&ey,&em,&ed);
	for(i=sy;i<ey;i++)
		if(i%4==0&&i%100!=0||i%400==0)
			x=x+366;
		else x=x+365;
	for(i=1;i<sm;i++)
		if((sy%4==0&&sy%100!=0||sy%400==0)&&i==2)
			x=x-29;
		else if(i==2) x=x-28;
		else if(i==1||i==3||i==5||i==7||i==8||i==10||i==12) x=x-31;
		else x=x-30;
	for(i=1;i<em;i++)
		if((ey%4==0&&ey%100!=0||ey%400==0)&&i==2)
			x=x+29;
		else if(i==2) x=x+28;
		else if(i==1||i==3||i==5||i==7||i==8||i==10||i==12) x=x+31;
		else x=x+30;
	x=x+ed-sd;
	printf("%d\n",x);
	return 0;
}
