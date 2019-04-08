void main ()
{
	int n, a[1000][1000], i, j;
	int lup[2], ldown[2], rup[2], rdown[2], area;
	scanf("%d", &n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			scanf("%d", &a[i][j]);
		}
	for(i=1;i<n;i++)
		for(j=1;j<n;j++)
		{
			if(a[i-1][j-1]==255&&a[i-1][j]==255&&a[i][j-1]==255&&a[i][j]==0)
			{
				lup[0]=i;
				lup[1]=j;
			}
			if(a[i+1][j+1]==255&&a[i+1][j]==255&&a[i][j+1]==255&&a[i][j]==0)
			{
				rdown[0]=i;
				rdown[1]=j;
			}
			if(a[i-1][j+1]==255&&a[i-1][j]==255&&a[i][j+1]==255&&a[i][j]==0)
			{
				ldown[0]=i;
				ldown[1]=j;
			}
			if(a[i+1][j-1]==255&&a[i+1][j]==255&&a[i][j-1]==255&&a[i][j]==0)
			{
				rup[0]=i;
				rup[1]=j;
			}
		}
	area=(rup[0]-lup[0]-1)*(rdown[1]-rup[1]-1);
	printf("%d", area);
}