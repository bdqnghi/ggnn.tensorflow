   char sz[102][102][102];
int main(){
   int n,i,j;
   scanf("%d",&n);
   for(i=1;i<=n;i++){
	      scanf("%s",sz[0][i]);
   }
   int m,k;
   scanf("%d",&m);
   for (i = 1; i <= n; i ++)
	   for (j = n; j > 0; j --)
	   {
		   sz[0][i][j] = sz[0][i][j-1];
	   }
   for (k=0; k<m; k++)
   {
       for (i=0;i<=(n+1); i ++)
             sz[k][i][0] = sz[k][i][n+1]=sz[k][0][i]=sz[k][n+1][i] = '#';
   }
   for(k=0;k<m;k++){
	   
       for(i=1;i<=n;i++){
    	   for(j=1;j<=n;j++){
    		   sz[k+1][i][j]=sz[k][i][j];
    		   
                   if(sz[k][i][j]=='.'&&(sz[k][i][j+1]=='@'||sz[k][i][j-1]=='@'||sz[k][i+1][j]=='@'||sz[k][i-1][j]=='@')){
                       sz[k+1][i][j]='@';
                   }
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