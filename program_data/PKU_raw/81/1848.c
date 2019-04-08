void main()
{
	void convert(int a[5][5]);
	int a[N][N];
	int i,j;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
			scanf("%d",&a[i][j]);
	}
	int t,n,m;
	scanf("%d %d",&n,&m);
	if(n>4||m>4||n<0||m<0)
	printf("error");
	else
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
		{
			t=a[n][j];
			a[n][j]=a[m][j];
			a[m][j]=t;
		}
	if(n<5&&n>=0&&m<5&&m>=0)		
	for(i=0;i<N;i++)
	{
		for(j=0;j<N-1;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("%d",a[i][4]);
		printf("\n");
	}
}