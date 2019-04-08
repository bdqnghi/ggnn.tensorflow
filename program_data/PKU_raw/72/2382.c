
int main(){
    int n,m,i,j;
    int map[100][100];
    scanf("%d%d",&n,&m);
   for(i=1;i<=n;i++)
    for(j=1;j<=m;j++)
      scanf("%d",&map[i][j]);
   for(i=1;i<=n;i++)map[i][0]=map[i][m+1]=0;
   for(i=1;i<=m;i++)map[0][i]=map[n+1][i]=0;
   int f=0;
   for(i=1;i<=n;i++)
    for(j=1;j<=m;j++)
      if(map[i][j]>=map[i-1][j]&&map[i][j]>=map[i][j-1]&&map[i][j]>=map[i+1][j]&&map[i][j]>=map[i][j+1]){
                      if(f)printf("\n");
                      printf("%d %d",i-1,j-1);f=1;
                      }
       return 0;
    }
