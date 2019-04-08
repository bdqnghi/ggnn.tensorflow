int main()
{
	int n;
	scanf("%d",&n);
	int i,j,year,month1,month2,result=0;
	
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&year,&month1,&month2);
		int t;
		if(month1>month2)
		{
			t=month1;
			month1=month2;
			month2=t;
		}
		for(j=month1;j<month2;j++)
		{
			if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
			{
				result+=31;
			}
			else if(j==4||j==6||j==9||j==11)
			{
				result+=30;
			}
			else if(j==2)
			{
				if(year%4==0&&year%100!=0||year%100==0&&year%400==0)
				{
					result+=29;
				}
				else
				{
					result+=28;
				}
			}
		}
		if(result%7==0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		result=0;
	}
	return 0;

}