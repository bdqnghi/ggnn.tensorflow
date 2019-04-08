int main()
{
	int k;
	scanf("%d",&k);
    int i,j,p,q;
	int N[100][100];
	int m,n;
	int sum=0;
	for(i=1;i<=k;i++)
	{
		sum=0;
		scanf("%d%d",&m,&n);
        for(p=1;p<=m;p++){
			for(q=1;q<=n;q++){
				scanf("%d",&N[p][q]);
			}
		}
		for(j=1;j<=n;j++){
			sum+=N[1][j];
		}
		for(j=1;j<=n;j++){
			sum+=N[m][j];
		}
        for(j=1;j<=m;j++){
			sum+=N[j][1];
		}
		for(j=1;j<=m;j++){
			sum+=N[j][n];
		}
		sum=sum-N[1][1]-N[1][n]-N[m][1]-N[m][n];
		printf("%d\n",sum);
	}
	return 0;
}