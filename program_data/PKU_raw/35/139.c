void main()
{
	int n,m;
	int a[50][50],(*pa)[50];
	int i,j;
	int l=0;
	int max(int m,int a[50]);
	int min(int n,int i,int max,int (*p)[50]);
	pa=a;
	scanf("%d,%d",&n,&m);
	for(i=0;i<=n-1;i++)
		for(j=0;j<=m-1;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<=n-1;i++)
		if(min(n,i,max(m,a[i]),pa))
		{
			l++;
			printf("%d+%d\n",i,max(m,a[i]));
		}
	if(l==0) printf("No\n");
}

int max(int m,int a[50])
{
	int max1,i,k;
	max1=a[0];
	k=0;
	for(i=1;i<=m-1;i++)
		if(a[i]>max1) 
		{
			max1=a[i];
			k=i;
		}
	return k;
}

int min(int n,int i,int max,int (*pa)[50])
{
	int j,m;
	m=*(*(pa+i)+max);
	for(j=0;j<=n-1;j++)
		if(*(*(pa+j)+max)<m) return 0;
	return 1;
}