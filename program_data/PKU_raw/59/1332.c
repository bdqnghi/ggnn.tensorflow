int main(){
	int n,i,j,m,k,s=0;
	char a[100][100],b[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("\n");
		for(j=0;j<n;j++){
			scanf("%c",&a[i][j]);
		}
	}
	scanf("%d",&m);
	for(k=1;k<m;k++){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				b[i][j]=a[i][j];
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
		if(b[i][j]=='@'){
			if(i>0&&b[i-1][j]=='.')
				a[i-1][j]='@';
			if(i<n-1&&b[i+1][j]=='.')
				a[i+1][j]='@';
			if(j>0&&b[i][j-1]=='.')
				a[i][j-1]='@';
			if(j<n-1&&b[i][j+1]=='.')
				a[i][j+1]='@';
		}
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i][j]=='@')
				s+=1;
		}
	}
	printf("%d",s);
	return 0;
}