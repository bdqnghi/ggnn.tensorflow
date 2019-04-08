int main()
{
	int x1,y1,x2,y2;
	int i,j,k;
	int mat_1[100][100],mat_2[100][100];
	int mat[100][100]={0};
	
	scanf("%d %d",&x1,&y1);
	for(i=0;i<x1;i++)
		for(j=0;j<y1;j++)
			scanf("%d",&mat_1[i][j]);
	scanf("%d %d",&x2,&y2);
	for(i=0;i<x2;i++)
		for(j=0;j<y2;j++)
			scanf("%d",&mat_2[i][j]);
	
	for(i=0;i<x1;i++)
		for(j=0;j<y2;j++)
			for(k=0;k<y1;k++)
				mat[i][j]+=mat_1[i][k]*mat_2[k][j];
    for(i=0;i<x1;i++)
		for(j=0;j<y2;j++)
			printf("%d%c",mat[i][j],(j==y2-1)?'\n':' ');
	return 0;
}