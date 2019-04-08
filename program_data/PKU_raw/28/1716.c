int main()
{
 char zfc[1000],zsz[1000][1000];
 gets(zfc);
 int word_i = 0, word_j = 0;
 int i,n;
 n=strlen(zfc);
 for(i=0;i<n;i++){
  if (zfc[i] == ' ') {
   
   zsz[word_i][word_j] = '\0';
   word_j=0;
   word_i++;
  } else {
   zsz[word_i][word_j] = zfc[i];
   word_j++;
   if (i == n-1) {
    zsz[word_i][word_j] = '\0';
    word_i++;
   }
  }
 }

 int l[1000],j;
 for(j=0;j<word_i;j++){
  l[j]=strlen(zsz[j]);
  if(l[j]!=0){
   if(j!=0){
    printf(",%d",l[j]);
   }
      else {
       printf("%d",l[j]);
   }
  }
 }
    return 0;
}