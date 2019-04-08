int main(){
  int n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    char zfc[21];
    scanf("%s",zfc);
    if((zfc[0]>='a'&&zfc[0]<='z')||(zfc[0]>='A'&&zfc[0]<='Z')||zfc[0]=='_'){
      int s;
      for(int k=1;zfc[k]!='\0';k++){
        if((zfc[k]>='a'&&zfc[k]<='z')||(zfc[k]>='A'&&zfc[k]<='Z')||zfc[k]=='_'||(zfc[k]>='0'&&zfc[k]<='9')){
          s=0;
        }else{
          s=1;
          break;
        }
      }
      if(s==0){
        printf("yes\n");
      }else if(s==1){
        printf("no\n");
      }
    }else{
       printf("no\n");
    }
   }
  return 0;
}