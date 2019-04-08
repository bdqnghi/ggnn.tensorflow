int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int rdays[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int sum1(int year,int month, int day)
{
	int i,restday=day;
	for(i=1;i<month;i++)
	{
		if(year%4==0&&year%100!=0||year%400==0) restday=restday+rdays[i];
		else restday=restday+days[i];
	}
	return restday;
}
int main()
{
	int sy,sm,sd,ey,em,ed;
	scanf("%d%d%d %d%d%d",&sy,&sm,&sd,&ey,&em,&ed);
	int i,sum=0;
	for(i=sy;i<ey;i++)
	{  if(i%4==0&&i%100!=0||i%400==0) sum+=366;
	   else sum+=365;
	   }
	sum=sum+sum1(ey,em,ed)-sum1(sy,sm,sd);
	printf("%d",sum);
}
