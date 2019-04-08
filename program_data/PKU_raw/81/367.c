void main()
{
	int s(int m,int n);
	int m,n,c,a[5][5],i,j,t;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	}
	scanf("%d %d",&n,&m);
    c=s(m,n);
	if(c==0)printf("error");
	if(c==1)
	{
		for(j=0;j<5;j++)
		{
			t=a[n][j];
        a[n][j]=a[m][j];
		a[m][j]=t;
		}
	for(i=0;i<5;i++)
	 {
		for(j=0;j<4;j++)
		printf("%d ",a[i][j]);
		printf("%d",a[i][4]);
		printf("\n");
	 }
	}
}
int s(int m,int n)
{
    int c;
	if((0<=m&&m<5)&&(0<=n&&n<5))c=1;
	else c=0;
	return(c);
}