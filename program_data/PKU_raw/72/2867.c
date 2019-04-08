int main()
{
int m,n;
scanf("%d %d",&m,&n);
int sz[m][n];
int row,col;
for(row=0;row<m;row++){
  for(col=0;col<n;col++){
     scanf("%d ",&sz[row][col]);
  }
}
int a[400],b[400];
int i;
i=0;
for(row=0;row<m;row++){
  for(col=0;col<n;col++){
    if(row==0&&col==0){
       if(sz[row][col]>=sz[row][col+1]&&sz[row][col]>=sz[row+1][col]){
                 a[i]=row;
                 b[i]=col;
                 i++; 
       }
    }
    else if(row==0&&col==n-1){
        if(sz[row][col]>=sz[row][col-1]&&sz[row][col]>=sz[row+1][col]){
                a[i]=row;
                 b[i]=col;
                 i++; 
         }
    }
    else if(row==m-1&&col==0){
        if(sz[row][col]>=sz[row-1][col]&&sz[row][col]>=sz[row][col+1]){
                a[i]=row;
                 b[i]=col;
                 i++; 
         }
     }
    else if(row==m-1&&col==n-1){
        if(sz[row][col]>=sz[row-1][col]&&sz[row][col]>=sz[row][col-1]){
               a[i]=row;
                 b[i]=col;
                i++; 
         }
     }
    else if(row==0){
         if(sz[row][col]>=sz[row+1][col]&&sz[row][col]>=sz[row][col-1]&&sz[row][col]>=sz[row][col+1]){ 
           a[i]=row;
           b[i]=col;
            i++; 
         }
     }
    else if(row==m-1){
          if(sz[row][col]>=sz[row-1][col]&&sz[row][col]>=sz[row][col-1]&&sz[row][col]>=sz[row][col+1]){
             a[i]=row;
           b[i]=col; 
             i++; 
         }
     }
    else if(col==0){
          if(sz[row][col]>=sz[row-1][col]&&sz[row][col]>=sz[row+1][col]&&sz[row][col]>=sz[row][col+1]){
             a[i]=row;
           b[i]=col; 
            i++; 
         }
     }
     else if(col==n-1){
           if(sz[row][col]>=sz[row-1][col]&&sz[row][col]>=sz[row+1][col]&&sz[row][col]>=sz[row][col-1]){
            a[i]=row;
           b[i]=col; 
            i++; 
         }
     }
     else if(sz[row][col]>=sz[row-1][col]&&sz[row][col]>=sz[row+1][col]&&sz[row][col]>=sz[row][col-1]&&sz[row][col]>=sz[row][col+1]){
       a[i]=row;
       b[i]=col;
       i++; 
     }
   
   }
}
int k;
for( k = 0;k < i; k++ ){
      printf("%d %d\n",a[k],b[k]);
}
return 0;
}