int main()
{	
	int a,b,c,d,e,m,n,i,j,k,sz[22][22];
	for(i=0;i<m+2;i++){
	     for(j=0;j<n+2;j++){
	        sz[i][j]=0; 	
	     }
	}
	scanf("%d%d",&m,&n);
	for(i=1;i<m+1;i++){
		for(j=1;j<n+1;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	for(i=1;i<m+1;i++){
		for(j=1;j<n+1;j++){
			if(sz[i][j]>=sz[i+1][j]&&sz[i][j]>=sz[i][j+1]&&sz[i][j]>=sz[i-1][j]&&sz[i][j]>=sz[i][j-1]){
				d=i-1;
				e=j-1;
				printf("%d %d\n",d,e);
			}
		}
	}
    return 0;
}