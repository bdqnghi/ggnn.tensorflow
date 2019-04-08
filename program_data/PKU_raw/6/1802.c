int main(){
	int n,k,m,i;
	int a=0,b=0,c=0,d=0,e=0;
	int sz[100][100];
	scanf("%d",&k);
	for(int l=1;l<=k;l++){
		scanf("%d %d",&m,&n);
		for(i=0;i<m;i++){
			for(int j=0;j<n;j++){
				scanf("%d",&sz[i][j]);
			}
		}
		for(i=0;i<m;i++){
			a+=sz[i][0];
			b+=sz[i][n-1];
		}
		for(int j=0;j<n;j++){
			c+=sz[0][j];
			d+=sz[m-1][j];
		}
		e=a+b+c+d-sz[0][0]-sz[0][n-1]-sz[m-1][0]-sz[m-1][n-1];
		printf("%d\n",e);
		e=0;
		a=0;
		b=0;
		c=0;
		d=0;
	}
	return 0;
}