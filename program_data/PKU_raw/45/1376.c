int main(){
  char word_0[LEN],word_1[LEN];
  scanf("%s %s",word_0,word_1);
  int m,n,i,j,p=0;
  m=strlen(word_0);
  n=strlen(word_1);
  for(i=0;i<n;i++){
      if(word_0[0]==word_1[i]){
         for(j=1;j<m;j++){
             if(word_0[j]!=word_1[i+j]){
                break;
             }else{
                p++;
             }
         }
      }
      if(p==(m-1)){
         printf("%d",i);
         break;
      }
  }
  return 0;
} 
