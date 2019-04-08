int max(int a[22][22],int x,int y){
if(
(a[x][y]>=a[x-1][y])&&
(a[x][y]>=a[x+1][y])&&
(a[x][y]>=a[x][y-1])&&
(a[x][y]>=a[x][y+1]))return(1);
else return(0);}

void main(){
int i,j,m,n,a[22][22]={0,0};
scanf("%d%d",&m,&n);
for(i=1;i<=m;i++)
for(j=1;j<=n;j++)
scanf("%d",&a[i][j]);
for(i=1;i<=m;i++)
for(j=1;j<=n;j++)
if(max(a,i,j))printf("%d %d\n",i-1,j-1);}