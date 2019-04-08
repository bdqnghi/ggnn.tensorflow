void main(){
long d,i,j,m,n,a[11][11][5]={0,0};
scanf("%d%d",&m,&n);
a[5][5][0]=m;
for(d=1;d<=n;d++)
for(i=1;i<10;i++)
for(j=1;j<10;j++)
a[i][j][d]=
a[i-1][j-1][d-1]
+a[i][j-1][d-1]
+a[i-1][j][d-1]
+a[i][j][d-1]*2
+a[i+1][j-1][d-1]
+a[i+1][j][d-1]
+a[i+1][j+1][d-1]
+a[i-1][j+1][d-1]
+a[i][j+1][d-1];
for(i=1;i<10;i++)printf("%ld %ld %ld %ld %ld %ld %ld %ld %ld\n",
a[i][1][n],
a[i][2][n],
a[i][3][n],
a[i][4][n],
a[i][5][n],
a[i][6][n],
a[i][7][n],
a[i][8][n],
a[i][9][n]);}
