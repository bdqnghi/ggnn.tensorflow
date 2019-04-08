
int main(int argc, char* argv[])
{
	int a[MAX+1][MAX+1]={0};
	int m,n,i,j;
	scanf("%d %d",&m,&n);
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]){
				printf("%d %d\n",i-1,j-1);
			}
		}
	}
	return 0;
}
