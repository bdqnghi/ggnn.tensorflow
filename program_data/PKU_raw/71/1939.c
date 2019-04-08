int main()
{
	int n;
	scanf("%d",&n);
	int year,month1,month2;
	int i,j;
	int t;
	int res;
	
	for (i=0;i<n;i++)
	{
        scanf("%d%d%d",&year,&month1,&month2);
		res=0;
		if (month1>month2)
		{
            t=month1;
			month1=month2;
			month2=t;
		}
        for (j=month1;j<month2;j++)
		{
			if (j==2)
				continue;
			if (j==1||j==3||j==5||j==7||j==8||j==10)
				res=res+3;
			if (j==4||j==6||j==9||j==11)
				res=res+2;
		}
		if (month1<=2)
		{
			if (year%4!=0||year%100==0&&year%400!=0)
			{
				res=res;
			}
			else
			{
				res=res+1;
			}
		}
		if (res%7==0)
			printf("YES\n");
		else
			printf("NO\n");

	

	}
	
	
	return 0;
}