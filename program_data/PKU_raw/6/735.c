
int main(int argc, char* argv[])
{
	int k,m,n,i,col,row,sum[100]={0};
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d %d",&m,&n);
		int sz[100][100];
		
		for(row=0;row<m;row++){
			for(col=0;col<n;col++){
				scanf("%d",&sz[row][col]);
			}
		}
		for(col=0;col<n-1;col++) sum[i]+=sz[0][col];
		for(row=0;row<m-1;row++) sum[i]+=sz[row][n-1];
		for(col=n-1;col>0;col--) sum[i]+=sz[m-1][col];
		for(row=m-1;row>0;row--) sum[i]+=sz[row][0];
		printf("%d\n",sum[i]);
	}

	

	return 0;
}