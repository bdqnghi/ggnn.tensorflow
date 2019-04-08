int main(){
	int i,j,n,m,k,b[102][102]={0},e=0;
	char a[102][102]={'#'};
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%s",a[i]);
	}
	for(i=1;i<=n;i++){
		for(j=n;j>=1;j--){
			a[i][j]=a[i][j-1];
	}}
	scanf("%d",&m);
	m=m-1;
	for(k=1;k<=m;k++){
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				b[i][j]=0;
		}}
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				if(a[i][j]=='@'){
					if(a[i][j+1]=='.')
						b[i][j+1]+=1;
					if(a[i][j-1]=='.')
						b[i][j-1]+=1;
					if(a[i+1][j]=='.')
						b[i+1][j]+=1;
					if(a[i-1][j]=='.')
						b[i-1][j]+=1;
		}}}
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				if(b[i][j]>=1){
					a[i][j]='@';
		}}}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(a[i][j]=='@')
				e++;
	}}
	printf("%d",e);
	return 0;
}