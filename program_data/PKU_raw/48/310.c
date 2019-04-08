int main()
{
	struct point
	{
		int a[11][11];
	}
	days[5];
	int a[11][11]={0},i,j,day,n,m;
	scanf("%d%d",&m,&n);
	for(day=0;day<=n;day++)	for(i=0;i<=10;i++)	for(j=0;j<=10;j++)	days[day].a[i][j]=0;
	days[0].a[5][5]=m;
	for(day=1;day<=n;day++)	for(i=1;i<=9;i++)	for(j=1;j<=9;j++)	
		days[day].a[i][j]
		=days[day-1].a[i-1][j-1]	
		+days[day-1].a[i-1][j]+days[day-1].a[i-1][j+1]
		+days[day-1].a[i][j-1]+days[day-1].a[i][j]+days[day-1].a[i][j]
		+days[day-1].a[i][j+1]+days[day-1].a[i+1][j-1]+days[day-1].a[i+1][j]
		+days[day-1].a[i+1][j+1];
	for(i=1;i<=9;i++)
	{
		for(j=1;j<9;j++)	printf("%d ",days[n].a[i][j]);
		printf("%d\n",days[n].a[i][9]);
	}
	return 0;

}