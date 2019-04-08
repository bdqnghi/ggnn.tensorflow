int main()
{
	int year,m1,n,m2,d1=0,d2=0,i,j,k;
	int	month1[12]={0,31,28,31,30,31,30,31,31,30,31,30};
	int month2[12]={0,31,29,31,30,31,30,31,31,30,31,30};
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d %d %d",&year,&m1,&m2); 
		if ((year%400==0)||(year%4==0&&year%100!=0))//???//
		{
			for (j=1;j<=m1;j++)
			{
				d1+=month2[j-1];
			}
			for (j=1;j<=m2;j++)
			{
				d2+=month2[j-1];
			}
			if((d1-d2)%7==0)
				printf("YES\n");
			else printf("NO\n");
		}
		else 
		{
			for (j=1;j<=m1;j++)
			{
				d1+=month1[j-1];
			}
			for (j=1;j<=m2;j++)
			{
				d2+=month1[j-1];
			}
			if((d1-d2)%7==0)
				printf("YES\n");
			else printf("NO\n");
		}
		d1=0;d2=0;
	}
	return 0;
}