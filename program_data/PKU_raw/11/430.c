int main()
{
	int year,month,day,n=0,i,num=0;
	int A[12]={31,28,31,30,31,30,31,31,30,31,30,31},
		B[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	scanf("%d%d%d",&year,&month,&day);
	if((year%4==0&&year%100!=0)||year%400==0)
	{
		for(i=0;i<month-1;i++)
		{
			n=n+B[i];
		}
		num=n+day;
		printf("%d",num);
	}
	else
	{
		for(i=0;i<month-1;i++)
		{
			n=n+A[i];
		}
		num=n+day;
		printf("%d",num);
	}
	return 0;
}
