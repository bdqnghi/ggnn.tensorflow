int main (){
   int rie,k,i;
   int ROW,COL;
   int row,col;
   int sz[100][100]={0};
   int sum[100];
   
   scanf("%d",&k);

   for(i=1;i<=k;i++){
      scanf("%d%d",&ROW,&COL);
      for(row=0;row<ROW;row++){
         for(col=0;col<COL;col++){
             scanf("%d",&(sz[row][col]));
         }
      }
      rie=0;
      for(col=0;col<=COL-1;col++){
                 rie+=sz[0][col];
      }for(row=1;row<=ROW-1;row++){
                 rie+=sz[row][COL-1];
      }for(col=COL-2;col>=0;col--){
                 rie+=sz[ROW-1][col];
      }for(row=ROW-2;row>=1;row--){
                 rie+=sz[row][0];
      }sum[i]=rie;
   }
  
    for(i=1;i<=k;i++){     
       printf("%d\n",sum[i]);
    }
	return 0;
}