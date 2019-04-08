int main(){
 int n,i,j;
 scanf("%d",&n);
 scanf("\n");
 char str[256];
 for(i=0;i<n;i++){
  scanf("%s",str);
  for(j=0;str[j];j++){
   if(str[j]=='A'){
    printf("T");
   }else if(str[j]=='T'){
   printf("A");
   }else if(str[j]=='C'){
   printf("G");
   }else if(str[j]=='G'){
   printf("C");
   }
  }
  printf("\n");
}
  return 0;
 }