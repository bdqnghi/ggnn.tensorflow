int main(){
   char zfc[LEN],dc[N][LEN];
   int i,len,m,n,k;
   gets(zfc);
   len=strlen(zfc);
   m=0;
   n=0;
   for(i=0;i<len;i++){
       if(zfc[i]!=' '&&zfc[i]!=','){
           dc[m][n]=zfc[i];
           n++;
           }
       else{
            if(zfc[i+1]!=' '&&zfc[i+1]!=','){
            dc[m][n]='\0';
            m++;
            n=0;
            }
            }
            }
   dc[m][n]='\0';
   for(k=1;k<=m+1;k++){
      for(i=0;i<m+1-k;i++){
         if(strlen(dc[i+1])>strlen(dc[i])){
            char e[LEN];
            strcpy(e,dc[i+1]);
            strcpy(dc[i+1],dc[i]);
            strcpy(dc[i],e);
            }
           }
            }
   printf("%s\n",dc[0]);
   for(k=1;k<=m+1;k++){
      for(i=0;i<m+1-k;i++){
        if(strlen(dc[i+1])<strlen(dc[i])){
            char e[LEN];
          strcpy(e,dc[i+1]);
            strcpy(dc[i+1],dc[i]);
            strcpy(dc[i],e);
           }
            }
           }
  printf("%s\n",dc[0]);
    return 0;
}
            