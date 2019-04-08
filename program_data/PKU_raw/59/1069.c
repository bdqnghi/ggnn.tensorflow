
char s[110][110],s1[110][110];
int main(){
	int n,i,m,j,ans,a,b;
	cin>>n;
	for (i=0;i<n;i++){
		cin>>s[i];
	}
	cin>>m;
	m--;
	while (m--){
		memcpy(s1,s,sizeof(s1));
		for (i=0;i<n;i++){
			for (j=0;j<n;j++){
				if (s[i][j]=='@'){
					a=i;
					b=j-1;
					if (a>=0&&a<n&&b>=0&&b<n){
						if (s[a][b]=='.'){
							s1[a][b]='@';
						}
					}
					a=i;
					b=j+1;
					if (a>=0&&a<n&&b>=0&&b<n){
						if (s[a][b]=='.'){
							s1[a][b]='@';
						}
					}
					a=i-1;
					b=j;
					if (a>=0&&a<n&&b>=0&&b<n){
						if (s[a][b]=='.'){
							s1[a][b]='@';
						}
					}
					a=i+1;
					b=j;
					if (a>=0&&a<n&&b>=0&&b<n){
						if (s[a][b]=='.'){
							s1[a][b]='@';
						}
					}
				}
			}
		}
		memcpy(s,s1,sizeof(s1));
	}
	ans=0;
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
			if (s[i][j]=='@')ans++;
	printf("%d\n",ans);
}