int main(){
    int i,n,m;
    char shuzu[6][10];
    char e[10];  
    for(i=0;i<5;i++){
        gets(shuzu[i]);          
                  }
    scanf("%d %d",&n,&m);            
    if(m<5&&m>=0&&n<5&&n>=0){
       strcpy(e,shuzu[n]);
       strcpy(shuzu[n],shuzu[m]);
       strcpy(shuzu[m],e);
       for(i=0;i<5;i++){
         puts(shuzu[i]);
                      }
                            }
    else
       printf("error");
                                    
    return 0;
}
