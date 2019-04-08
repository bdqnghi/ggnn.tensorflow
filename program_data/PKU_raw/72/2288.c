int main()
{
	int s[22][22],m,n,i,j;
	scanf("%d%d",&m,&n);
	memset(s,0,sizeof(s));
    for(i=1;i<=m;i++){
		for(j=1;j<=n;j++)
			scanf("%d",&s[i][j]);
	}
    for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			if(s[i][j]>s[i-1][j]-1&&s[i][j]>s[i+1][j]-1&&s[i][j]>s[i][j+1]-1&&s[i][j]>s[i][j-1]-1)
				printf("%d %d\n",i-1,j-1);
		}
	}
	return 0;
}