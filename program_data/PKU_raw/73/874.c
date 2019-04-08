
const int N=5;

int max(int a[])
{
	int i,m=0;
	for(i=1;i<N;i++)
		if(a[i]>a[m]) m=i;
	return m;
}

int min(int a[N][N],int m,int n)
{
	int i;
	for(i=0;i<N;i++)
		if(a[i][n]<a[m][n]) return 0;
	return 1;
}

main()
{
	int a[N][N],i,j,n;
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			scanf("%d",*(a+i)+j);
	for(i=0;i<N;i++)
	{
		n=max(a[i]);
		if(min(a,i,n))
		{
			printf("%d %d %d",i+1,n+1,a[i][n]);
			return 0;
		}
	}
	printf("not found");
}