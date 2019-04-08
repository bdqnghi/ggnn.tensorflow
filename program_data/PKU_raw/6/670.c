int main(){
	int k,i,m,n,a,b,s[N];
	int sz[M][N];
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d %d",&m,&n);
		for(a=0;a<m;a++){
			for(b=0;b<n;b++){
				scanf("%d",&(sz[a][b]));
			}
		}
	  s[i]=0;
		for(b=0;b<n;b++){
			s[i]+=sz[0][b];
		}
		for(a=1;a<m;a++){
			s[i]+=sz[a][n-1];
		}
		for(b=n-2;b>=0;b--){
			s[i]+=sz[m-1][b];
		}
		for(a=m-2;a>=1;a--){
			s[i]+=sz[a][0];
		}
	  }
	for(i=0;i<k;i++){
		  printf("%d\n",s[i]);
	  }
	return 0;
}