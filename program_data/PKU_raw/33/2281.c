int main(){
    int n,i,j,c=0;
    int a[1000]={0};
    char s1[1000][256];
    char s2[1000][256];
    scanf("%d",&n);
    for(i=0;i<n;i++){
         scanf("%s",s1[i]);
         a[i]=strlen(s1[i]);
         }
    for(i=0;i<n;i++){
         for(j=0;s1[i][j]!='\0';j++){
              if(s1[i][j]=='A'){
                   s2[i][j]='T';
                   }
              else if(s1[i][j]=='G'){
                   s2[i][j]='C';
                   }
              else if(s1[i][j]=='C'){
                   s2[i][j]='G';
                   }
              else{
                   s2[i][j]='A';
                   }
              }
         c=a[i];
         s2[i][c]='\0';
         }
    for(i=0;i<n;i++){
         printf("%s\n",s2[i]);
         }
    return 0;
}
