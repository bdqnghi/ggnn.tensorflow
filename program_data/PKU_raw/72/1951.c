int main(){
int N=1000;
int m,n;
scanf("%d %d\n",&m,&n);
int sz[m+2][n+2];
for(int i=1;i<=m+2;i++){
for(int t=1;t<=n+2;t++){sz[i-1][t-1]=0;}
}

for(int i=1;i<=m;i++){
for(int t=1;t<=n;t++){scanf("%d",&sz[i][t]);}
}

int a[N][2];
int x=0;

for(int i=1;i<=m;i++){
for(int t=1;t<=n;t++){
if(sz[i][t]>=sz[i-1][t]&&sz[i][t]>=sz[i][t-1]&&sz[i][t]>=sz[i+1][t]&&sz[i][t]>=sz[i][t+1]){a[x][0]=i-1;a[x][1]=t-1;x++;}
}
}

for(int i=1;i<x;i++){printf("%d %d\n",a[i-1][0],a[i-1][1]);}
printf("%d %d",a[x-1][0],a[x-1][1]);

return 0;

}