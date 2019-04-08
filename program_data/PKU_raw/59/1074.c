


int main()
{   int n,m,i,j,t=0,day;
    char bf1[101][101]={'#'},bf2[101][101]={'#'};
	char kongbai[10];
	scanf("%d",&n);
	gets(kongbai);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%c",&bf1[i][j]);
		}
		gets(kongbai);
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			bf2[i][j]=bf1[i][j];
		}
	}
    scanf("%d",&m);
	for(day=1;day<m;day++){
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				if(bf1[i][j]=='@'){
					if(bf1[i+1][j]!='#'){
						bf2[i+1][j]='@';
					}
					if(bf1[i][j+1]!='#'){
						bf2[i][j+1]='@';
					}
					if(bf1[i-1][j]!='#'){
						bf2[i-1][j]='@';
					}
					if(bf1[i][j-1]!='#'){
						bf2[i][j-1]='@';
					}
				}
			}
		}
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				bf1[i][j]=bf2[i][j];
			}
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(bf1[i][j]=='@'){
				t++;
			}
		}
	}
	printf("%d",t);
	return 0;
}

