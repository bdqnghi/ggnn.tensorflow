int main(){
    int len;
    char sp,word[300][20];
    for(int i=0;i<300;i++){
         scanf("%s%c",word[i],&sp);
         len=strlen(word[i]);
         if(len==0){
             break;
                      }
          if(i==0){ 
            printf("%d",len);
           }else{printf(",%d",len);}
         }
            return 0;
    } 


