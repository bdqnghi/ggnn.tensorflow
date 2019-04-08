int map[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
	int year,month,day;
	int i,sum=0;
	scanf("%d%d%d",&year,&month,&day);
	if(year%4==0&&year%100!=0||year%400==0)
		map[2]=29;
	if(month==1)
		sum=day;
	else
	{
		for(i=1;i<month;i++)
			sum=sum+map[i];
		sum=sum+day;
	}
	printf("%d",sum);
	return 0;
}
