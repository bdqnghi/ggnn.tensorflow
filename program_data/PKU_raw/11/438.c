
int main()
{
	int year,month,day;
	scanf("%d%d%d",&year,&month,&day);
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int sum=0;
	int i;

	
	

	
	for (i=0;i<month;i++)
		{
			sum+=a[i-1];
		}
		sum=sum+day;
		

	if ((year%4==0 && year%100!=0)|| year%400==0)
	{
		if (month<=2)
		{
			printf("%d\n",sum);
		}
		if (month>2)
		{
			sum=sum+1;
			printf("%d\n",sum);
		}
	}
	else

		printf("%d\n",sum);
	return 0;
}