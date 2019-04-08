void main()
{
	int a[9][9];
	int i,j,m,n,y=0;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<m;i++)
	{
		int max=a[i][0];int t=0,x=1;
		for(j=1;j<n;j++)if(a[i][j]>max)
		{
			max=a[i][j];
			t=j;
		}
		for(j=0;j<m;j++)
			if(j!=i&&max>a[j][t])
			{
				x=0;
				break;
			}
		if(x){
			printf("%d+%d",i,t);
			y=1;
			break;
		}
	}
	if(y==0)printf("No");
}