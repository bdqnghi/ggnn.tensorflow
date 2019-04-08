int main()
{
	int f(int x,int y,int z);
	int year1,year2,month1,month2,day1,day2,sum=0,i,d1,d2;
	scanf("%d %d %d\n%d %d %d",&year1,&month1,&day1,&year2,&month2,&day2);
	for(i=year1;i<year2;i++)
	{
		if((i%4==0&&i%100!=0)||(i%400)==0)
			sum=sum+366;
		else sum=sum+365;
	}
	d1=f(year1,month1,day1);
	d2=f(year2,month2,day2);
	sum=sum+(d2-d1);
	printf("%d\n",sum);
	return 0;
}
int f(int x,int y,int z)
{
	int p=0,i;
	for(i=1;i<y;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
			p=p+31;
		else if(i==4||i==6||i==9||i==11)
			p=p+30;
		if(i==2)
		{
			if((x%4==0&&x%100!=0)||(x%400)==0)
				p=p+29;
			else p=p+28;
		}
	}
	p=p+z;
	return p;
}
