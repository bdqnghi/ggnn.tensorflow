int main () {
    char zf[101];
    int i;
    gets(zf);
    int l;
    l = strlen(zf);
    for(i=0;i<l;i++){
        if(zf[i]==' '){
           if(zf[i+1]==' '){
              zf[i+1] = '\0';           
           }      
        }
        if(zf[i]=='\0'){
           if(zf[i+1]==' '){
              zf[i+1] = '\0';           
           }             
        }
        if(zf[i]!='\0'){
           printf("%c",zf[i]);             
        }                                                    
    }
    return 0;
}