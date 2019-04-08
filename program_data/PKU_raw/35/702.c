int main()
{
    int sz[8][8];
    int row,col,r=0,q,w;
    int i,n;
    int max[8],min[8];
    scanf("%d,%d",&row,&col);
    for(i=0;i<row;i++){
     for(n=0;n<col;n++){
       scanf("%d",&sz[i][n]);
       max[i]=sz[i][0];
       min[n]=sz[0][n];
   }
  }
    for(i=0;i<row;i++)
     for(n=0;n<col;n++){
     if(sz[i][n]>max[i]) max[i]=sz[i][n];
     if(sz[i][n]<min[n]) min[n]=sz[i][n];
     }
    for(i=0;i<row;i++)
     for(n=0;n<col;n++){   
     if(max[i]==min[n]){
         r=1;
         q=i;
         w=n;
     }
   }
    if (r==1)
    printf("%d+%d",q,w);
    else printf("No");
    return 0;
}