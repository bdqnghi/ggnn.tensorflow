main()
{
	int year,month,day,a,m[12]={31,28,31,30,31,30,31,31,30,31,30,31},i,sum=0;
	scanf("%d %d %d",&year,&month,&day);
	if(year%4==0&&year%100!=0)
		a=1;
	else if(year%100==0&&year%400==0)
		a=1;
	else
		a=0;
	if(a==1)
	{
		m[1]=29;
		for(i=0;i<month-1;i++)
			sum=sum+m[i];
		sum=sum+day;
	}
	else if(a==0)
	{
		for(i=0;i<month-1;i++)
			sum=sum+m[i];
		sum=sum+day;
	}
	printf("%d\n", sum);
}

