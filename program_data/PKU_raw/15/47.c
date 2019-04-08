int main(){
	int n,i,j,k=1,m=1,x[100],y[100],location[100][100];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&location[i][j]);
			if(location[i][j]==0){
				x[k]=j;
				k++;
				y[m]=i;
				m++;
			}
		}
	}
	printf("%d\n",(y[m-1]-y[1]-1)*(x[k-1]-x[1]-1));
	return 0;
}
