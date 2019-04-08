int main(){
	int m,n,i,j;
	int s[27][27];
    scanf("%d%d",&m,&n);
	for(i=0;i<m+2;i++){
		s[i][0]=0;
	}
for(i=0;i<m+2;i++){
		s[i][n+1]=0;
	}
for(i=0;i<n+2;i++){
		s[0][i]=0;
	}
for(i=0;i<n+2;i++){
		s[m+1][i]=0;
	}
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&s[i][j]);
		}
	}
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
		   if(s[i][j]>=s[i+1][j]&&s[i][j]>=s[i-1][j]&&s[i][j]>=s[i][j-1]&&s[i][j]>=s[i][j+1])
			   printf("%d %d\n",i-1,j-1);
		}
	}
return 0;
}