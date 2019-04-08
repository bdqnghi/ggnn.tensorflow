int main(){
	int k,i,j,l,a,n,m,sz[100][100],result[100];
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d %d",&m,&n);
		for(j=0;j<m;j++){
			for(l=0;l<n;l++){
				scanf("%d",&sz[j][l]);
			}
		}
		a=0;
		for(l=0;l<n;l++){
			a+=sz[0][l];
		}
		if(m>1){
		    for(l=0;l<n;l++){
			    a+=sz[m-1][l];
			}
		}
		for(j=1;j<m-1;j++){
			a+=sz[j][0];
		}
		if(n>1){
		    for(j=1;j<m-1;j++){
			    a+=sz[j][n-1];
			}
		}
		result[i]=a;
	}
	for(i=0;i<k;i++){
		printf("%d\n",result[i]);
	}
	return 0;
}