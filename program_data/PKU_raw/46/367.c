int main(){
 int array[100][100],i,j,a,b,b1,c,c1,d,e,f,f1,g,g1,h,row,col,sz[10000]={0},n=0,s=0,p,k=0;
 scanf("%d %d",&row,&col);
    for (i=0;i<row;i++){
  for (j=0;j<col;j++){
   scanf("%d",&array[i][j]);
   s++;
  }
 }
 while (n<=s){
  for (k=0;k<col;k++){
  a=k;
  b1=k;
          for(b=b1;b<col-k;b++){
           sz[n]=array[a][b];
     n++;
    }
     d=col-k-1;
     for (c=k+1;c<row-k;c++){
   sz[n]=array[c][d];
   n++;
   }
  e=row-k-1;
  f1=col-2-k;
           for (f=f1;f>=k;f--){
     sz[n]=array[e][f];
     n++;
     }
  h=k;
  g1=row-2-k;
        for (g=g1;g>=1+k;g--){
     sz[n]=array[g][h];
     n++;
     }
  
  }
 }
     for (p=0;p<s;p++){
   printf("%d\n",sz[p]);
  }

return 0;
}