int main(){
    int n,i,j,m,k;
	int p=0;
	scanf("%d",&n);
	char sz[n+2][n+2];
	char sz2[n+2];
	for(i=1;i<n+1;i++){
		scanf("%*c");
		for(j=1;j<=n;j++){
			scanf("%c",&(sz[i][j]));
			
		}
	}
	scanf("%d",&m); 
	for(j=0;j<=n+1;j++){
		sz[0][j]='#';
		sz[n+1][j]='#';
	}
	for(i=0;i<=n+1;i++){
		sz[i][0]='#';
		sz[i][n+1]='#';
	}
	for(k=0;k<m-1;k++){
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        if(sz[i][j]=='a'){
            sz[i][j]='@';
        }
    }
    }
for(i=1;i<=n;i++){
for(j=1;j<=n;j++){
if(sz[i][j]=='@'){
if(sz[i][j+1]=='.'){
sz[i][j+1]='a';
}
else{}
if(sz[i][j-1]=='.'){
sz[i][j-1]='a';
}
else{}
if(sz[i+1][j]=='.'){
sz[i+1][j]='a';
}
else{}
if(sz[i-1][j]=='.'){
sz[i-1][j]='a';
}
else{}
}
}
}
	}
	for(i=1;i<n+1;i++){
		for(j=1;j<n+1;j++){
			if((sz[i][j]=='@')||(sz[i][j]=='a')){
				p=p+1;
			}
		}
	}
	printf("%d",p);
	return 0;
}	
	

