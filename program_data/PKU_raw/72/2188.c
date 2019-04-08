int main(){
	int m,n,a[1000][1000],b[1000][2],i,j,x=0,e;
	scanf("%d %d",&m,&n);
	for(i=1;i<m+1;i++){
		for(j=1;j<n+1;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<=m+1;i++){
		for(j=0;j<=n+1;j++){
			a[0][j]=a[m+1][j]=a[i][0]=a[0][n+1]=0;
		}
	}
	for(i=1;i<m+1;i++){
		for(j=1;j<n+1;j++){
			if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i][j-1]){
				b[x][0]=i-1;
				b[x][1]=j-1;
				x++;
			}

		}
	}

	for(i=0;i<x;i++){
		printf("%d %d\n",b[i][0],b[i][1]);
	}
}