int main(int argc, char* argv[])
{
	int days[11]={31,0,31,30,31,30,31,31,30,31,30},year=0,month1=0,month2=0,i=0,j=0,n=0,mid=0,total=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&year,&month1,&month2);
		if((year%400==0)||((year%4==0)&&(year%100!=0)))
			days[1]=29;
		else days[1]=28;
		if(month1>month2)
		{
			mid=month1;
			month1=month2;
			month2=mid;
		}
		total=days[month1-1];
		for(j=0;j<month2-month1-1;j++)
		{
			total+=days[month1+j];
		}
		if(i!=n-1)
		{
			if(total%7==0)
			{
				printf("YES\n");
			}
			else printf("NO\n");
		}
		if(i==n-1)
		{
			if(total%7==0)
			{
				printf("YES");
			}
			else printf("NO");
		}
	}
	return 0;
}
