int main(){
    char str[100],sub[100],re[100];
    gets(str);
    gets(sub);
    gets(re);
    int bar=0,min=0;
    int len1=strlen(str),len2=strlen(sub);
    for(int i=0;i<len1;){
            bar=0;
            if(str[i]==sub[0]){
                     for(int j=0;j<len2;j++){
                             if(str[i+j]!=sub[j]){
                                       bar=1;
                             }
                     }
                     if(bar==0&&min==0){
                             printf("%s",re);
                             i=i+len2;
                             min=1;
                     }
                     else{
                             printf("%c",str[i]);
                             i=i+1;
                             bar=0;
                     }
            }
            else{
                 printf("%c",str[i]);
                 i=i+1;
            }
    }
    return 0;
}
                       
                             
