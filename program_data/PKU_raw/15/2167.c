int main()
{
	int n;
	int len0,wid0,len1,wid1;
	int a[100][100];
	int i,j;
	scanf("%d",&n);
    for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",*(a+i)+j);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0&&a[i+1][j]==0&&a[i][j+1]==0)
			{
				len0=i;
				wid0=j;
			}
			if(a[i][j]==0&&a[i-1][j]==0&&a[i][j-1]==0)
			{
			    len1=i;
				wid1=j;
			}
		}
	printf("%d\n",abs((len1-len0-1)*(wid1-wid0-1)));
	return 0;
}