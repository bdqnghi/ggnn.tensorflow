void main()
{
int m,n,i,j,temp1,temp2;
scanf("%d %d",&m,&n);
int a[30][30];
for(i=0;i<30;i++)
{
	for(j=0;j<30;j++)
	a[i][j]=0;
}
for(i=1;i<=m;i++)
{
	for(j=1;j<=n;j++)
	scanf("%d",&a[i][j]);
}
for(i=1;i<=m;i++)
{
	for(j=1;j<=n;j++)
	if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1])
	{	
		temp1=i-1;
		temp2=j-1;
		printf("%d %d\n",temp1,temp2);
	}
}
}