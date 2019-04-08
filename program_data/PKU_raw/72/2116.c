int main (){
  int m,n,i,j,k=0;
  int ht[40][40];
  int aa[400];
  int bb[400];
   scanf("%d%d",&m,&n); 
   for(i=0;i<=m;i++){ht[i][0]=0;}
   for(j=0;j<=n;j++){ht[m+1][j]=0;}
   for(i=m+1;i>0;i--){ht[i][n+1]=0;}
   for(j=n+1;j>0;j--){ht[0][j]=0;}
   
   for(i=1;i<=m;i++){
     for(j=1;j<=n;j++){
        scanf("%d",&ht[i][j]); } }   
   for(i=1;i<=m;i++){
       for(j=1;j<=n;j++){
          if(ht[i][j]>=ht[i-1][j]&&ht[i][j]>=ht[i+1][j]&&ht[i][j]>=ht[i][j-1]&&ht[i][j]>=ht[i][j+1]){
           printf("%d %d\n",i-1,j-1);
            }}}   
   
     return 0; 
}