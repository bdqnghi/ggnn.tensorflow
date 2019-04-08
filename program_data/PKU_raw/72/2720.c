
int s[110][110];
int main(){
	int m,n,i,j;
	scanf("%d%d",&m,&n);
	for (i=1;i<=m;i++){
		for (j=1;j<=n;j++){
			scanf("%d",s[i]+j);
		}
	}
	for (i=1;i<=m;i++){
		for (j=1;j<=n;j++){
			if (s[i][j]>=s[i][j-1]
				&&s[i][j]>=s[i][j+1]
				&&s[i][j]>=s[i-1][j]
				&&s[i][j]>=s[i+1][j]){
				printf("%d %d\n",i-1,j-1);
			}
		}
	}
}