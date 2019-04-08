int main(){
    int row,col,v[100][100],i,j,k;
    scanf("%d%d",&row,&col);
    for(int i=0;i<=row-1;i++){
            for(int j=0;j<=col-1;j++){
                    scanf("%d",&v[i][j]);
             }
     }
   
  for(int j=0;j<=col-1;j++)
  {int m=j;
   for(int k=0;k<=row-1&&m>=0;m--&&k++)
    { printf("%d\n",v[k][m]);}
    k=0;
  }
  
  for(int i=1;i<=row-1;i++){int n=i;
  for(int j=col-1 ;n<=row-1&&j>=0;n++&&j--)
  {printf("%d\n",v[n][j]);}}
  
   int z;
   scanf("%d",z); 
 return 0;
 
   
}              