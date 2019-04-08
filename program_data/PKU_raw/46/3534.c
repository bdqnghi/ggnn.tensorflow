int main(){
	int r,c,i,j,e,k,m,n,l;
	int s[101][101];
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&s[i][j]);
		}
	}
	e=r*c;
	for(i=0;;i++){
		for(k=i;k<c-i;k++){
			printf("%d\n",s[i][k]);
			e--;
			if(e==0)
				return 0;
		}
		for(m=i+1;m<r-i;m++){
			printf("%d\n",s[m][c-1-i]);
			e--;
			if(e==0)
				return 0;
		}
		for(n=c-2-i;n>=i;n--){
			printf("%d\n",s[r-1-i][n]);
			e--;
			if(e==0)
				return 0;
		}
		for(l=r-2-i;l>i;l--){
			printf("%d\n",s[l][i]);
			e--;
			if(e==0)
				return 0;
		}
	}
	return 0;
}