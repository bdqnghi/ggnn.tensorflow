int main()
{
	int m,n,i,j,h[20][20]={0},k[20][20]={0};
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&h[i][j]);
	for(i=0;i<m-1;i++)
		for(j=0;j<n;j++)
			k[i][j]+=cmp(h[i][j],h[i+1][j]);
	for(i=1;i<m;i++)
		for(j=0;j<n;j++)
			k[i][j]+=cmp(h[i][j],h[i-1][j]);
	for(i=0;i<m;i++)
		for(j=0;j<n-1;j++)
			k[i][j]+=cmp(h[i][j],h[i][j+1]);
	for(i=0;i<m;i++)
		for(j=1;j<n;j++)
			k[i][j]+=cmp(h[i][j],h[i][j-1]);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(k[i][j]==0)
				printf("%d %d\n",i,j);
	return 0;
}
int cmp(int a,int b)
{
	return(a>=b? 0:1);
}