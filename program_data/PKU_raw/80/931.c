int main()
{
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int year1,year2,month1,month2,day1,day2,i,sum;
	sum=0;
	scanf("%d%d%d%d%d%d",&year1,&month1,&day1,&year2,&month2,&day2);
	for(i=month1;i<=12;i++)
	{
		sum+=a[i-1];
	}
	sum-=day1;
	if(month1<=2&&((year1%4==0&&year1%100!=0)||(year1%400==0)))
	{
		sum++;
	}
	for(i=1;i<=month2-1;i++)
	{
		sum+=a[i-1];
	}
	sum+=day2;
		if(month2>=2&&((year2%4==0&&year2%100!=0)||(year2%400==0)))
	{
		sum++;
	}
	for(i=year1+1;i<=year2-1;i++)
	{
		if((i%4==0&&i%100!=0)||(i%400==0))
		{
			sum+=366;
		}
		else
		{
			sum+=365;
		}
	}
	if(year1!=year2)
	{
	}
	else
	{
		sum-=365;
	}
	printf("%d",sum);
	return 0;
}
		
