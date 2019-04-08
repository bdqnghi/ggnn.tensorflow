int main(){
int k,m,n,ans,i,j,x;
scanf("%d",&k);
while (k--){
scanf("%d%d",&n,&m);ans=0;
for (i=1;i<=n;i++){
if(i==1||i==n)
for (j=1;j<=m;j++) {scanf("%d",&x);ans+=x;}
else
for (j=1;j<=m;j++) {scanf("%d",&x);if(j==1||j==m) ans+=x;}
}
printf("%d\n",ans);
}
return 0;
}