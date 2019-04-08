int main(){
int m,n,i,j,A[20][20];
scanf("%d %d",&n,&m);
for(i=0;i<n;i++){
for(j=0;j<m;j++){
scanf("%d",&A[i][j]);
}}
for(i=0;i<n;i++){
if(i==0){
if(A[0][0]>=A[0][1]&&A[0][0]>=A[1][0])printf("0 0\n");
for(j=1;j<m-1;j++){
if(A[0][j]>=A[0][j-1]&&A[0][j]>=A[1][j]&&A[0][j]>=A[0][j+1])
printf("0 %d\n",j);
}
if(A[0][m-1]>=A[0][m-2]&&A[0][m-1]>=A[1][m-1])printf("0 %d\n",m-1);}
else if(i!=0&&i!=n-1){
if(A[i][0]>=A[i-1][0]&&A[i][0]>=A[i+1][0]&&A[i][0]>=A[i][1])printf("%d 0\n",i);
for(j=1;j<m-1;j++){
if(A[i][j]>=A[i-1][j]&&A[i][j]>=A[i][j-1]&&A[i][j]>=A[i+1][j]&&A[i][j]>=A[i][j+1])
printf("%d %d\n",i,j);
}
if(A[i][m-1]>=A[i][m-2]&&A[i][m-1]>=A[i+1][m-1]&&A[i][m-1]>=A[i-1][m-1])printf("%d %d\n",i,m-1);}
else if(i==n-1){
if(A[n-1][0]>=A[n-2][0]&&A[n-1][0]>=A[n-1][1])printf("%d 0\n",n-1);
for(j=1;j<m-1;j++){
if(A[n-1][j]>=A[n-2][j]&&A[n-1][j]>=A[n-1][j-1]&&A[n-1][j]>=A[n-1][j+1])
printf("%d %d\n",i,j);}
if(A[n-1][m-1]>=A[n-1][m-2]&&A[n-1][m-1]>=A[n-2][m-1])printf("%d %d\n",n-1,m-1);

}
}
return 0;
}