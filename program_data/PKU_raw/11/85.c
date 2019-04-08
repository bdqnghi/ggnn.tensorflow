int main()
{
	int year,month,date;
	int sum=0;
	scanf("%d%d%d",&year,&month,&date);
	int temp;
	if(year%4!=0)
		{
		temp=28;//not
		}
		else if(year%100!=0)
		{
			temp=29;//yes
		}
		else if(year%400!=0)
		{
			temp=28;//not
		}
		else
		{
			temp=29;//yes
		}//???????
		int a[12]={31,temp,31,30,31,30,31,31,30,31,30,31};
		int i;
		for(i=0;i<month-1;i++)
		{
			sum+=a[i];
		}
		sum+=date;
		printf("%d",sum);
		return 0;
}
