int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int rdays[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int ryear(int year)
{
	return year%4==0&&year%100!=0||year%400==0;
}
int sum1(int year,int month, int day)
{
	int i,restday=day;
	for(i=1;i<month;i++) 
	{
		if(ryear(year)) restday=restday+rdays[i];
		else restday=restday+days[i];
	}
	return restday;
}
int main()
{
	int sy,sm,sd,ey,em,ed;
	scanf("%d%d%d %d%d%d",&sy,&sm,&sd,&ey,&em,&ed);
	int i,sum=0;
	for(i=sy+1;i<ey;i++)
	{  if(ryear(i)==1) sum+=366;
	   else sum+=365;
	   }
	int start=sum1(sy,sm,sd);
	int end=sum1(ey,em,ed);
	if(sy==ey) sum=sum+end-start;
	else 
	{
		sum=sum+end+365-start;
	    if(ryear(sy)) sum++;
	}
	printf("%d",sum);
}
