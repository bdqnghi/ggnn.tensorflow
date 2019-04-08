int main(){
    char s[256],z[256],p[256];
    scanf("%s%s%s",s,z,p);
    int i,ls,lz,lp,j,t=0,loc=-1;
    ls=strlen(s);
    lz=strlen(z);
    lp=strlen(p);
    for(i=0;i<ls;i++){
                      t=0;
                      for(j=i;j<i+lz;j++){
                                        if(s[j]==z[j-i]){
                                                         
                                                        t++;
                                                        }
                                        }
                                        
                                        if(t==lz){
                                                 
                                                 loc=i;
                                                 i=ls;
                                                 j=lz;
                                                 }
                                        
                      }

    if(loc==-1){
                puts(s);
                }
    
    else{
         for(i=0;i<loc;i++){
                            printf("%c",s[i]);
                            }
         for(i=0;i<lp;i++){
                           printf("%c",p[i]);
                           }
         for(i=loc+lp;i<ls;i++){
                                printf("%c",s[i]);
                                }
         }
        return 0;
}