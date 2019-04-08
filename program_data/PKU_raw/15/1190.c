int a[1000][1000];
int main()
{
	int n,i,j,num;
	int x1,y1,x2,y2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=1;i<n-1;i++)

	{
		for(j=1;j<n-1;j++)
		{
			if(a[i-1][j-1]==0&&a[i-1][j]==0&&a[i][j-1]==0)
			{
				x1=i;
				y1=j;
			}
			if(a[i+1][j+1]==0&&a[i+1][j]==0&&a[i][j+1]==0)
			{
				x2=i;
				y2=j;
			}	
		}
		num=(x2-x1+1)*(y2-y1+1);
	}
	printf("%d",num);
	return 0;
}