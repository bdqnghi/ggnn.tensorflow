void main()
{
	int a[100],b[100];
	void sca(int x[100],int y[100]);
	void res(int x[100],int y[100]);
	void pri(int x[100],int y[100]);
	sca (a,b);
	//res (a,b);
	//pri (a,b);
}
void sca(int x[100],int y[100])
{
	int m,n,i,j,k;
	scanf("%d %d",&m,&n);
	//printf("%d %d",m,n);
	for(i=1;i<=m;i++)
	scanf("%d",&x[i]);
	//printf("%d",x[1]);
	for(i=1;i<=n;i++)
	scanf("%d",&y[i]);
	//printf("1");
	for(i=1;i<=m;i++)
		{
			for(j=1;j<=m-i;j++)
			{
				if(x[j]>x[j+1])
				{
					k=x[j];
					x[j]=x[j+1];
					x[j+1]=k;
				}
			}
		}
	for(i=1;i<=m;i++)
		printf("%d ",x[i]);
	for(i=1;i<=n;i++)
		{
			for(j=1;j<=n-i;j++)
			{
				if(y[j]>y[j+1])
				{
					k=y[j];
					y[j]=y[j+1];
					y[j+1]=k;
				}
			}
		}
	for(i=1;i<n;i++)
		printf("%d ",y[i]);
	printf("%d",y[n]);
	
		
	
}