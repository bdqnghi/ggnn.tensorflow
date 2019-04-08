int main()
{
	int n,i,j,a,b,c,d,s;
	scanf("%d",&n);
	int **p;
	p=(int **)malloc(sizeof(int *)*n);
	for(i=0;i<n;i++)
		p[i]=(int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&p[i][j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(p[i][j]==0)
			{
			if(p[i][j]!=p[i-1][j] && p[i][j]!=p[i][j-1])
			{
				a=i,b=j;
				break;
			}
			if(p[i][j]!=p[i+1][j] && p[i][j]!=p[i][j+1])
			{
				c=i,d=j;
				break;
			}
			}
		}
	}
	s=(c-a-1)*(d-b-1);
	printf("%d\n",s);
	for(i=0;i<n;i++)
		free(p[i]);
	free(p);


	return 0;
}
