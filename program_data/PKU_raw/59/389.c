int main(){
	int n,i,j,m,num=0,k;
	char a[102][103],b[102][103];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%s",a[i]);
	}
	for(i=1;i<=n;i++){
		for(j=n-1;j>=0;j--){
			a[i][j+1]=a[i][j];
		}
	}

	scanf("%d",&m);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			b[i][j]=a[i][j];
		}
	}
	for(k=1;k<m;k++){
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(a[i][j]=='@'){
				if(b[i-1][j]=='.'){
					b[i-1][j]='@';
				}
				if(b[i+1][j]=='.'){
					b[i+1][j]='@';
				}
				if(b[i][j-1]=='.'){
					b[i][j-1]='@';
				}
				if(b[i][j+1]=='.'){
					b[i][j+1]='@';
				}
			}
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			a[i][j]=b[i][j];
		}
	}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(b[i][j]=='@'){
				num++;
			}
		}
	}
	printf("%d",num);
	return 0;
}

