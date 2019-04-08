int main()
{
	int sy,sm,sd,ey,em,ed,i,x;
	scanf("%d %d %d\n",&sy,&sm,&sd);
	scanf("%d %d %d",&ey,&em,&ed);
	x=(ey-sy+1)*365-(sm-1)*31-(12-em+1)*31+ed-sd;

	for(i=sy;i<=ey;i++)
	{if(i%4==0&&i%100!=0||i%400==0)x=x+1;}  

	for(i=1;i<sm;i++)
	{if(i==4||i==6||i==9||i==11)x=x+1;
	else if(i==2)
	
	{if(sy%4==0&&i%100!=0||i%400==0)x=x+2;
	else x=x+3;}}

	for(i=em;i<13;i++)
	{if(i==4||i==6||i==9||i==11)x=x+1;
	else if(i==2)
	{if(ey%4==0&&ey%100!=0||ey%400==0)x=x+2;
	else x=x+3;}}
	printf("%d",x);
}