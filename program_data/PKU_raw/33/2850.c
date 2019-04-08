int main(){
  int i,n;
  char c[N][L],d[N][L];
  scanf("%d",&n);
  for(i=0;i<n;i++){
      scanf("%s/n",c[i]);
  }
  for(i=0;i<n;i++){
      for(int j=0;j<strlen(c[i]);j++){
          if(c[i][j]=='A'){
              d[i][j]='T';
          }else
          if(c[i][j]=='G'){
              d[i][j]='C';
          }else
          if(c[i][j]=='C'){
              d[i][j]='G';
          }else
          if(c[i][j]=='T'){
              d[i][j]='A';
          }
      }
  }
  for(i=0;i<n;i++){
  printf("%s\n",d[i]);
  
  }
}
