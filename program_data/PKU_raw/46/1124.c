 int main(){
 int b[100][100],Row,Col,n,i,k,l,row,col,s=0;
 scanf("%d %d",&Row,&Col);
 for(row=0;row<Row;row++){
    for(col=0;col<Col;col++){
     scanf("%d",&b[row][col]);
                            }
                      }
for(i=1;s<Row*Col;i=i+1){
  s=s+(Row+Col-4*i+4)*2-4;
                          }
 n=i-1;
 s=0;
 for(k=1;k<=n;k++){
    for(l=k-1;l<=Col-k&&s!=Row*Col;l++){
       printf("%d\n",b[k-1][l]);
        s=s+1;
                           }
    for(l=k;l<=Row-k&&s!=Row*Col;l++){
        printf("%d\n",b[l][Col-k]);
        s=s+1;
                          }
   for(l=Col-k-1;l>=k-1&&s!=Row*Col;l--){ 
       printf("%d\n",b[Row-k][l]);
       s=s+1;
                            }
   for(l=Row-k-1;l>=k&&s!=Row*Col;l--){
     printf("%d\n",b[l][k-1]);
     s=s+1;
                           }
       }
return 0;
}
