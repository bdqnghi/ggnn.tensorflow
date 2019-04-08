int main(){
	int n,i,j,k,p=0,m;
	char room[110][110]={'#'};
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%s",room[i]);
	}
	scanf("%d",&m);
	for(k=0;k<m-1;k++){
	for(i=1;i<=n;i++){
		for(j=0;j<n;j++){
			if(room[i][j]=='@'){
				if(room[i-1][j]=='.'){
					room[i-1][j]='*';
				}
				if(room[i+1][j]=='.'){
					room[i+1][j]='*';
				}
	            if(room[i][j-1]=='.'){
					room[i][j-1]='*';
				}
                if(room[i][j+1]=='.'){
					room[i][j+1]='*';
				}
			}
		}
	}
		for(i=1;i<=n;i++){
		for(j=0;j<n;j++){
			if(room[i][j]=='*'){
				room[i][j]='@';
			}
		}
		}
	}
	for(i=1;i<=n;i++){
		for(j=0;j<n;j++){
			if(room[i][j]=='@'){
				p++;
			}
		}
	}
	printf("%d",p);
	return 0;
	}