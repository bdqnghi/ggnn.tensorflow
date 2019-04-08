int main()
{
	int a[1000][1000],n,i,j,col1=0,row1=0,col2=0,row2=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for (i=0;i<n;i++)
		for(j=0;j<n;j++)
		{if(a[i][j]==0){col1=i;row1=j;break;
		}}
	for (i=n-1;i>=0;i--)
		for(j=n-1;j>=0;j--)
		{	if(a[i][j]==0){col2=i;row2=j;break;
			}
		}

	printf("%d",(col1-col2-1)*(row2-row1-1));
	return 0;
}
