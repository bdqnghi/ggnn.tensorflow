int main() {
   int n,result,i;
   char zfc[21];
   scanf("%d",&n);
   while(n--){
     scanf("%s",zfc);
     if((zfc[0]>='A'&&zfc[0]<='Z')||(zfc[0]>='a'&&zfc[0]<='z')||(zfc[0]=='_')){
       for(i=1;zfc[i]!='\0';i++){
          if((zfc[i]>='A'&&zfc[i]<='Z')||(zfc[i]>='a'&&zfc[i]<='z')||(zfc[i]=='_')||(zfc[i]>='0'&&zfc[i]<='9')){
              result=1;
          }else{
              result=0;
              break;         
          }
        }
     }else{
        result=0;
     }
     if(result==1){
        printf("yes\n");
     }else{
        printf("no\n");
     }
   }
   return 0;
}       