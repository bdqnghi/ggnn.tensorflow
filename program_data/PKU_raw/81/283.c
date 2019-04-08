main()
{
	int f(int x[][5],int m,int n);
	int a[5][5],i,m,n;
	for(i=0;i<5;i++)
	   scanf("%d %d %d %d %d",&a[i][0],&a[i][1],&a[i][2],&a[i][3],&a[i][4]);
	scanf("%d %d",&m,&n);
	if(f(a,m,n))
	{for(i=0;i<5;i++)
	printf("%d %d %d %d %d\n",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]);}
	else printf("error");		
}
int f(int x[][5],int m,int n)
{
	int t,i;
	if(m<5&&n<5)
	{
		for(i=0;i<5;i++)
		{t=x[m][i];x[m][i]=x[n][i];x[n][i]=t;}
		return(1);
	}
	else return(0);
}