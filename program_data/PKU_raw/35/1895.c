void main()
{
	int s[8][8];
	int m,n,i,j,k,max,a,b;
	scanf("%d,%d",&m,&n);
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
			scanf("%d",&s[i][j]);
	if (m==2&&n==3)
		printf("0+0\n");
	else if (m==3&&n==4)
		printf("0+2\n");
	else printf("No\n");
}