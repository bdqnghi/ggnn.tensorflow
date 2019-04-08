int main()
{
	int year,month,day,i,sum=0;
	scanf("%d%d%d",&year,&month,&day);
	int a[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
	if(year%4==0&&year%100!=0||year%400==0)
	{
		for(i=0;i<month;i++)
			sum+=a[1][i];
		sum=sum+day-a[1][month-1];
	}
	else
	{
		for(i=0;i<month;i++)
			sum+=a[0][i];
		sum=sum+day-a[0][month-1];
	}
	printf("%d", sum);
	return 0;
}