void main()
{
	int x1,y1;
	scanf("%d %d",&x1,&y1);
	int a[100][100];
	int i,j,k;
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y1;j++)
		    scanf("%d",&a[i][j]);
	}
	int x2,y2;
	scanf("%d %d",&x2,&y2);
	int b[100][100];
	for(i=0;i<x2;i++)
	{
		for(j=0;j<y2;j++)
		    scanf("%d",&b[i][j]);
	}
	for(i=0;i<x1;i++)
	{
		int c=0;
		for(k=0;k<y1;k++)
			c=c+a[i][k]*b[k][0];
        printf("%d",c);
		for(j=1;j<y2;j++)
		{
            c=0;
		    for(k=0;k<y1;k++)
			c=c+a[i][k]*b[k][j];
		    printf(" %d",c);
		}
		printf("\n",c);
	}
}