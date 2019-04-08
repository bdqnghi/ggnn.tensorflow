int main(){
    int k,m,n,h,i,j,a,b;
	int s[100][100],r[100];
	scanf("%d",&k);
    for(int t=0;t<=k-1;t++){
		h=0;
		scanf("%d%d",&m,&n);
		for(i=0;i<=m-1;i++){
			for(j=0;j<=n-1;j++){
				scanf("%d",&s[i][j]);
			}
		}
        for(a=0;a<=n-1;a++){
			h=h+s[0][a]+s[m-1][a];
		}
		for(b=1;b<=m-2;b++){
			h=h+s[b][0]+s[b][n-1];
		}
		r[t]=h;
	}
	for(int x=0;x<=k-1;x++){
     	printf("%d\n",r[x]);
	}
return 0;}
