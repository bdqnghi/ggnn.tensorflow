int main()
{
	int year[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
	int n,i,month1,month2,nyear,sum=0,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum=0;
		scanf("%d %d %d",&nyear,&month1,&month2);
		if(month1<month2)
		{
		if(nyear%4!=0||(nyear%100==0&&nyear%400!=0))
		{
			for(j=month1-1;j<month2-1;j++)
				sum=sum+year[0][j];

		}
		else
			for(j=month1-1;j<month2-1;j++)
				sum=sum+year[1][j];
		if(sum%7==0)
			printf("YES\n");
		else
			printf("NO\n");

	}
	else
	{
	    if(nyear%4!=0||(nyear%100==0&&nyear%400!=0))
		{
			for(j=month2-1;j<month1-1;j++)
				sum=sum+year[0][j];

		}
		else
			for(j=month2-1;j<month1-1;j++)
				sum=sum+year[1][j];
		if(sum%7==0)
			printf("YES\n");
		else
			printf("NO\n");
    }
	}


}
