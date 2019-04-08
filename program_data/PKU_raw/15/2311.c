int main( )
{
	int n;
	scanf("%d",&n);
	int a[1001][1001]={0};
	int i,j,temp=0;
	int c1,c2,d1,d2,f1,f2,g1,g2;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0&&a[i][j+1]==0&&a[i+1][j]==0)
			{
				c1=i;
				c2=j;
			}
			if(a[i][j]==0&&a[i][j-1]==0&&a[i+1][j]==0)
			{
				d1=i;
				d2=j;
			}
			if(a[i][j]==0&&a[i-1][j]==0&&a[i][j+1]==0)
			{
				f1=i;
				f2=j;
			}
			if(a[i][j]==0&&a[i][j-1]==0&&a[i-1][j]==0)
			{
				g1=i;
				g2=j;
			}
		}
		temp=(d2-c2-1)*(f1-c1-1);
		printf("%d",temp);




		return 0;
}