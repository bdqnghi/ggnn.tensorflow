void main(){
	int row,col,a[100][100],i,j,n;
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&a[i][j]);
		}
	}
    for(n=0;n<=row+col-2;n++){
		for(i=0;i<row && i<=n;i++){
			for(j=0;j<col && j<=n;j++){
				if(i+j==n) printf("%d\n",a[i][j]);
			}
		}
	}
}