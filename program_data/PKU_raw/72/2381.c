int main(){
	int k,i,j,m,n,x[1000],y[1000];
	scanf("%d%d", &m, &n);
	int a[A+2][A+2]={0};
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	k=0;
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			if(a[i][j] >= a[i-1][j] && a[i][j] >= a[i+1][j] &&
				a[i][j] >= a[i][j-1] && a[i][j] >= a[i][j+1]){
				x[k]=i-1;
				y[k]=j-1;
				k++;
			}
		}
	}
	for(i=0;i<k;i++){
		printf("%d %d\n", x[i], y[i]);
	}
	return 0;
}