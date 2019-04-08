int main()
{
	int i,n;
	scanf("%d",&n);
	int p[12]={0,31,28,31,30,31,30,31,31,30,31,30};
	int r[12]={0,31,29,31,30,31,30,31,31,30,31,30};
	for(i=0;i<n;i++)
	{
		int y,m1,m2,d=0,j;
		scanf("%d %d %d",&y,&m1,&m2);
		if(m1>m2)
		{
			int t=m1;
			m1=m2;
			m2=t;
		}
		if((y%400==0)||((y%4==0)&&(y%100!=0)))
		{
			for(j=m1;j<m2;j++)
				d=d+r[j];
		}
		else
		{
			for(j=m1;j<m2;j++)
				d=d+p[j];
		}
		if(d%7==0)	printf("YES\n");
		else		printf("NO\n");
	}
}