int main()
{
int dk[MAX+2][MAX+2];
int i,j,m,n;
scanf("%d %d", &m,&n);
for(i=1;i<=m;i++){
	for(j=1;j<=n;j++)
		scanf("%d",&dk[i][j]);
}
for(i=1;i<=m;i++)
    dk[i][0]=dk[i][n+1]=0;
for(j=1;j<=n;j++)
    dk[0][j]=dk[m+1][j]=0;
for(i=1;i<=m;i++){
	for(j=1;j<=n;j++){
		if(dk[i][j]>=dk[i+1][j] && dk[i][j]>=dk[i-1][j] && dk[i][j]>=dk[i][j+1] && dk[i][j]>=dk[i][j-1])
        printf("%d %d\n",i-1,j-1);
}
}	
return 0;
}