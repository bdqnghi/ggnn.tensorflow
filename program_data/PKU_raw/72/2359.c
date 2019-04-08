int main()
{
	int a,e,m,n,i,j;
	int sz[22][22];
	scanf("%d%d",&m,&n); 
	for(i=0;i<m+2;i++){
		for(j=0;j<n+2;j++){
				sz[i][j]=0;
		}
	}
	for(i=1;i<m+1;i++){
		for(j=1;j<n+1;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	for(i=1;i<m+1;i++){
		for(j=1;j<n+1;j++){
			if(sz[i][j]>=sz[i+1][j]&&sz[i][j]>=sz[i][j+1]&&sz[i][j]>=sz[i-1][j]&&sz[i][j]>=sz[i][j-1]){
				a=i-1;
				e=j-1;
				printf("%d %d\n",a,e);
			}
		}
	}
	return 0;
}
