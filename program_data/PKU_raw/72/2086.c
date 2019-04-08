int main()
{
    int m,n,s[max+2][max+2],i,j;
	scanf("%d %d",&m,&n);
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&s[i][j]);
		}
	}
	for(i=0;i<=m+1;i++){
		s[i][0]=s[i][n+1]=0;
	}
	for(j=0;j<=n+1;j++){
		s[0][j]=s[m+1][j]=0;
	}
for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			if(s[i-1][j]<=s[i][j]&&s[i+1][j]<=s[i][j]&&s[i][j+1]<=s[i][j]&&s[i][j-1]<=s[i][j]){
				printf("%d %d\n",i-1,j-1);
			}
		}
	}
	return 0;
}

