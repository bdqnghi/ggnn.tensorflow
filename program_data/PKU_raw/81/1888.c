void main()
{
	int f(int n,int m,int a[5][5]);
	int a[5][5];
	int i,j,t,n,m;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	scanf("%d %d",&n,&m);
	t=f(n,m,a);
	if(t==0)
		printf("error");
}

int f(int n,int m,int a[5][5])
{
	int t,i;
	if(n<5&&m<5)
	{
		for(i=0;i<5;i++)
		{
		if(i==n)
			printf("%d %d %d %d %d\n",a[m][0],a[m][1],a[m][2],a[m][3],a[m][4]);
		else if(i==m)
			printf("%d %d %d %d %d\n",a[n][0],a[n][1],a[n][2],a[n][3],a[n][4]);
		else 
			printf("%d %d %d %d %d\n",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]);
		}
	}
	else
		t=0;
	return(t);
}

