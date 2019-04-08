int main(){
    char mc[1000],zc[1000],huan[1000];
    int len1,len2,len3,i,j=0;
    int sum=0,ci=0,loc;
    scanf("%s%s%s",mc,zc,huan);
    len1=strlen(mc);
    len2=strlen(zc);
    len3=strlen(huan);
    for(i=0;i<len1;i++)
    {
        if(mc[i]==zc[0]){
                         sum=0;
                         for(j=i;j<len1;j++) {
                                       if(mc[j]==zc[j-i]){
                                                          sum++;
                                                          }
                                       else{
                                            break;
                                            }
                                       }
                         loc=i;
                                                if(sum==len2){
                                       for(i=0;i<loc;i++){
                                                        printf("%c",mc[i]);
                                                        }
                                       for(i=loc;i<=loc+len3-1;i++){
                                                              printf("%c",huan[i-loc]);
                                                              }
                                       for(i=loc+len3;i<=len1+len3-len2-1;i++){
                                                                             printf("%c",mc[i]);
                                                                             }
                                       ci++;
                                       break;
                                       
                                       }
                         
                         }
        
    }
                      
                      
     if(ci==0)
     {
         printf("%s",mc);
         }
          return 0;
     }
    
