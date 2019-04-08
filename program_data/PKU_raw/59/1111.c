int main(){
	int n,i,p,t;
	scanf("%d\n",&n);
	char a[101][101];
	for(i=0;i<n;i++){
		scanf("%s\n",a[i]);
	}
	int q,w;
	int c[10000],b[10000];
	scanf("%d",&p);
	int j;
	for(i=1;i<p;i++){
		w=0;
		for(t=0;t<n;t++){
			for(q=0;q<n;q++){
				if(a[t][q]=='@'){
					c[w]=t;
					b[w]=q;
					w++;
				}
			}
		}
		for(j=0;j<w;j++){
			if(a[c[j]+1][b[j]]!='#'&&c[j]+1<n){
				a[c[j]+1][b[j]]='@';
			}if(a[c[j]][b[j]+1]!='#'&&b[j]+1<n){
				a[c[j]][b[j]+1]='@';
			}if(a[c[j]-1][b[j]]!='#'&&c[j]-1>=0){
				a[c[j]-1][b[j]]='@';
			}if(a[c[j]][b[j]-1]!='#'&&b[j]-1>=0){
				a[c[j]][b[j]-1]='@';
			}
		}
	}
	int y=0;
	for(i=0;i<n;i++){
		for(t=0;t<n;t++){
			if(a[i][t]=='@'){
				y++;
			}
		}
	}
	printf("%d",y);
	return 0;
}
