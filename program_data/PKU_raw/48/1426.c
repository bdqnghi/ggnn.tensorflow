int main(){
int n,m,i,j,k;
int a[10][10][10];
scanf ("%d %d",&m,&n);
 for (k=0;k<11;k++){
  for (j=0;j<11;j++){
a[0][k][j]=0;
a[1][k][j]=0;
a[2][k][j]=0;
a[3][k][j]=0;
a[4][k][j]=0;
  }
 }
a[0][5][5]=m;
for (i=1;i<n+1;i++){
 for (k=1;k<10;k++){
  for (j=1;j<10;j++){
      a[i][k][j]=2*a[i-1][k][j]+a[i-1][k][j-1]+a[i-1][k][j+1]+a[i-1][k+1][j-1]+a[i-1][k+1][j]+a[i-1][k+1][j+1]+ a[i-1][k-1][j-1]+a[i-1][k-1][j]+a[i-1][k-1][j+1];
   }
  }
}
 for (k=1;k<10;k++){
  for (j=1;j<9;j++){
printf("%d ",a[n][k][j]) ;
  }
printf("%d\n",a[n][k][9]) ;
}
return 0;
}