int main()
{
	int m,n;
	int map[8][8];
	scanf("%d,%d",&m,&n);
	int i,j;
	for (i=0; i<m; i++)
		for (j=0; j<n; j++)
			scanf("%d",&(map[i][j]));

	int p[8][8];
	for (i=0; i<m; i++)
		for (j=0; j<n; j++)
			p[i][j]=0;
		
	for (i=0; i<m; i++)
	{
		int max_j;
		max_j=0;
		for (j=1; j<n; j++)	if (map[i][j]>map[i][max_j]) max_j=j;
		p[i][max_j]=1;
	}

	int isAndian=0;
	for (j=0; j<n; j++)
	{
		int min_i;
		min_i=0;
		for (i=1; i<m; i++)	if (map[i][j]<map[min_i][j]) min_i=i;
		if (p[min_i][j]==1)
		{
			printf("%d+%d\n",min_i,j);
			isAndian=1;
			break;
		}
	}

	if (isAndian==0) printf("No\n");

	return 0;
}
