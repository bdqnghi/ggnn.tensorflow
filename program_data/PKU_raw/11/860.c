int isRN(int year)
{
	int result;
	if((year%4==0&&year%100!=0)||year%400==0)
		result=1;
	else
		result=0;
	return result;
}
void main()
{
	int year,month,day;
	int i;
	int sum=0;
	scanf("%d%d%d",&year,&month,&day);
	for(i=1;i<month;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
			sum+=31;
		else if(i==4||i==6||i==9||i==11)
			sum+=30;
		else
		{
			if(isRN(year)==1)
				sum+=29;
			else
				sum+=28;
		}
	}
	sum+=day;
	printf("%d",sum);
}