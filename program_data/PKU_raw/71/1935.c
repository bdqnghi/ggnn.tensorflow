int main()
{
	int n,i,j,y,m1,m2,temp,d=0;
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&n);
	for (j=0;j<n;j++)
	{
        scanf("%d%d%d",&y,&m1,&m2);
		d=0;
		if(m1>m2){temp=m1;m1=m2;m2=temp;}
		for (i=m1;i<=m2-1;i++)
		{
		    d=d+a[i];
		}
		if (y%100==0&&y%400==0&&m1<=2&&m2>2)
		{
		    d=1;
			for (i=m1;i<=m2-1;i++)
			{
				d=d+a[i];
			}
		}
		else if (y%100!=0&&y%4==0&&m1<=2&&m2>2)
		{
		    d=1;
			for (i=m1;i<=m2-1;i++)
			{
				d=d+a[i];
			}
		}
		if (d%7==0){printf("YES\n");}
		else {printf("NO\n");}
	}
	return 0;
}

