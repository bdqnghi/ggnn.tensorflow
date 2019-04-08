int main(){
int m,n,i,j,k,y;
scanf("%d%d",&m,&n);
int a[m][n];
for(i=0;i<m;i++){
for(j=0;j<n;j++){
scanf("%d",&(a[i][j]));
}
}
if(a[0][0]>=a[0][1]&&a[0][0]>=a[1][0]){
printf("0 0\n");
}
for(i=1;i<n-1;i++){
if(a[0][i]>=a[0][i-1]&&a[0][i]>=a[0][i+1]&&a[0][i]>=a[1][i]){
printf("0 %d\n",i);
}
}
if(a[0][n-1]>=a[0][n-2]&&a[0][n-1]>=a[1][n-1]){
printf("0 %d\n",n-1);
}
for(k=1;k<m-1;k++){
if(a[k][0]>=a[k-1][0]&&a[k][0]>=a[k][1]&&a[k][0]>=a[k+1][0]){
printf("%d 0\n",k);
}
for(i=1;i<n-1;i++){
if(a[k][i]>=a[k-1][i]&&a[k][i]>=a[k][i-1]&&a[k][i]>=a[k][i+1]&&a[k][i]>=a[k+1][i]){
printf("%d %d\n",k,i);
}
}
if(a[k][n-1]>=a[k-1][n-1]&&a[k][n-1]>=a[k][n-2]&&a[k][n-1]>=a[k+1][n-1]){
printf("%d %d\n",k,n-1);
}
}
if(a[m-1][0]>=a[m-1][1]&&a[m-1][0]>=a[m-2][0]){
printf("%d 0\n",m-1);
}
for(i=1;i<n-1;i++){
if(a[m-1][i]>=a[m-1][i-1]&&a[m-1][i]>=a[m-1][i+1]&&a[m-1][i]>=a[m-2][i]){
printf("%d %d\n",m-1,i);
}
}
if(a[m-1][n-1]>=a[m-1][n-2]&&a[m-1][n-1]>=a[m-2][n-1]){
printf("%d %d\n",m-1,n-1);
}
return 0;
}