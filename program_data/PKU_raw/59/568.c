int main(){
   char sz[101][103][103];
   int n,i,j;
   scanf("%d",&n);
   for(i=1;i<=n;i++){
	      scanf("%s\n",&sz[0][i][1]);
   }
   int m,k;
   scanf("%d",&m);
 
	   
       for(i=0;i<=(n+1);i++){
    	   for(j=0;j<=(n+1);j++){
			   if(i==0||j==0||i==n+1||j==n+1){
			       sz[0][i][j]='#';
			   }
			   else{   sz[0][i][j]=sz[0][i][j];}
		   }
	   }


	   for(k=0;k<m;k++){
    		    for(i=1;i<=n;i++){
    	   for(j=1;j<=n;j++){
		   sz[k+1][i][j]=sz[k][i][j];
                   if(sz[k][i][j]=='.'&&(sz[k][i][j+1]=='@'||sz[k][i][j-1]=='@'||sz[k][i+1][j]=='@'||sz[k][i-1][j]=='@')){
                       sz[k+1][i][j]='@';}
                   
               }
    	   }
        }
        
   
   int sum=0,h,w;
   for(h=1;h<=n;h++){
	   for(w=1;w<=n;w++){
		   if(sz[m-1][h][w]=='@'){sum++;}
   }}
   printf("%d\n",sum);

   return 0;

}