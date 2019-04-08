int main(){
int i,j,k,n,m,aa[101][101],ans;
char ss[101][101];
scanf("%d\n",&n);
for(i=0;i<=n;i++){
aa[i][0]=0;
aa[0][i]=0;
aa[n+1][i]=0;
aa[i][n+1]=0;
}
for(i=1;i<=n;i++){
	for(j=1;j<n;j++){
	scanf("%c",&ss[i][j]);
	aa[i][j]=0;
    if(ss[i][j]=='@')aa[i][j]=1;
    }
    scanf("%c\n",&ss[i][j]);
	aa[i][j]=0;
    if(ss[i][j]=='@')aa[i][j]=1;
}
scanf("%d",&m);
for(i=2;i<=m;i++)
for(j=1;j<=n;j++)
for(k=1;k<=n;k++){
	if(aa[j][k]!=i-1&&ss[j][k]!='#'){
	if(aa[j][k+1]==i-1||aa[j+1][k]==i-1||aa[j][k-1]==i-1||aa[j-1][k]==i-1)
		aa[j][k]=i;
	}
}
ans=0;
for(i=1;i<=n;i++)
for(j=1;j<=n;j++){
if(aa[i][j]>0)ans++;
}
printf("%d",ans);
return 0;
}