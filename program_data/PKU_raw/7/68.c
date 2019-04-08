int main(){
    char s[257];
    char a[257];
    char a1[257];
    int i,j,len,n=0,k,flag=0;
    gets(s);
    gets(a);
    gets(a1);
    len=strlen(a);
    for(i=0;s[i]!='\0';i++){
                            if(s[i]==a[0]){
                                           flag=1;
                                           n=i;
                                           for(j=i+1,k=1;j<i+len;j++,k++){
                                                                          if(s[j]!=a[k]){
                                                                                         flag=0;
                                                                                         }
                                                                          }
                                           if(flag==1) break;
                                           }
                            }
    if(flag==1){
                for(i=0;i<n;i++) printf("%c",s[i]);
                printf("%s",a1);
                for(i=n+len;s[i]!='\0';i++) printf("%c",s[i]);
                }
    if(flag==0) printf("%s",s);
    
    
    
    
    
    return 0;
}