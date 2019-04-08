int main (){
  int k,m,n,i,j,a;
  int sz[100][100],s;
  s=0;
  scanf("%d",&k);
  for(a=0;a<k;a++){
s=0;
     scanf("%d%d",&m,&n);
     for(i=0;i<m;i++){
        for(j=0;j<n;j++)
           scanf("%d",&sz[i][j]);}
     for(i=0;i<m;i++){
        for(j=0;j<n;j++)
           if(i==0||i==m-1||j==0||j==n-1)
              s=s+sz[i][j];}
              
      printf("%d\n",s);}
  return 0;
}
