int main(){
    int m,n,i,j;
	scanf("%d%d",&m,&n);
	int h[20][20];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&h[i][j]);
	int x[400][2],N=0;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(
				(i==0||h[i][j]>=h[i-1][j])
				&&(i==m-1||h[i][j]>=h[i+1][j])
				&&(j==0||h[i][j]>=h[i][j-1])
				&&(j==n-1||h[i][j]>=h[i][j+1])
			){
				x[N][1]=i;
				x[N][2]=j;
				N++;
			}
	for(i=0;i<N;i++)
		printf("%d %d\n",x[i][1],x[i][2]);
	return 0;
}
