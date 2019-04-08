int main()
{
	int year,month,day,i;
	scanf("%d %d %d",&year,&month,&day);
	if(year%4==0&&year%100!=0||year%400==0)
	{
		int d[12]={0,31,29,31,30,31,30,31,31,30,31,30};
		for(i=0;i<month;i++)
		{
		    day=day+d[i];
		}
	
	}
	else
	{
		int d[12]={0,31,28,31,30,31,30,31,31,30,31,30};
        for(i=0;i<month;i++)
		{
		   day=day+d[i];
		}
	}
	printf("%d",day);
	return 0;
}