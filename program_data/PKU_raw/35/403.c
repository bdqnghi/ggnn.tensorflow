int main () {
 int i,j,k,t=0,s;
 int z=0,w=0,m,n;
 scanf ("%d, %d\n",&m,&n);
 int a[8][8];
 for (i=0;i<m;i++){
   for (j=0;j<n-1;j++){
    scanf ("%d",&a[i][j]);
   }
    scanf ("%d\n",&a[i][n-1]);
   
  }
  for (i=0;i<m;i++){
   s=a[i][0];k=i;
           for (j=0;j<n;j++){
   if (a[i][j]>s){
    s=a[i][j];
    k=i;
    t=j;}
     }
     for (i=0;i<m;i++){
      if (a[i][t]<s){w=w+1;}
     }
      if (w==0) {printf ("%d+%d",k,t);
      z=z+1;}
      else continue;
  
 }
 if (z==0) {printf ("No");}
    return 0;
}